/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_17));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = (((((arr_2 [i_2]) / ((var_4 * (arr_8 [i_0] [i_0])))))) ? ((((((-8079679875231383938 + 9223372036854775807) << (var_17 - 8265453155823947801)))) ? (!8079679875231383937) : (arr_13 [i_1] [i_1] [i_0]))) : (arr_0 [i_3] [i_1]));
                                arr_15 [i_4] [i_4] [i_0] [i_1] [i_4] [i_0] = (((max((arr_3 [i_0]), (((-(arr_2 [i_3]))))))) ? -8079679875231383938 : ((((max(255, -72))) ? (((arr_5 [i_1]) & 8079679875231383937)) : (arr_11 [i_1]))));
                                var_21 = (min(var_21, ((max(((~(arr_6 [i_3] [i_2] [i_1]))), (1035845214 % var_2))))));
                                var_22 -= (max((min(0, (arr_5 [i_2]))), (((324493905352949997 & 251) % (arr_5 [7])))));
                                var_23 = arr_12 [i_0] [i_1] [i_2] [i_0] [i_4] [i_1] [i_3];
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        var_24 = 252;

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_21 [i_6] [i_5] [i_5] [i_1] [i_0] = var_7;
                            var_25 = (arr_9 [i_5] [i_5 + 2] [2] [i_5 + 2]);
                            var_26 = var_5;
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_27 = (arr_8 [i_1] [i_5 + 2]);
                            var_28 |= (arr_6 [i_0] [i_1] [i_0]);
                            var_29 = (~((841309867854469847 ? (arr_17 [i_0] [i_2] [i_7]) : var_1)));
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_30 = (arr_27 [i_5 - 1] [i_5 - 1] [i_5 + 2] [i_5 - 1] [i_5 + 1]);
                            var_31 = ((((!(arr_1 [i_1] [i_0]))) ? (arr_7 [i_2] [i_8]) : ((((!(arr_13 [i_0] [16] [i_2])))))));
                            var_32 = -1035845231;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 4; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                {
                    var_33 ^= ((~(!var_4)));
                    var_34 = (!var_16);
                }
            }
        }
    }
    #pragma endscop
}
