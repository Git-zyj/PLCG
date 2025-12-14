/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = var_2;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((max((((((arr_1 [i_0]) / (arr_6 [i_0] [i_1] [i_0] [i_2]))))), (arr_1 [i_0]))))));
                    arr_8 [0] = 65523;
                }
            }
        }
        arr_9 [i_0] = 0;
    }
    var_14 = var_3;

    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        arr_12 [i_3] = (!-1);
        arr_13 [i_3] [6] |= var_1;
        /* LoopNest 3 */
        for (int i_4 = 4; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 17;i_6 += 1)
                {
                    {
                        var_15 = (((((var_0 ? (arr_11 [i_5]) : 1))) ? ((var_11 ? -14535 : ((-(arr_19 [17] [i_4] [8] [i_6]))))) : var_0));
                        var_16 = (arr_20 [i_3 - 2] [i_4] [i_5] [8]);
                        var_17 = (max(var_17, (((!(((min(var_6, (arr_18 [i_3]))))))))));
                        var_18 -= ((((+((var_12 ? (arr_11 [2]) : var_0)))) - (arr_20 [i_3 - 2] [i_4] [i_5] [i_6])));
                        var_19 = ((-19 - ((var_6 ? (arr_15 [i_4] [i_4]) : (2097151 - var_1)))));
                    }
                }
            }
        }
    }
    var_20 = var_6;
    #pragma endscop
}
