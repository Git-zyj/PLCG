/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (var_3 + var_6)));
    var_16 *= (((((((max(124, var_14))) ? (var_5 | var_2) : -var_5))) && var_4));
    var_17 = (min(var_17, var_2));

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_18 = (arr_1 [i_0]);
        var_19 = (min(var_19, ((((min(((max(-996264705677829888, 59))), (max(17656, var_2)))) < var_6)))));
        var_20 -= (max(-var_7, -22706));

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_21 = var_10;
            arr_5 [5] [i_1 - 1] |= (min(-65520, var_0));
        }

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_22 = (max(var_22, ((((((-(var_10 % var_12)))) ? (min(var_6, (arr_6 [1] [1] [1]))) : (max(var_12, ((var_14 ? -17673 : 184)))))))));

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                arr_11 [6] [8] |= var_8;
                var_23 = (min(-1276299618, 9223372036854775807));
                var_24 = ((-((-(arr_4 [i_0 + 1])))));
                var_25 = var_12;
                var_26 = var_13;
            }
            arr_12 [i_0 + 2] [i_2] [7] = (min(((((min(var_1, (arr_10 [i_0] [i_0 + 2] [i_2])))) ? (max(var_4, -1)) : var_0)), var_1));
            arr_13 [i_2] [i_2] = (min(((((-22672 ? 10242 : 14176307494580411050)) >> var_8)), ((((max(550598439, 5))) ? (((13719213396643426625 ? var_6 : 3744368843))) : ((4270436579129140547 ? 4294967284 : 14176307494580411069))))));
            arr_14 [i_2] [2] = ((-(min((arr_7 [i_2]), (max(-1, 11))))));
        }
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_27 ^= (max(-550598409, (((arr_10 [i_4 + 1] [i_4] [i_4]) ? var_0 : var_9))));
        var_28 = (((~((var_0 ? -1 : var_5)))) >= (((2285 && (var_2 > -726340608)))));
        var_29 = (min(var_12, (((arr_3 [i_4] [i_4] [1]) + (min(439593658, (arr_3 [i_4] [6] [i_4])))))));
        var_30 = var_7;
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_31 = ((-(506164011 % var_2)));
        var_32 -= (((-24 % var_13) ? ((((arr_0 [i_5 + 2]) || 4270436579129140559))) : -var_10));
        var_33 *= (((arr_6 [i_5 + 2] [i_5 + 4] [1]) / var_9));
    }
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 4; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    var_34 *= (min(((min(0, 31))), ((-((106 ? -119 : var_5))))));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_35 = -var_12;
                        var_36 = -var_7;
                    }
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        var_37 = 65535;
                        var_38 = -var_0;
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            var_39 = (min(var_39, -1));
                            var_40 = (min(var_40, ((var_8 ? 17592185913344 : (~28983)))));
                        }
                        var_41 |= ((10397 > (var_13 & 7760)));
                    }
                    var_42 = arr_21 [i_6 + 2];
                }
            }
        }
        arr_35 [i_6] = (((max(var_7, 1))) < (((1 >> (72 - 53)))));
    }
    var_43 = (min(var_43, ((min(var_4, 14176307494580411050)))));
    #pragma endscop
}
