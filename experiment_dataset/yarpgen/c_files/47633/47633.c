/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_17 = (min((((min(var_5, var_2)))), (min(10824, var_12))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            var_18 = (var_12 ^ var_5);
                            var_19 = -var_1;
                            arr_13 [i_1] [10] [i_4] |= (((var_3 & var_1) ? var_9 : -var_14));
                        }
                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            arr_17 [i_2] [9] [i_2] [i_3] [12] = (max((max(var_12, var_13)), (var_10 + var_8)));
                            var_20 = (max(var_4, -var_6));
                        }
                        arr_18 [i_2] [i_2] = (!var_3);
                        var_21 = (((var_1 | var_4) + (((var_13 ? var_10 : var_12)))));
                        var_22 = (min(var_22, (((-(((var_6 & var_9) ? (~var_9) : (~var_13))))))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            arr_22 [i_0] [i_6] [1] = (!var_15);
            var_23 = (max(var_23, (var_1 * var_8)));
            var_24 = (min(var_24, -var_2));
        }
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_25 = (min(var_25, ((((var_8 >= ((min(0, 1)))))))));
                                var_26 = (((((var_3 * ((var_14 ? var_15 : var_13))))) / ((((max(var_6, var_15))) ? (((var_14 << (var_10 - 26774)))) : (var_1 + var_7)))));
                                var_27 -= ((((-(var_14 - var_13))) >= (min(133169152, 20248543))));
                            }
                        }
                    }

                    for (int i_12 = 1; i_12 < 17;i_12 += 1)
                    {
                        arr_39 [i_7] [1] [7] [i_7] = (max(((var_2 ? (~var_15) : ((var_11 ? var_6 : var_6)))), ((max(var_2, var_4)))));
                        var_28 = (-1899380493 - 1);
                    }
                    arr_40 [13] [11] = ((min((!var_6), -var_7)));
                }
            }
        }
        var_29 += (((max((var_2 | var_4), ((var_12 ? var_11 : var_2)))) <= var_3));
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 18;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                {
                    var_30 = (var_3 + var_15);
                    /* LoopNest 2 */
                    for (int i_15 = 3; i_15 < 18;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            {
                                var_31 += ((((~((min(var_15, var_5))))) < var_5));
                                var_32 = (((((var_5 ? (((max(var_8, var_2)))) : (max(var_1, var_11))))) || ((max(((var_9 ? var_6 : var_3)), var_0)))));
                                arr_54 [i_7] [i_7] [10] [i_13] [1] = ((!(((32753 << (var_15 + 8106))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_17 = 3; i_17 < 23;i_17 += 1)
    {
        /* LoopNest 2 */
        for (int i_18 = 3; i_18 < 23;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 22;i_19 += 1)
            {
                {

                    for (int i_20 = 0; i_20 < 0;i_20 += 1)
                    {
                        var_33 = (max(1576773481, ((max(var_9, 3541864692)))));
                        var_34 ^= (((var_10 - var_5) || (16797533360456804340 && 1899380492)));
                        var_35 = (max(var_35, (((max(var_10, var_5))))));
                    }
                    /* vectorizable */
                    for (int i_21 = 3; i_21 < 24;i_21 += 1)
                    {
                        var_36 = (min(var_36, var_1));
                        var_37 = var_3;
                        var_38 = (max(var_38, (var_8 & var_8)));

                        for (int i_22 = 1; i_22 < 24;i_22 += 1)
                        {
                            var_39 = (((var_11 + 2147483647) << (((~var_11) - 12909))));
                            arr_70 [i_21] [i_18] [20] [i_18 - 1] [i_18 - 2] = var_11;
                            arr_71 [i_21] [19] [i_19] [4] [1] [i_22] [i_22 + 1] = (var_15 | var_2);
                            var_40 = -1899380493;
                            arr_72 [1] [i_17] [i_21] [i_18] [i_21] [i_17] [i_17] = var_2;
                        }
                        arr_73 [11] [i_18] [i_19] [i_21 - 3] [i_21 - 3] [i_21] = (var_6 & var_8);
                    }
                    var_41 = (min((((var_2 & var_2) ? (((var_10 << (var_2 - 31371)))) : var_1)), ((min((var_4 != var_13), (-51 > -31019))))));

                    for (int i_23 = 0; i_23 < 0;i_23 += 1)
                    {
                        var_42 += (((((min(var_0, var_6)) + 2147483647)) >> (((min(((max(var_14, var_9))), (min(4274718767, 16797533360456804340)))) - 2456471509))));
                        var_43 = (var_2 & var_2);
                        arr_76 [i_23] [4] [i_18 - 1] [20] = -var_1;
                    }
                }
            }
        }
        var_44 = (max(var_44, ((-var_1 < (var_7 % var_5)))));
        arr_77 [i_17] = max((max((~var_1), -var_10)), (var_15 / var_13));
        var_45 = (min(var_45, (((-(min(var_14, var_14)))))));
    }
    for (int i_24 = 1; i_24 < 1;i_24 += 1)
    {

        for (int i_25 = 0; i_25 < 21;i_25 += 1)
        {
            var_46 = (max(var_46, ((((min((!19541), var_1)) | (((min(var_15, var_13)))))))));
            var_47 = min(var_15, ((((max(var_5, 1))) ? 1 : 4274718753)));
        }
        for (int i_26 = 3; i_26 < 19;i_26 += 1)
        {
            var_48 = (min(var_48, ((max((((var_10 / var_7) - var_14)), ((-var_0 ? var_13 : var_7)))))));
            var_49 = (min(((max(var_13, var_7))), ((4274718756 ? 1649210713252747286 : 17793954491147078778))));
        }
        var_50 += (((!var_4) ^ (((!(var_13 + var_7))))));
        var_51 = 1899380493;
    }
    var_52 = (min(var_52, var_2));
    var_53 = var_2;
    var_54 = ((((var_2 * (var_10 > var_12))) << (((min((min(var_10, var_3)), var_3)) - 26783))));
    #pragma endscop
}
