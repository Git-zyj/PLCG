/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_17 = (~127);
                            var_18 = var_8;
                            var_19 = (((var_5 / (((arr_5 [i_2] [i_1]) ? var_10 : var_4)))));
                            var_20 += ((((((arr_3 [i_2]) && var_13)) || (arr_0 [i_3]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_21 = (((arr_1 [i_0]) ? (575078313 / var_2) : ((((var_7 | 24088) ? -127 : ((var_8 ? 150 : var_9)))))));

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 24;i_6 += 1)
                            {
                                var_22 ^= (arr_5 [i_4] [i_4]);
                                var_23 = 0;
                                arr_18 [i_1] = (arr_1 [i_5 - 1]);
                                var_24 = (arr_15 [i_0] [i_1] [i_0] [i_6] [i_6]);
                            }
                        }
                    }
                }
                arr_19 [i_1] = (min(((((min((arr_7 [i_0] [i_1]), (arr_6 [i_0] [i_0] [i_0] [i_0])))) ? ((-1970323713 ? var_9 : var_5)) : var_11)), (((arr_7 [i_1] [i_1]) + (arr_7 [i_1] [i_1])))));
                arr_20 [i_1] [i_1] = ((!((((var_10 / 1970323713) ? ((min((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]), var_5))) : var_3)))));
                var_25 = var_13;
            }
        }
    }
    var_26 = var_12;
    var_27 = (((~var_14) ? (((((max(var_13, var_7))) ? ((var_11 << (var_9 - 1511905527))) : (var_2 * -1)))) : ((max(var_11, var_16)))));
    #pragma endscop
}
