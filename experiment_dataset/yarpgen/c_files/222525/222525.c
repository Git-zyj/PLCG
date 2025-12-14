/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 = (max(((((arr_4 [i_1 - 1] [i_1 + 1]) < (arr_4 [i_0] [i_1])))), (max(0, ((((arr_3 [i_2 + 1] [7]) ? var_5 : var_2)))))));
                    var_11 = (min((((arr_1 [i_1 - 1]) ? 5350 : (arr_3 [i_1 + 2] [i_1]))), (((arr_4 [i_2 - 1] [i_1 - 1]) ? 53762 : 53793))));
                    var_12 *= ((((!((max(-1844877681, 255))))) ? (((((53789 ? (arr_7 [i_0]) : var_9)) + var_2))) : ((((var_7 < (arr_4 [i_0] [i_2]))) ? (max(var_7, 5295486991355216800)) : ((max(var_4, var_1)))))));
                    var_13 += (min(13151257082354334816, 799844255));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_14 = (!41186);
                        var_15 = ((((max((((4294967295 ? 53784 : 2363066705))), ((-28217 ? 2363066701 : 9169246697089438493))))) ? (-1372039071 + 1) : var_8));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_16 ^= (!var_3);
                            var_17 = ((1 ? -112 : 11727));
                            var_18 = (var_8 ? (arr_12 [i_2 - 1] [i_2] [i_2 - 1]) : var_3);
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        var_19 = ((13643 ? 1 : 14152193405154806892));
                        arr_16 [i_1] = ((-(arr_14 [i_0])));
                        arr_17 [i_0] [i_0] [i_1] [i_2 - 1] [i_1] = ((arr_10 [i_1 + 1] [i_1 - 1]) ? 5295486991355216800 : (arr_10 [i_1 + 1] [i_1 + 1]));
                        var_20 = var_2;
                        arr_18 [i_1] [i_1] [i_1] [i_1] = 204;
                    }
                }
            }
        }
        var_21 = ((var_3 ? var_0 : ((-1563081211 ? (var_3 && 11727) : ((max(var_8, (arr_0 [2]))))))));
        arr_19 [i_0] = (min((((arr_5 [i_0] [i_0] [i_0] [i_0]) - (arr_5 [i_0] [i_0] [i_0] [i_0]))), (((arr_13 [i_0] [i_0] [i_0] [i_0]) ? 561 : (arr_13 [i_0] [i_0] [i_0] [i_0])))));
        var_22 = (arr_1 [i_0]);
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_23 = (536805376 < 496);
        arr_22 [i_6] = (max((((!(arr_0 [i_6])))), 57587));
    }
    var_24 = var_3;
    var_25 = 53824;
    var_26 = ((var_0 ? var_3 : ((var_8 + (var_9 + var_3)))));
    #pragma endscop
}
