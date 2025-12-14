/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((1 * ((var_0 / (max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))))));
                var_14 = 4;
                arr_7 [i_0] [i_0] [i_1] = 4281240335;
                arr_8 [i_0] [i_0] [i_0] = ((!(arr_0 [i_0])));
            }
        }
    }
    var_15 = var_13;
    var_16 = (((-1814375972 - -2022066697) > (min((var_13 - var_2), (var_1 > var_3)))));

    for (int i_2 = 4; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
        {
            var_17 = (max(var_17, ((((~(18446744073709551615 < 2147483647)))))));
            var_18 += ((((-(min(var_8, -2022066697))))) ? (((var_2 != (arr_2 [i_3 + 1] [i_3])))) : ((821678009 << (((703143047 || (arr_11 [i_2 - 2] [i_3])))))));
        }
        for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
        {
            var_19 = (max(((-458019191 ? var_7 : ((-806487287 - (arr_4 [i_2] [i_4] [i_2 + 1]))))), ((((arr_11 [i_2] [i_2]) < ((var_2 >> (((arr_3 [i_2] [11]) + 662233002)))))))));
            var_20 = (min((((min(var_2, var_5)) > -1)), (((806487287 - -1) != (max((arr_5 [i_4]), 1871616980))))));
            arr_16 [i_4] [i_4] = ((((-538876566 >= var_7) >> (((~16300934496382448547) - 2145809577327103041)))) < (min(-0, ((((arr_0 [i_4]) >= 1))))));
        }
        for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_26 [i_5] [13] [i_6] [i_5 - 1] [i_5] = var_1;
                            arr_27 [i_5] [i_5] [i_8] [i_5] = (min((var_6 - 3583549301), (((-(arr_19 [i_2 - 2] [i_5 + 1]))))));
                            arr_28 [i_5] [i_5] [i_5] [i_8] [i_8] [i_5] = (((min(var_12, -16300934496382448547)) - (((2958233183 << (3905695136 - 3905695118))))));
                        }
                    }
                }
            }

            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                var_21 = 15976438484720520608;

                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_22 |= ((var_13 >= (((max(18446744073709551615, var_6)) ^ (arr_1 [i_9])))));
                    arr_34 [i_2] [i_2] [i_5 + 2] [i_5 + 2] [i_9] [i_5] = (min(-806487287, (min(-0, 806487286))));
                    arr_35 [i_10] [i_5] [i_5] [i_5] [i_2] = (arr_31 [i_2 - 4] [i_2 - 4] [i_2 - 4]);
                    arr_36 [i_5] [i_9] [i_5] = ((((arr_29 [i_5]) % (arr_29 [i_5]))) & ((2147483647 - (arr_29 [i_5]))));
                    arr_37 [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 2] [i_9] [i_5] = ((((((var_11 > ((((var_9 < (arr_10 [i_5]))))))))) > (((min(var_0, 1588662217)) - (((min(1, var_3))))))));
                }
            }
        }
        var_23 = (((arr_10 [i_2]) - (arr_30 [i_2] [i_2] [i_2] [i_2])));
    }
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        var_24 = (-var_12 ^ ((((arr_5 [i_11]) > (arr_5 [i_11])))));
        arr_41 [i_11] = (min(((((var_5 ? (arr_39 [i_11]) : var_13)))), (arr_0 [i_11])));
        arr_42 [6] [i_11] = ((((max(9371040260704364151, 2057532262) | (arr_3 [i_11] [i_11])))));
        var_25 -= (((((var_0 * ((((arr_1 [i_11]) || (arr_2 [i_11] [1]))))))) ? (max((((arr_5 [i_11]) << (var_5 + 1378927376))), -350203894)) : (arr_5 [i_11])));
    }
    #pragma endscop
}
