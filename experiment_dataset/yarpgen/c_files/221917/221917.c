/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((2147483647 ^ (max((arr_3 [i_0] [i_0]), var_0))));
        arr_5 [i_0] [i_0] = (-((min(var_3, var_0))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_10 = (max(var_10, ((59022 >= (arr_1 [i_1] [i_1])))));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_16 [i_0] [i_2] [i_0] [i_4] = ((((arr_7 [3]) >= var_4)));
                            var_11 = (((arr_13 [i_0] [i_0] [i_3] [i_4]) & (((84 ^ (arr_9 [i_0] [i_3] [i_2] [i_4]))))));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_12 = (((arr_13 [i_5] [i_5] [0] [i_5]) ? var_0 : 4222));
                            var_13 = (max(var_13, (!-3593740902)));
                            var_14 -= ((-123 ? (arr_8 [1] [i_3]) : (((arr_3 [i_1] [4]) ? var_1 : (arr_12 [i_0] [i_1] [i_2] [i_0] [i_5])))));
                            var_15 = (min(var_15, ((((arr_11 [i_0] [i_0]) / 255)))));
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_16 = (50328 ? (arr_21 [i_1] [i_6 - 1] [i_6] [i_6 - 1] [i_0]) : var_6);
                            arr_23 [i_0] [i_1] [i_0] [i_3] [i_3] [1] [i_6 - 1] = (((arr_12 [i_6] [7] [i_6 - 1] [7] [7]) ? var_4 : (arr_12 [i_6] [i_6 - 1] [i_6 - 1] [i_1] [i_1])));
                        }
                        var_17 = (arr_0 [i_0]);
                    }
                }
            }
            var_18 = (((var_0 || 122) ? (arr_9 [i_0] [i_1] [i_0] [i_0]) : (arr_21 [i_0] [i_0] [i_0] [i_1] [i_0])));
        }
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            var_19 = (arr_21 [i_0] [i_0] [i_0] [10] [i_0]);
            arr_26 [i_0] [1] [i_7] = (arr_7 [i_0]);
            arr_27 [i_0] [i_0] = (((((var_8 ? -4218 : var_7)))) < (min((~var_1), ((min(0, (arr_25 [i_7 - 1] [i_0] [i_0])))))));
        }
    }
    var_20 = (var_7 ? (min(((4222 << (24576 - 24576))), var_1)) : (((((var_9 << (var_6 + 113)))) ? -var_4 : -var_9)));
    var_21 = (((((var_2 + ((min(1, 8)))))) ? (max(((var_8 ? var_1 : var_6)), (1 * var_5))) : ((var_5 ? ((min(4217, 7289))) : var_7))));
    #pragma endscop
}
