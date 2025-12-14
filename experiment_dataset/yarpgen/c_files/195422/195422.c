/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 += (((((((max(1, var_5))) + ((var_5 ? 0 : var_16))))) ? var_7 : (max(((var_5 ? var_11 : var_11)), var_11))));
                    var_18 -= -var_15;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_19 = ((!(!var_3)));
                                arr_14 [5] [i_2] [i_1] [i_0] = 1810307616324530197;
                                var_20 = (max(var_20, ((((var_5 ? 1023 : 34330))))));
                                arr_15 [i_0] &= 1023;
                            }
                        }
                    }
                    var_21 = (max(var_21, var_8));
                    arr_16 [i_2] [i_2] [i_1] [17] = (max((64512 <= var_3), var_0));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_22 = ((1822463817 ? var_9 : (~0)));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_23 = ((((max((31205 != 14686), var_3))) ? (min((var_9 / var_1), var_9)) : -255));
                            arr_30 [i_7] [i_8 + 1] [i_7 - 1] [i_6] [i_7] = (((((((!var_15) != 8156788039601299603)))) & (min((~var_9), var_3))));
                            var_24 = (((!9223372036854775807) / var_2));
                            var_25 = var_11;
                            var_26 = (((-((var_0 >> (6255935801080983702 - 6255935801080983674))))));
                        }
                    }
                }
                var_27 = (min(var_27, (255 - 255)));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            arr_36 [i_5 - 1] [i_10] [i_5 - 1] [i_5] = var_13;
                            var_28 = ((-(max(((((var_9 + 2147483647) << (((-3441 + 3468) - 27))))), ((var_5 >> (var_10 - 2648389226260935809)))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 19;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            {
                var_29 = ((var_6 & (!484502637)));
                var_30 = (((((max(9223372036854775807, var_4)) ? ((255 ? (-9223372036854775807 - 1) : var_10)) : -29))));
                var_31 = (((-1810307616324530198 && var_7) == (var_11 - var_10)));
            }
        }
    }
    #pragma endscop
}
