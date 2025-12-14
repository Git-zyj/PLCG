/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_13 = ((((~(-2147483647 - 1)))));
                    var_14 |= -4964554061716973028;

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            var_15 = (((~(-127 - 1))));
                            var_16 = (~(arr_9 [i_0 + 1] [i_1 - 2] [i_2] [i_3] [i_4]));
                            arr_12 [i_4] [i_1] [i_2] = var_3;
                        }
                        for (int i_5 = 4; i_5 < 24;i_5 += 1)
                        {
                            var_17 = (min(var_17, (~2249600790429696)));
                            var_18 = ((~(~-2249600790429696)));
                            var_19 = (max(var_19, 2249600790429710));
                        }
                        var_20 = (!var_1);
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_21 |= -2249600790429697;
                        var_22 = ((-(-127 - 1)));
                    }
                }
                for (int i_7 = 2; i_7 < 24;i_7 += 1)
                {
                    arr_22 [i_1 + 1] = (!var_1);
                    var_23 = (~var_4);
                    var_24 = -2249600790429694;
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        var_25 = (((~(~255))));
                        var_26 = ((-(arr_9 [i_0] [15] [i_0 + 1] [i_0] [i_0 + 1])));
                        var_27 += ((~((~(~var_1)))));
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        var_28 = (!36843);
                        var_29 = (~31333);
                    }
                    for (int i_11 = 2; i_11 < 23;i_11 += 1)
                    {
                        var_30 = (~(arr_6 [i_0] [i_1 + 1] [i_8] [i_11]));
                        var_31 *= -var_10;
                    }
                    for (int i_12 = 2; i_12 < 24;i_12 += 1)
                    {
                        var_32 = ((-((-(arr_31 [i_0 - 1] [i_0 - 1] [i_8] [i_12])))));
                        var_33 = ((~((~(~9223372036854775807)))));
                    }

                    for (int i_13 = 1; i_13 < 22;i_13 += 1)
                    {
                        var_34 = -28458;
                        var_35 = (max(var_35, ((((-((~(arr_26 [i_0 - 1] [i_1] [i_8])))))))));

                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            arr_43 [i_0] [i_14] [i_8] [i_13] &= -var_9;
                            var_36 = (arr_25 [i_0] [i_0] [i_13] [i_14]);
                        }
                        var_37 = 2249600790429716;
                    }
                }
                for (int i_15 = 4; i_15 < 24;i_15 += 1)
                {
                    var_38 &= -2249600790429697;
                    var_39 = ((~(~3597363034413510441)));
                    var_40 = (((!(((-(arr_2 [i_0] [i_1])))))));
                    var_41 = (~268435455);
                }

                for (int i_16 = 2; i_16 < 21;i_16 += 1)
                {
                    arr_49 [i_0] [i_1 - 1] [i_16 - 2] = ((((!(arr_48 [i_0] [i_0])))));
                    arr_50 [i_0] [i_1] [i_16 + 2] = -5507520525073806545;
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    arr_53 [i_0 - 1] [i_17] [i_0] [i_0] = var_5;
                    var_42 = 25;
                }
                arr_54 [i_0] = 16383;
                var_43 *= (~var_1);
                arr_55 [i_0] [0] [i_1] = -var_6;
            }
        }
    }
    var_44 = var_3;
    var_45 *= -var_0;
    #pragma endscop
}
