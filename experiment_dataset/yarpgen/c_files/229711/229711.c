/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = var_6;
    var_17 = (min(var_9, (!var_9)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        var_18 = ((!((var_6 || ((min(var_0, 3454218330)))))));
                        var_19 = ((-((((((arr_8 [i_0] [i_1] [i_2] [i_3]) ? var_14 : (arr_9 [i_2] [11]))) == (arr_2 [i_0]))))));
                        var_20 = var_0;
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_4] = (((arr_13 [i_0 - 3] [i_1] [1] [1]) || ((((arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 2]) ? (((arr_2 [i_0]) + var_5)) : -var_10)))));
                        var_21 = (max(var_21, ((((min((arr_0 [i_2]), (arr_0 [i_4]))))))));
                        arr_17 [i_0] [i_2] [i_0] = ((~((var_6 ? ((var_0 & (arr_12 [1] [i_0]))) : var_5))));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_22 = var_1;
                        var_23 = (max(var_23, ((((max((((-107 ? (arr_2 [i_2]) : (arr_1 [i_2])))), (min((arr_0 [i_2]), var_6)))) < (((var_11 ? ((max((arr_11 [i_2]), (arr_7 [i_0 - 2] [i_1] [i_2] [i_5])))) : (arr_20 [i_0 - 3] [i_0 - 2])))))))));
                        var_24 = (((arr_19 [i_0] [i_1] [i_0] [i_0]) / (min(106, var_0))));
                    }

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_25 -= (arr_2 [i_2]);
                            var_26 *= (arr_26 [0] [i_1] [i_0] [i_1] [i_0]);
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            arr_30 [i_0] [i_0] [i_0 - 3] [i_1] [17] [i_6] [i_8] = (~(min(122, -572009893)));
                            arr_31 [i_0] = min((min((arr_11 [i_0 - 1]), (min(var_14, (arr_8 [16] [i_1] [i_6] [i_8]))))), (((~(arr_13 [i_0] [7] [i_0 - 1] [i_6])))));
                            var_27 *= (arr_21 [i_0] [i_8] [i_2] [0]);
                            arr_32 [i_8] [i_6] [i_0] [i_0] [17] [i_0] = ((+(((-76 || -420886912) / (((var_10 || (arr_25 [i_0 + 1] [i_0 + 1] [i_2] [i_6] [i_8]))))))));
                        }
                        var_28 -= arr_22 [i_2] [i_6] [i_6] [i_6];
                        arr_33 [i_0] [i_0] = (~(max(122, (((var_10 ? var_5 : 36606))))));
                        arr_34 [i_0] [16] [i_1] [i_1] [16] [i_0] = (((((((((arr_28 [i_0] [i_6] [i_2] [i_2] [i_2] [i_1] [i_0]) <= 2251228051))) << (-var_9 - 647174915)))) ? (((~var_11) - (arr_28 [i_0] [i_0] [1] [i_0 - 2] [i_1] [i_0 - 2] [i_0]))) : ((min((arr_7 [i_0] [i_1] [i_0] [i_6]), (arr_7 [i_6] [i_0] [i_0] [i_0]))))));
                    }
                    var_29 = ((-var_0 / ((((arr_12 [i_1] [i_0 + 1]) * (arr_12 [i_0 - 1] [i_0 - 1]))))));
                    arr_35 [i_0 + 1] [i_0] [i_2] = ((((-(arr_28 [i_0] [i_1] [14] [i_2] [14] [i_0 - 2] [i_0]))) / ((min((arr_28 [3] [i_1] [i_1] [20] [i_0] [i_0 - 3] [i_0]), (arr_28 [i_1] [i_1] [i_2] [i_1] [i_1] [i_0 + 1] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_30 = ((!(((+(((arr_14 [i_0] [i_0] [i_2] [i_9] [2]) ? (arr_15 [i_1] [i_9] [6] [i_2] [i_1] [i_0]) : -123)))))));
                                var_31 = var_8;
                                arr_42 [i_10] [19] [i_0] [i_0] [i_0 - 2] [i_0 - 3] = (arr_11 [i_0 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
