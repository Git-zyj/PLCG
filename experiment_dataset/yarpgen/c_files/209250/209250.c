/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = ((-(((!(-3676289112567491125 / var_9))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = (((((var_10 ? (arr_6 [i_1] [i_1 + 4] [i_3 - 2] [i_3 - 2]) : (arr_6 [i_1] [i_1 + 2] [i_3 - 3] [i_1])))) <= ((-1 ? (81 + var_7) : var_8))));
                                var_15 |= ((+(min((arr_10 [i_4] [i_4] [i_1] [i_3 + 1] [i_2] [i_4] [i_2]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] [i_3 - 4])))));
                                var_16 = (max(var_16, 16777215));
                                arr_12 [i_1] [i_1 + 4] = (((10211 ? 134 : 1)));
                            }
                        }
                    }
                    var_17 = (((((((((-1709434107 ? var_10 : 1))) && ((((arr_0 [i_2]) & 1))))))) / ((var_11 >> ((((min((arr_5 [i_0] [i_2] [i_2] [i_0]), 140))) - 127))))));

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_6] = var_1;
                            var_18 = (max(var_18, ((min((((arr_13 [i_2] [i_0]) ? var_9 : (arr_2 [i_1 - 1] [i_1]))), (((var_10 != ((89 ? -59 : -1))))))))));
                            var_19 = (max(var_19, (((var_1 / (arr_13 [i_5] [i_1 + 1]))))));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_20 = (max(var_20, ((((((!354684311) ? ((((arr_18 [i_0] [i_1] [i_2] [i_5] [i_7]) + (arr_6 [i_5] [i_5] [i_2] [i_5])))) : (arr_10 [i_5] [i_1] [i_7] [i_7] [i_2] [i_1 + 4] [i_2])))) || var_2))));
                            var_21 |= (((arr_3 [i_5]) || 58));
                            arr_21 [i_1] [i_1] [i_1] [i_1] [i_7] [i_5] [i_7] = ((-(max((arr_16 [i_0] [i_0] [i_0] [i_0]), 65))));
                        }
                        var_22 = (arr_2 [i_0] [i_2]);
                        var_23 = (min((((arr_1 [i_0]) + (max(9223372036854775807, var_11)))), var_1));
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, var_11));
    #pragma endscop
}
