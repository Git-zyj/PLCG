/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((-((var_12 - ((7980142942335885309 - (arr_0 [i_0] [i_0])))))));
        var_13 = (i_0 % 2 == 0) ? ((((arr_1 [i_0]) >> ((((~(arr_1 [i_0]))) + 8662))))) : ((((arr_1 [i_0]) >> ((((((~(arr_1 [i_0]))) + 8662)) - 13756)))));
        var_14 = (!var_12);
        var_15 = max(((min(3268204830, var_8))), 0);
        arr_4 [i_0] [i_0] = (((min((10466601131373666306 * var_3), 31)) & 4095));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = ((((!7090) < (var_7 + var_6))));
        var_16 = var_0;

        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    var_17 = min((arr_12 [i_2 + 2] [i_2 - 1]), ((((arr_12 [i_2 - 1] [i_2 - 1]) < 0))));

                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        var_18 = var_8;
                        arr_20 [i_1] [i_4] [i_1] [i_4] [i_5 + 3] = (((((((arr_6 [i_1] [i_2]) < (arr_19 [i_1] [i_1] [i_3] [i_4] [i_5]))))) == (((var_10 << 1) >> (var_1 < -194767892)))));
                        var_19 = ((~(((arr_12 [i_4] [i_2]) ^ (arr_12 [i_1] [6])))));
                    }
                    var_20 = (min(((~(var_1 - var_11))), var_8));
                    arr_21 [i_1] [i_2] [i_2] [16] [i_4] [i_1] = min(((~(arr_17 [i_2] [i_2 - 1] [1] [i_1] [i_2 + 2] [i_2]))), var_9);
                    var_21 = min(((~(arr_2 [i_1]))), ((~(arr_17 [i_1] [i_2 - 1] [i_2 + 2] [i_1] [i_1] [i_4]))));
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    arr_24 [i_1] [i_2] [i_3] [i_1] = var_1;
                    arr_25 [i_1] [i_2] [i_1] [i_6] = (max((((!(arr_2 [i_1])))), var_11));

                    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_1] [i_2] [i_2] [i_2] [i_1] = var_0;
                        var_22 = -var_4;
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        var_23 = ((var_3 < ((((47975995 && ((min((arr_17 [i_8] [i_6] [i_1] [i_1] [i_2] [9]), var_7)))))))));
                        var_24 = ((((((!(arr_17 [i_1] [i_2 + 1] [i_1] [i_1] [i_8] [i_2]))))) - (var_2 | var_1)));
                    }
                    var_25 = (max((arr_5 [i_2]), ((((arr_0 [i_2 + 1] [i_2 + 1]) * var_11)))));
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {

                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        var_26 = (min(var_26, (!4095)));
                        var_27 = ((max(((max(var_12, (arr_33 [i_1] [16] [i_3] [i_10]))), var_2))));
                    }
                    var_28 = (((var_2 - (arr_34 [i_1] [i_1] [i_1] [i_9]))));
                    var_29 = (arr_33 [i_2] [i_2] [17] [i_2 + 2]);
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        var_30 -= (((((-(arr_11 [i_1] [i_12] [i_2 - 1])))) - -var_3));
                        var_31 = (arr_14 [i_1]);
                        arr_43 [i_1] = (arr_30 [i_1] [i_2 + 2] [i_2 + 2]);
                    }
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        var_32 = (((arr_13 [i_1] [11] [i_3] [i_1]) < var_6));
                        var_33 = (max((((((max(754988250, var_12))) > (max(var_7, var_6))))), 10466601131373666306));
                    }
                    var_34 += (0 + 7980142942335885294);
                    var_35 = (max(var_5, var_1));
                    var_36 |= ((~(((arr_16 [i_3] [i_3] [16] [i_3]) / (max((arr_29 [i_3] [1] [i_3] [15] [i_1] [15]), (arr_45 [i_3] [i_2] [i_3] [i_11] [i_11])))))));
                    var_37 = (min((((arr_39 [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1]) / var_5)), var_1));
                }
                arr_47 [i_1] = (-(max((arr_12 [i_2 - 1] [i_2 + 1]), (var_7 / 4294967295))));
            }
            var_38 = (((var_10 - var_5) - 0));
            var_39 ^= (var_3 < -1);

            for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
            {
                var_40 = (~((~(arr_14 [i_2]))));
                var_41 = (min(var_0, (((8758745847014664644 == (arr_46 [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2]))))));
            }
            for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
            {
                var_42 -= (((7081 > (arr_36 [i_2 + 1] [i_2] [i_2 - 1] [i_2] [i_2 + 2]))));

                /* vectorizable */
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    var_43 = ((!(~6)));

                    for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
                    {
                        var_44 = ((!(arr_31 [i_1] [i_2 - 1] [3] [i_17])));
                        var_45 = ((!(-643140449 | var_12)));
                        var_46 ^= ((~(arr_40 [i_1] [i_2] [i_15])));
                        arr_61 [i_1] [i_1] [i_1] [i_1] [16] = ((~(arr_36 [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 + 1])));
                    }
                    for (int i_18 = 0; i_18 < 19;i_18 += 1) /* same iter space */
                    {
                        arr_64 [i_1] [i_18] = (arr_55 [i_2] [i_2] [i_2 - 1]);
                        var_47 = ((!(arr_9 [i_1])));
                        var_48 = var_4;
                        var_49 = (arr_40 [i_2 - 1] [i_2 - 1] [i_16]);
                        var_50 &= (~var_3);
                    }

                    for (int i_19 = 1; i_19 < 18;i_19 += 1)
                    {
                        var_51 += ((~(arr_52 [i_1] [i_2] [i_2] [i_19])));
                        var_52 = (13708671777562004159 < var_0);
                    }
                    for (int i_20 = 0; i_20 < 19;i_20 += 1)
                    {
                        var_53 = (~1122196999);
                        arr_69 [i_1] [i_20] = -1113992932;
                    }
                    for (int i_21 = 0; i_21 < 19;i_21 += 1)
                    {
                        var_54 = ((~(arr_49 [i_2 + 2] [i_2] [i_2 + 2] [i_2 - 1])));
                        var_55 = (max(var_55, var_4));
                        arr_73 [i_1] [i_2] [i_1] [i_16] [i_21] [i_16] [i_1] = (((-(arr_50 [i_1] [i_1] [i_15] [i_1]))) / 125);
                    }
                    for (int i_22 = 1; i_22 < 18;i_22 += 1)
                    {
                        var_56 = ((~(var_8 | var_4)));
                        var_57 = var_2;
                        var_58 += var_11;
                        var_59 = (-7836 | 13635198894385867561);
                    }

                    for (int i_23 = 2; i_23 < 18;i_23 += 1)
                    {
                        arr_79 [i_15] &= 4294967286;
                        var_60 = ((~(((!(arr_9 [i_1]))))));
                        var_61 = (arr_58 [i_1] [i_23] [i_23] [i_23 - 1] [16] [i_23] [i_1]);
                    }
                    var_62 = (arr_62 [i_15] [i_2] [i_2]);
                }
                /* vectorizable */
                for (int i_24 = 0; i_24 < 19;i_24 += 1)
                {
                    arr_83 [i_1] [8] [i_15] [i_24] = (arr_31 [i_1] [i_2] [5] [10]);
                    arr_84 [17] [i_2] [i_1] [i_15] = (!var_0);
                }
                for (int i_25 = 1; i_25 < 17;i_25 += 1)
                {

                    for (int i_26 = 3; i_26 < 18;i_26 += 1) /* same iter space */
                    {
                        var_63 = (arr_31 [i_1] [i_2] [i_15] [i_1]);
                        var_64 = ((+(((!var_1) - (!13746)))));
                    }
                    for (int i_27 = 3; i_27 < 18;i_27 += 1) /* same iter space */
                    {
                        var_65 = var_3;
                        arr_93 [i_2] [9] [i_1] [i_27 + 1] = (((~890973070) & (arr_13 [i_1] [i_2] [i_15] [i_25 - 1])));
                    }

                    for (int i_28 = 2; i_28 < 18;i_28 += 1)
                    {
                        var_66 = var_9;
                        arr_98 [17] [i_1] [i_15] [i_25] [i_2 + 1] = (((((~(arr_94 [i_1] [i_1] [i_25 + 2] [i_25] [i_2 + 2] [i_1])))) == (max(var_2, (arr_94 [i_1] [18] [i_25 + 2] [i_25] [i_2 + 2] [i_1])))));
                        var_67 = (arr_5 [i_25 + 2]);
                    }
                }
            }
            /* vectorizable */
            for (int i_29 = 0; i_29 < 19;i_29 += 1) /* same iter space */
            {
                var_68 = (arr_27 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 2]);
                var_69 = var_7;
                /* LoopNest 2 */
                for (int i_30 = 0; i_30 < 19;i_30 += 1)
                {
                    for (int i_31 = 3; i_31 < 17;i_31 += 1)
                    {
                        {
                            arr_106 [i_1] [i_2] [i_2] [i_1] = (var_6 + var_4);
                            var_70 = (arr_103 [i_1] [i_30] [i_30]);
                            var_71 -= 82;
                        }
                    }
                }
            }
            arr_107 [i_1] [6] = ((!(arr_6 [i_1] [i_1])));
        }
    }

    for (int i_32 = 0; i_32 < 1;i_32 += 1)
    {
        var_72 ^= (((var_1 != var_2) / 38));
        var_73 = ((((arr_108 [i_32]) && (arr_80 [i_32] [i_32] [i_32]))));
        var_74 = var_7;
    }
    #pragma endscop
}
