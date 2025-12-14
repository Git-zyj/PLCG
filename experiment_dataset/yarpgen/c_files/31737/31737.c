/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 100;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (min(var_11, (arr_0 [0])));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] = (((arr_2 [i_2] [i_3] [i_3]) ? (arr_2 [i_0] [i_1] [i_3]) : (arr_2 [15] [i_3] [i_4])));
                            var_12 = ((-(arr_5 [i_0] [i_3])));
                            var_13 = 126;
                        }
                        var_14 = var_7;
                        var_15 = (arr_7 [i_0] [i_0] [i_0]);
                    }
                }
            }
            var_16 -= (arr_7 [i_0] [i_0] [i_1]);
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            arr_16 [i_0] [i_0] [i_5] = (arr_5 [1] [i_0]);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_22 [i_0] = var_8;
                        arr_23 [i_0] [i_0] [i_6] [i_0] = (arr_3 [i_0] [i_0] [i_0]);
                        arr_24 [i_7] [i_5] |= (arr_19 [i_0] [i_0]);
                        var_17 = (max(var_17, var_6));
                    }
                }
            }
            var_18 += ((-var_7 ? (arr_4 [i_0] [i_0] [i_0]) : var_6));
            var_19 = (min(var_19, ((((arr_18 [i_5] [i_0]) ? (arr_4 [i_0] [i_5] [i_0]) : 0)))));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 18;i_9 += 1)
                {
                    {
                        arr_29 [i_0] [i_5] [i_5] [i_8] [i_9] |= -var_7;
                        var_20 += (var_4 >= var_9);

                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            var_21 = 6300943422616002770;
                            arr_32 [i_0] [i_5] [i_8] [i_9] [i_0] = ((-(17133 == 48412)));
                        }
                        var_22 = (arr_27 [i_9] [i_8] [i_5]);
                        var_23 = (arr_4 [i_0] [i_5] [i_5]);
                    }
                }
            }
        }
        var_24 += (-1207394776 ^ 1);
        arr_33 [i_0] [i_0] = var_1;
    }
    for (int i_11 = 1; i_11 < 8;i_11 += 1)
    {
        arr_37 [i_11] = ((((((((10485617642098037037 ? (arr_5 [15] [i_11]) : var_6))) ? (arr_26 [i_11]) : (arr_36 [i_11 - 1] [i_11])))) ? (((arr_5 [i_11 - 1] [i_11 + 2]) | -var_5)) : ((min((arr_18 [i_11 + 2] [i_11 + 1]), var_5)))));
        var_25 = var_1;
        var_26 = (max(var_26, ((((arr_36 [i_11] [i_11]) ? -var_3 : ((-(var_6 ^ var_3))))))));
    }
    var_27 = (((((((((min(-65, -26761))) + 2147483647)) >> (31 ^ var_8)))) ? var_6 : (-26761 == 48402)));
    /* LoopNest 3 */
    for (int i_12 = 1; i_12 < 21;i_12 += 1)
    {
        for (int i_13 = 2; i_13 < 21;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                {
                    var_28 += (((arr_41 [i_12] [i_12]) * ((-((-32 ? var_8 : 17133))))));

                    for (int i_15 = 1; i_15 < 20;i_15 += 1)
                    {
                        arr_47 [i_15] [i_15] [i_14] [6] [i_12] [i_12] = (((((-(arr_46 [i_13] [i_13 - 2] [i_13 - 2])))) ? ((((arr_44 [i_15 + 2] [i_14] [i_13 + 1] [i_12 - 1]) ? (arr_44 [i_15] [i_14] [i_13 - 1] [i_12]) : (arr_44 [i_12 + 1] [i_13] [i_14] [i_14])))) : -var_9));
                        var_29 = (min(var_29, (arr_42 [i_12] [i_12] [i_13] [i_12])));
                        arr_48 [i_12 - 1] [i_12 - 1] [i_15] = (arr_38 [i_12]);
                        var_30 = ((-(((var_2 != (arr_45 [i_12] [i_12] [i_12] [i_12 - 1]))))));
                    }
                    for (int i_16 = 1; i_16 < 20;i_16 += 1)
                    {

                        for (int i_17 = 4; i_17 < 18;i_17 += 1)
                        {
                            arr_53 [i_16] [i_16] = (arr_52 [i_12] [6] [i_16] [11] [i_17]);
                            var_31 = (-18 - 17142);
                        }
                        for (int i_18 = 2; i_18 < 21;i_18 += 1) /* same iter space */
                        {
                            arr_57 [i_12] [17] [i_16] [i_16] [i_18] [i_13 - 2] = ((-((max(var_7, (arr_55 [i_13] [i_16] [i_16] [i_18 - 1] [16]))))));
                            arr_58 [i_16] = ((-(arr_43 [i_12] [i_12] [11] [i_12 + 1])));
                            arr_59 [i_18 - 2] [i_16] [i_16] [i_13] [i_12] = (((-1522135428 / -63) | (min(((min(-13, 17))), ((29969 << (18446744073709551615 - 18446744073709551606)))))));
                            var_32 = (max(var_32, 17961));
                        }
                        for (int i_19 = 2; i_19 < 21;i_19 += 1) /* same iter space */
                        {
                            arr_62 [i_12] [i_13 - 1] [i_14] [i_14] [16] [1] |= 0;
                            var_33 -= var_5;
                            var_34 = (max(var_34, 0));
                            arr_63 [i_16] [i_16] = ((((((((~(arr_43 [i_12] [i_13] [i_14] [i_16]))) + 2147483647)) >> (-var_2 - 39))) < ((((var_7 ? var_5 : var_2))))));
                        }
                        var_35 = (max(var_35, ((max(((((3700488513834556868 != 65530) - ((-18 ? var_1 : 1))))), ((((((arr_50 [i_12] [i_14] [i_12] [i_12]) * var_0))) ? var_7 : (min(var_9, (arr_51 [15] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))))))))));
                        arr_64 [i_14] [i_16] = (arr_54 [i_14]);
                        arr_65 [i_12] [i_14] [i_12] [i_16] |= ((((arr_44 [i_12] [i_13] [i_14] [i_16]) ? (((min((arr_49 [6] [i_14]), var_8)))) : (max(3399389310, (arr_54 [i_14]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
