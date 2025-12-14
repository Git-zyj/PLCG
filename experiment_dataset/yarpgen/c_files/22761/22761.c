/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (~-376807139);
        var_17 -= var_12;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (((59680 ? 12367 : 48)))));
                    arr_7 [i_0] [i_0] [i_0] = var_1;
                    var_19 |= var_12;

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_20 = (max(var_20, (((5845 + (arr_8 [i_1 + 1] [i_1 - 2] [i_1 - 2]))))));
                        arr_12 [i_0] [i_1] [i_2 - 1] [i_3] = ((arr_9 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_2 + 1]) << (59672 - 59661));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_2] [i_4] [i_4] [i_1] = ((27 ? (((arr_5 [i_4] [i_1] [i_4] [23]) ? (arr_5 [i_4] [23] [i_1 - 2] [15]) : 59695)) : (arr_11 [i_1 - 2] [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1])));
                        arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] = ((((((arr_13 [i_0] [1] [i_2] [i_4] [i_0]) ? 8954055998649980257 : 7120403792935354793))) ? (~12993030345167340110) : (((arr_9 [21] [15] [i_1] [15]) ? (arr_4 [i_0] [i_0] [i_0]) : var_15))));
                    }
                }
            }
        }
        var_21 = ((-(arr_4 [i_0] [i_0] [i_0])));
    }
    var_22 = var_4;
    var_23 = 59681;
    var_24 = var_0;
    #pragma endscop
}
