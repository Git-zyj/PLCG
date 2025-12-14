/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 = ((~(var_0 | 0)));
                                var_18 = ((-(0 > 1)));
                                var_19 = ((-504 < ((1 + (arr_0 [i_4 + 1])))));
                                var_20 ^= ((!((!(arr_8 [i_3 + 3] [i_3] [i_4 - 1] [i_4] [i_4])))));
                                arr_10 [i_0] = ((!((((var_6 | var_8) + (~var_4))))));
                            }
                        }
                    }
                }

                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    arr_13 [i_0] [i_1 - 1] [6] [i_5] = (((!1) + 151));
                    var_21 = (((15360 >> 1) == (((var_11 <= (arr_2 [i_1 - 2] [i_5 - 1]))))));
                }
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 14;i_7 += 1)
                    {
                        arr_18 [i_0] = (((arr_16 [i_0 + 3] [i_0]) < var_12));
                        arr_19 [i_0] [i_1] = (71776119061217280 == var_0);
                        var_22 = (1 + -925486520);
                        var_23 = (!var_2);
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        var_24 = (228 == 64);
                        var_25 = (((arr_20 [i_6 - 2] [i_8] [i_8] [i_6]) | (((arr_2 [0] [i_1]) << (4754081957254964501 - 4754081957254964480)))));
                    }
                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        arr_26 [i_0] [9] [i_6] [i_9] = (!1242225329);
                        arr_27 [i_6] [2] [7] [i_9] [i_6 - 1] = (((arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]) < (((((var_8 << (-925486520 + 925486527))) < (1 - 155))))));
                        arr_28 [i_0] = ((-1 > (((!(((~(arr_21 [i_0] [i_1 - 1] [i_1])))))))));
                        arr_29 [i_9] [i_6] [i_1] [i_0] = ((!(1 + var_10)));
                    }
                    var_26 = ((~(!var_9)));
                    arr_30 [i_0] [i_1 - 1] = ((!(((-(arr_12 [i_1 + 2]))))));
                    var_27 = (max(var_27, (((~(~var_13))))));
                }
                var_28 &= (~(var_4 | var_9));
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        {
                            arr_36 [i_0] [i_1] [i_10] [i_11] = ((~(((!(-501 - -2780))))));
                            var_29 ^= (((arr_34 [i_0 - 2] [i_0 + 3] [i_0 - 4] [i_1 - 1] [i_10 + 1] [i_0 - 2]) << ((((((((arr_33 [i_10] [i_10]) > -58))) | ((var_16 << (var_12 - 192))))) - 2408428))));
                            arr_37 [i_11] [i_11] [i_10 - 3] [i_1 + 1] [i_0 + 4] [i_0 + 4] = (((((4903060309081731520 >> (2532358165 - 2532358112)))) << (((~var_9) - 19422))));
                            var_30 = ((!(!var_5)));
                        }
                    }
                }
                arr_38 [i_0] = ((!((((-1 + 9223372036854775807) << (86266022 - 86266022))))));
            }
        }
    }
    var_31 = ((var_16 - ((-(var_14 > var_1)))));
    var_32 += var_8;
    var_33 = (var_8 <= (((((var_2 << (var_2 - 94980432))) == (var_3 + var_11)))));
    var_34 = (((((~var_13) >> (var_0 + 387819169))) + var_3));
    #pragma endscop
}
