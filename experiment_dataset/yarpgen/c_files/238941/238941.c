/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_12 = (!var_10);
                    var_13 = (arr_1 [i_0] [i_2]);

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] = (min((arr_2 [i_0] [i_1] [1]), ((min(2059533351, var_7)))));
                        var_14 = var_11;
                        arr_11 [i_3] [i_2] [i_1] [i_0] = 1023;
                        var_15 = ((((arr_9 [i_0] [i_1] [i_2] [i_3]) ^ 18446744073709551615)));
                        var_16 = ((((arr_0 [i_1] [i_2]) / 64497)));
                    }
                }
                for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
                {
                    arr_16 [i_4] [i_1] [i_4 - 1] = var_11;

                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        arr_19 [i_0] [i_4] [i_0] [i_0] [i_0] = ((72057594037927935 ? (((min(9078, 1023)))) : 65531));
                        arr_20 [i_4] [i_4] [i_4] = ((!((((arr_17 [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 1]) ? var_6 : (arr_14 [i_0] [i_4]))))));
                        var_17 = ((max(((5 ? -1 : (arr_17 [i_0] [i_1] [i_4] [i_5 - 1]))), var_9)));
                    }
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        var_18 += (((((774400197086957709 >> (-1063699819395578932 + 1063699819395578963)))) ? (min((64480 - 174), var_2)) : 33));
                        var_19 = ((((var_0 && (-32767 - 1))) ? var_8 : ((((!((min(var_5, (arr_2 [i_0] [i_0] [i_0]))))))))));
                        arr_23 [i_0] [i_0] [i_4] [4] [i_0] = max(((max((arr_14 [i_4] [i_4]), (arr_14 [i_4] [i_4])))), (min(var_2, (min((arr_13 [i_1]), 927744627501678105)))));
                    }
                }
                for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
                {
                    var_20 = 58942;
                    var_21 = (max(((min(0, var_3))), (arr_0 [i_1] [i_7])));
                }
                var_22 = (max(var_22, (((-(max(3763991342, var_6)))))));
                arr_26 [i_0] = 5678868671348519359;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            {
                var_23 = (((((7841882133432051056 ? (var_5 ^ 17059118944436318223) : (max(18347400117479054553, (arr_7 [i_8])))))) && (((-((var_7 ? -2 : 1)))))));
                var_24 = (max(var_24, (!-27355)));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_25 = (((1063699819395578931 ? 5678868671348519373 : 1)) >> ((((arr_9 [8] [i_9] [i_9] [i_9]) && var_11))));
                            var_26 = (((arr_37 [i_8] [0]) && (arr_35 [i_8] [i_9])));
                        }
                    }
                }
            }
        }
    }
    var_27 = var_3;
    var_28 = var_0;
    #pragma endscop
}
