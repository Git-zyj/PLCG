/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] = -3659;
                    arr_8 [i_1] [i_1] [i_1] = var_4;
                }
            }
        }
        arr_9 [i_0] = (((arr_5 [i_0] [i_0]) & (arr_5 [i_0] [i_0])));

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_14 = (max(var_14, (((arr_1 [i_3] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
            arr_13 [1] [i_3] = (arr_2 [i_0]);
            arr_14 [i_3] [i_0] [i_0] = ((arr_0 [i_0] [i_3]) ? var_7 : (arr_10 [i_0] [i_3]));
            arr_15 [i_3] [i_3] = (arr_4 [i_0] [i_3]);
            arr_16 [i_3] [i_3] = var_7;
        }
    }

    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_15 = (((arr_4 [i_4] [i_4]) || (((-(arr_10 [i_4] [i_4]))))));
        var_16 = ((-9893 || ((((((var_2 ? 9913 : (arr_5 [i_4] [i_4])))) ? (422216164 & 1365717577) : (arr_18 [i_4]))))));
    }
    var_17 = var_12;
    var_18 -= var_12;
    var_19 = var_12;
    #pragma endscop
}
