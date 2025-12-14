/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_11 <= var_7) ? (((((0 ? var_11 : var_0))) + ((var_8 ? var_4 : var_17)))) : (!var_8)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (!var_3);
                var_20 = (min((((-1077991878 + 2147483647) >> (var_6 - 6616894470658948052))), (var_1 / -2972902988358175113)));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 ^= (max((((arr_6 [i_0 + 3] [i_2 - 1]) ? (arr_6 [i_0 + 3] [i_2 + 1]) : (arr_6 [i_0 - 1] [i_2 + 1]))), var_8));
                                var_22 = ((-(((!((max(var_10, var_16))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_17 [i_0] [i_5] [3] [i_5] [i_6] = ((min(var_10, 2972902988358175135)));
                            var_23 = max(((((((arr_9 [i_0] [i_0] [i_0] [i_0]) / var_14))) ? (arr_7 [i_5] [i_1]) : (1 / var_16))), var_9);
                            var_24 -= (3658256254 & var_11);
                            arr_18 [i_5] = var_1;
                        }
                    }
                }
                arr_19 [i_1] = (max((((!(arr_1 [i_0 + 1])))), var_6));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_29 [i_9] = ((((max(var_4, 4862642257867999432))) ? ((+(((arr_20 [i_8]) ? 12042818520498017950 : var_3)))) : ((min(var_0, (var_7 % 511))))));
                    var_25 = ((((!(!0)))) * ((((var_6 + (arr_25 [i_7]))))));
                    var_26 = (max(var_26, (((var_14 != ((-1 & (arr_24 [i_9] [i_8] [i_7]))))))));
                }
            }
        }
    }
    #pragma endscop
}
