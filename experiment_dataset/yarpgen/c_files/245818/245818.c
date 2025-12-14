/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(1, ((var_9 ? ((1 ? var_1 : var_7)) : var_13))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = var_13;
        var_19 = (min(var_19, (((~(18166760608190552988 ^ var_0))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_14 [i_1] [i_1] [i_2] [i_1] = (var_0 ? var_2 : (((arr_8 [i_1] [i_2]) * (arr_7 [i_1] [i_3]))));
                        var_20 -= ((1 ? (arr_9 [i_2 - 3]) : 1));
                        var_21 = ((!(arr_13 [i_2] [i_2])));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_18 [i_2] [11] [i_2] [i_2] = (((arr_4 [i_2 - 2]) ? ((var_3 << (var_5 - 1349988426))) : -1305782773));
                        arr_19 [i_2] = var_15;
                        var_22 = (max(var_22, 6917529027641081856));
                    }
                    var_23 = ((var_1 | (arr_7 [i_2 - 2] [i_2 - 3])));
                    var_24 = 18446744073709551609;
                    var_25 = -3257;
                    var_26 = (max(var_26, ((-(arr_11 [i_1] [i_2 - 2] [i_2 - 2] [14] [i_1] [i_2])))));
                }
            }
        }

        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            arr_23 [i_1] [i_6] = var_7;
            var_27 = (((var_2 | 20) ^ var_8));
            arr_24 [i_1] [1] [i_6 + 1] = 848119392002856947;
        }
        for (int i_7 = 2; i_7 < 17;i_7 += 1)
        {
            var_28 = (max(var_28, 1));

            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                var_29 = (arr_7 [i_7 + 1] [i_7 + 2]);

                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    var_30 -= (arr_30 [i_7 + 2] [10]);

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_33 [i_1] [i_1] [i_7] [i_1] [2] [i_7] [i_1] = ((1 >> ((((-1 | (arr_4 [i_8]))) + 32))));
                        var_31 = ((var_14 ? (arr_10 [i_7] [i_1] [17] [i_1]) : ((((1 > (arr_28 [i_7 + 3])))))));
                        var_32 = var_16;
                        var_33 = (min(var_33, ((((arr_32 [i_7 + 3] [i_8] [i_9 - 1] [i_9 - 1] [i_7 + 3] [i_9 - 1]) >= 1)))));
                        var_34 &= (arr_25 [14] [14]);
                    }
                }
                for (int i_11 = 2; i_11 < 17;i_11 += 1)
                {
                    var_35 = (min(var_35, 1));
                    var_36 = (min(var_36, (arr_32 [i_7 - 1] [i_11 + 2] [i_11 - 2] [i_11 + 1] [i_11 + 2] [17])));
                    var_37 = ((~(-26 & var_1)));
                    var_38 = (arr_32 [i_11 + 1] [i_11] [i_11] [i_11] [i_11 - 2] [i_7]);
                }
                arr_37 [i_7] = (((arr_25 [i_7] [i_7]) & 18));
            }
            var_39 = (((var_9 ? (arr_25 [i_7] [i_7 + 3]) : -1390412929411478148)) / (~var_3));
            var_40 = ((var_6 + (arr_29 [i_7] [i_7])));
        }
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            var_41 = var_15;
            arr_41 [i_1] = var_4;
        }
    }
    for (int i_13 = 0; i_13 < 15;i_13 += 1)
    {
        arr_46 [11] = (min((min((arr_35 [i_13] [12] [4]), (!var_13))), (((min(1, -44808178))))));

        /* vectorizable */
        for (int i_14 = 4; i_14 < 11;i_14 += 1)
        {
            var_42 = var_0;
            arr_49 [i_13] [i_13] = (arr_26 [i_13] [i_13]);
        }

        for (int i_15 = 1; i_15 < 12;i_15 += 1)
        {
            var_43 = (((((((1 >= (arr_38 [i_13])))) << (-var_4 + 22)))) ? ((((arr_10 [i_15] [i_13] [i_15] [i_15]) && (arr_30 [i_15 - 1] [i_15])))) : 65523);
            var_44 = (min(805583855, (((arr_31 [i_13] [i_15] [i_15 + 2] [i_13] [i_15]) ? -1094486695 : (arr_51 [i_15] [i_15 + 1] [i_15])))));
            arr_54 [i_13] [i_15] [i_15] = var_10;
            arr_55 [i_15] = ((((min(((((arr_39 [i_13] [i_15] [i_13]) >> (((arr_12 [i_13] [i_13] [i_13] [i_15]) - 2434737))))), (~-6155967912612723006)))) ? ((5419025843866339226 ? var_9 : (var_5 <= -15326))) : ((((((~(arr_27 [i_13] [i_13] [i_15] [0])))) >= -1)))));
        }
    }
    var_45 = (((((min(var_0, var_16)))) * -var_0));
    #pragma endscop
}
