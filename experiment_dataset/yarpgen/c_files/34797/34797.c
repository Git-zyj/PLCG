/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!(((207 ? 48 : 49)))));
    var_20 = (((((207 ? 28 : 66))) ? var_16 : ((~((var_1 ? var_12 : var_15))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = (((((var_9 ? 45 : var_17))) ? 3749890733 : 228));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] [i_1] &= 237;
            var_22 += (arr_4 [i_1]);
            var_23 = (max(var_23, 15));

            for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
            {
                var_24 = ((var_7 ? var_3 : 207));
                var_25 = ((var_11 ? ((var_17 ? 233 : -31866)) : 5));
                var_26 = (arr_4 [i_0]);
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
            {
                var_27 = ((~(arr_2 [i_0])));

                for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
                {
                    arr_14 [4] [i_1] [i_4] [i_4] = var_13;
                    var_28 *= (((arr_11 [i_0] [i_1] [i_4 - 1]) ? 40348 : (arr_11 [i_1] [i_3] [8])));
                    var_29 = (27 && -921613351885154162);
                }
                for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                {
                    arr_18 [i_0] [3] [i_0] [3] [i_5] = (((arr_0 [i_5 - 1]) ? (arr_0 [i_5 + 1]) : var_4));
                    arr_19 [2] [i_3] [i_1] [i_0] = (~(arr_17 [i_5 - 1] [i_5 + 1]));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_22 [9] [i_1] = ((9 ? (~var_16) : ((-65 ? (arr_6 [i_0] [i_3] [i_6]) : -71))));
                    var_30 = (max(var_30, ((1 ? var_1 : 1))));
                }
                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    var_31 = ((!(~64)));
                    arr_26 [i_1] [i_7] = var_18;
                    arr_27 [i_7] [i_1] [i_1] [i_1] = (((((207 ? -1546273795 : var_13))) < var_9));

                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        var_32 = (max(var_32, (((16735435591599916146 ? -80 : -1546273788)))));
                        var_33 = ((1546273774 ? (arr_6 [i_1] [i_3] [4]) : var_13));
                        var_34 = var_1;
                        var_35 = 3286625626;
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                    {
                        var_36 = (max(var_36, (!47271)));
                        var_37 = (max(var_37, -15455));
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                    {
                        var_38 = (994805623842478449 ? (arr_11 [i_0] [i_3] [i_7]) : var_8);
                        arr_37 [i_7] = var_14;
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                    {
                        var_39 = (max(var_39, (((19 ? ((var_10 ? var_3 : var_18)) : -1546273769)))));
                        arr_41 [i_11] [i_1] [i_3] [i_7] [i_11] &= -3215751881105068476;
                        arr_42 [i_7] = ((17 ? (arr_31 [i_7] [i_7] [i_11]) : var_5));
                        var_40 = 1546273787;
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        {
                            var_41 = ((((((arr_39 [i_0]) ? var_4 : var_14))) ? (((arr_46 [3] [i_1] [i_3] [3] [i_13]) ? var_7 : -117)) : 1268589834));
                            var_42 = ((224 ? var_5 : (arr_40 [i_13] [i_1] [i_1] [i_13] [i_12] [i_12])));
                            var_43 = var_18;
                            arr_47 [i_12] [i_1] [i_0] [1] [i_0] = ((((((arr_20 [6] [1] [i_12] [i_12]) ? 86 : 1))) ? var_2 : 189));
                            var_44 = (~8867);
                        }
                    }
                }
                arr_48 [i_0] [3] [5] = (((((0 ? var_5 : var_11))) / var_14));
            }
            for (int i_14 = 1; i_14 < 8;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
                {
                    var_45 = (((1 ? var_3 : var_5)));
                    var_46 = (max(var_46, -21));
                    var_47 += 783375385;

                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        var_48 = (max(var_48, -2));
                        var_49 = 2743243786;
                        var_50 = var_3;
                        arr_58 [i_0] [i_0] [i_14] [i_14] [i_16] [i_16] = -15;
                    }
                }
                for (int i_17 = 0; i_17 < 10;i_17 += 1) /* same iter space */
                {
                    var_51 += (((((var_9 ? var_8 : var_4))) ? (!var_14) : (arr_40 [i_17] [i_14] [i_1] [i_1] [i_1] [i_0])));
                    var_52 &= (((234 - (arr_32 [i_0] [8] [i_14 + 2] [i_1] [6] [i_1] [i_17]))));

                    for (int i_18 = 0; i_18 < 10;i_18 += 1)
                    {
                        var_53 = (max(var_53, (-6195157282385652638 >= 13)));
                        var_54 = (min(var_54, ((((((1069563340 ? 352340260 : 49))) ? (-32767 - 1) : ((17387703551409858697 ? var_10 : (arr_32 [i_0] [2] [i_14] [i_1] [i_17] [1] [8]))))))));
                        var_55 = (max(var_55, (((var_6 ? var_9 : var_13)))));
                        arr_65 [i_1] &= (((!7965906418060419766) ? var_0 : -3));
                    }
                    var_56 -= (~var_10);
                }

                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    arr_68 [i_0] [i_1] [i_14] [i_19] [i_14] [i_14] = (arr_34 [i_14 - 1] [i_14 - 1]);

                    for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
                    {
                        var_57 = (((arr_50 [i_14]) ? var_10 : (arr_50 [i_14])));
                        arr_71 [i_14] [i_14] = (var_14 & 2082906370398233676);
                        var_58 &= ((((var_10 ? var_1 : (arr_30 [i_0] [2] [i_1] [6] [2] [2] [i_20])))) ? (arr_29 [i_0] [i_1] [0] [i_1] [i_20]) : var_7);
                        arr_72 [i_1] [i_1] [i_14] [i_20] &= var_18;
                        var_59 -= var_11;
                    }
                    for (int i_21 = 0; i_21 < 1;i_21 += 1) /* same iter space */
                    {
                        var_60 &= (arr_2 [i_0]);
                        var_61 = (1 ^ var_3);
                    }
                    arr_75 [i_1] [i_19] &= ((var_2 ? 31 : ((var_12 ? var_15 : 957584025350716959))));
                }
                for (int i_22 = 0; i_22 < 10;i_22 += 1) /* same iter space */
                {
                    var_62 *= (((((var_18 ? var_5 : var_18))) ? (((var_17 ? var_2 : (arr_44 [i_22] [i_14 - 1] [1] [i_0])))) : (arr_52 [i_1] [i_1] [8] [i_22])));
                    var_63 += arr_73 [i_14];
                    var_64 = var_11;
                    var_65 = (min(var_65, 23));
                }
                for (int i_23 = 0; i_23 < 10;i_23 += 1) /* same iter space */
                {
                    arr_81 [i_14] [1] [i_1] [i_14] = var_11;
                    var_66 *= (arr_32 [i_0] [i_14] [i_14 + 2] [i_1] [i_14 + 1] [i_23] [i_23]);
                    arr_82 [i_14] [i_14] [i_0] = (((arr_56 [i_14 + 1] [i_14] [i_14 + 2] [i_14 + 1] [7]) < ((-733906675 ? -42 : (arr_1 [i_0])))));
                }
                /* LoopNest 2 */
                for (int i_24 = 1; i_24 < 1;i_24 += 1)
                {
                    for (int i_25 = 3; i_25 < 9;i_25 += 1)
                    {
                        {
                            var_67 = 99;
                            var_68 += 9479141563302657630;
                            var_69 += -var_18;
                            arr_88 [i_14] [i_1] [i_14] [i_24] [i_0] = 18158709839572420039;
                            var_70 = ((-32755 ? 135 : 2593755805));
                        }
                    }
                }
                arr_89 [i_0] [i_14] [3] [i_14] = ((1 ? 49 : ((14658994074364285677 ? (arr_64 [i_14] [i_14 + 2] [5] [i_0] [i_14]) : (arr_64 [i_0] [i_1] [5] [i_14 + 1] [i_14])))));
            }
            var_71 = 12207;
        }
        var_72 = (((14941611661827222906 ? var_6 : (arr_87 [i_0]))));
    }
    #pragma endscop
}
