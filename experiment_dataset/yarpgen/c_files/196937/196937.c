/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] &= (-9223372036854775807 - 1);

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_12 += (((((var_9 ? var_2 : var_3))) ? (((var_11 ? var_7 : var_0))) : ((var_7 ? var_7 : var_3))));
            var_13 = (var_6 ? ((var_7 ? var_0 : var_9)) : (((var_8 ? var_5 : var_6))));
        }

        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_0 - 3] [i_0] [i_0 - 3] |= ((-((var_6 ? var_11 : var_9))));

            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    arr_16 [i_3] [i_3] = (~var_11);
                    var_14 += 45;

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_20 [14] [14] &= (((((var_8 ? var_6 : var_5))) ? (((var_1 ? var_5 : var_4))) : var_3));
                        var_15 -= var_2;
                        var_16 &= (((((var_6 ? var_11 : var_2))) ? (~var_0) : var_1));
                    }
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_17 *= (((((var_8 ? var_5 : var_1))) ? ((-45 ? (-9223372036854775807 - 1) : 8463685498718020335)) : var_0));
                        arr_27 [i_6] [i_2 + 4] [i_3 + 2] [i_6] [i_6] [i_3 + 2] |= var_8;
                        var_18 ^= (((((var_7 ? var_7 : var_7))) ? var_1 : (~var_7)));
                        var_19 -= ((var_11 ? var_8 : var_11));
                    }
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        var_20 &= var_4;
                        var_21 ^= ((var_10 ? ((var_4 ? var_4 : var_3)) : var_10));
                        var_22 *= var_2;
                        arr_32 [i_3] [i_3] = ((-var_1 ? (((var_10 ? var_5 : var_2))) : (~var_1)));
                        arr_33 [i_0 + 1] [i_6] [i_3 + 1] [i_6] [i_8 + 1] &= var_7;
                    }

                    for (int i_9 = 1; i_9 < 20;i_9 += 1)
                    {
                        arr_37 [i_9 - 1] [i_9] [i_6] [i_3] [1] [i_0 + 3] [i_0] = ((var_3 ? var_7 : var_6));
                        arr_38 [i_0] [i_2] [i_6] [i_9] [i_6] [i_3] &= ((var_0 ? var_6 : var_10));
                        arr_39 [i_0] [i_0] [i_6] [i_6] [i_9 + 1] &= var_1;
                        arr_40 [i_3] = (~var_0);
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        arr_44 [11] [i_2] [11] [i_3 + 1] [i_6] [i_10] [i_3] = var_4;
                        var_23 = (((var_11 ? var_9 : var_0)));
                        arr_45 [i_2] [14] [i_6] [i_10] &= (!var_5);
                    }
                    for (int i_11 = 1; i_11 < 20;i_11 += 1)
                    {
                        var_24 &= (!var_4);
                        arr_48 [i_2 + 4] [i_6] [i_11] &= var_5;
                        arr_49 [i_6] [0] [i_3 - 1] [i_2] [i_0] [i_6] &= (((((var_10 ? var_8 : var_2))) ? var_6 : var_0));
                        var_25 |= (~var_4);
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        var_26 &= var_0;
                        arr_52 [i_6] [i_2 + 2] [i_2 + 2] [i_6] [i_12] &= (!var_2);
                        arr_53 [i_6] [i_6] [i_2 - 2] [i_2 - 2] [i_6] &= ((var_1 ? ((var_7 ? var_3 : var_9)) : var_9));
                        var_27 |= var_6;
                    }

                    for (int i_13 = 1; i_13 < 20;i_13 += 1)
                    {
                        arr_56 [i_0] [i_2] [i_6] [i_6] [i_13] &= ((-((9983058574991531281 ? 29979 : 8495872213232777721))));
                        arr_57 [i_6] [i_2 - 2] [i_3] [i_6] [i_13 + 1] [i_3] &= ((var_4 ? var_7 : var_0));
                        var_28 = ((var_5 ? var_1 : var_1));
                    }
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        var_29 &= (((!var_0) ? ((var_5 ? var_2 : var_10)) : var_5));
                        arr_61 [i_6] [i_3 + 1] [i_6] &= (var_5 ? var_8 : var_9);
                        arr_62 [i_0 - 4] [i_3] [i_3 + 1] [i_6] [i_6] [i_14] = (((var_2 ? var_9 : var_10)));
                        var_30 -= var_6;
                    }
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        var_31 = ((var_10 ? var_6 : var_8));
                        var_32 = ((var_3 ? ((var_10 ? var_4 : var_4)) : (~var_5)));
                    }
                }
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    arr_68 [8] [4] [4] [4] &= var_3;
                    arr_69 [6] [6] &= ((var_5 ? ((var_4 ? var_0 : var_9)) : ((var_10 ? var_3 : var_11))));
                    arr_70 [20] [i_3 - 1] [i_2 + 2] [20] &= ((var_7 ? var_7 : var_10));
                }
                var_33 *= ((var_9 ? ((var_9 ? var_11 : var_9)) : var_6));
            }
            var_34 ^= ((var_0 ? var_5 : var_1));
            var_35 |= var_3;
        }
    }
    var_36 |= ((62 ? 8191 : 255));
    #pragma endscop
}
