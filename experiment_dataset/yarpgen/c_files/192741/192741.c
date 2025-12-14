/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (!65507);
    var_11 = ((!((!(~var_4)))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_12 ^= ((~(!var_2)));
        arr_4 [i_0] = ((~(!var_9)));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_13 = ((!(~-249)));
            var_14 = (~213961455527114764);
            var_15 = (~(+-1));
            var_16 = (max(var_16, (((-((-(!17981019262888147928))))))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_17 = (min(var_17, (((~((~((~(arr_5 [i_0] [i_0]))))))))));
            arr_10 [i_0] [i_2] = ((!((((-(arr_7 [7] [i_2])))))));
        }
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {

            /* vectorizable */
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                var_18 ^= ((~(((!(arr_1 [i_3]))))));
                var_19 -= (~3782703497521685868);
                var_20 = var_7;
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_21 = ((~(((-(arr_14 [i_0] [i_3] [i_3]))))));
                var_22 ^= (-(((!((!(arr_11 [i_5] [i_5])))))));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {

                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    var_23 ^= (~1);

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_24 = ((-(~var_7)));
                        var_25 = -var_1;
                        var_26 ^= (--98);
                    }
                    for (int i_9 = 2; i_9 < 20;i_9 += 1)
                    {
                        var_27 = ((-(!var_1)));
                        var_28 = (~5140673896275967168);
                        arr_30 [i_0] [i_3] [i_3] [i_6] [i_0] [i_9] = (arr_11 [i_0] [i_3]);
                        var_29 = (!20);
                    }
                    arr_31 [i_0] [i_0] [i_3] [i_6] [i_6] [i_7 - 2] = ((~((-(arr_16 [i_0] [i_0] [i_0] [i_0])))));
                }
                for (int i_10 = 2; i_10 < 18;i_10 += 1)
                {
                    var_30 ^= ((((!(arr_16 [14] [i_3] [i_6] [i_10])))));
                    var_31 ^= (!26582);
                    arr_34 [i_0] [i_3] [14] [i_10] [i_10] = ((~(arr_8 [i_0] [i_6] [i_6])));

                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        var_32 = 2147483617;
                        var_33 *= (~9223372036854775807);
                        var_34 = (max(var_34, (((~((~(arr_20 [i_11]))))))));
                    }
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        var_35 = (!(((~(arr_27 [i_0] [i_0] [i_6] [i_6] [i_12] [1] [i_6])))));
                        var_36 *= 107;
                    }
                    for (int i_13 = 3; i_13 < 19;i_13 += 1)
                    {
                        var_37 = (~98);
                        var_38 ^= (!9223372036854775807);
                        var_39 = 254;
                        arr_42 [i_0] [i_3] [i_6] [i_10] [i_0] = (((~(arr_25 [15] [15] [i_6] [i_6] [21] [15]))));
                    }
                }
                for (int i_14 = 2; i_14 < 21;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        var_40 += -22495;
                        var_41 = (!var_6);
                        var_42 = ((!(!var_8)));
                        arr_47 [i_0] [i_3] [i_6] [i_14] [i_15] = ((~((~(-9223372036854775807 - 1)))));
                    }
                    for (int i_16 = 2; i_16 < 20;i_16 += 1)
                    {
                        arr_52 [i_0] [i_6] = (((~(arr_48 [i_0 + 1] [i_0 + 1] [i_6] [i_14] [i_16] [i_0 + 1]))));
                        var_43 = (~var_5);
                    }
                    arr_53 [i_14] [i_0] [i_0] [i_0] = -var_0;
                    arr_54 [i_0] [i_3 - 1] [i_6] [i_0] = (~var_3);
                }
                var_44 = ((~(((!(arr_0 [i_0]))))));
                var_45 = -0;
            }
            for (int i_17 = 2; i_17 < 21;i_17 += 1)
            {
                var_46 = (max(var_46, (+-var_3)));
                arr_57 [i_0] = (!1);
                arr_58 [i_0] = ((~(!-var_4)));
            }
            arr_59 [i_0] [i_0] = 53309;
            var_47 -= (((-(!-6213516156766527040))));
            var_48 = (min(var_48, (((~((~(~-9223372036854775799))))))));
            var_49 ^= -var_2;
        }
        var_50 -= (!var_5);
    }
    #pragma endscop
}
