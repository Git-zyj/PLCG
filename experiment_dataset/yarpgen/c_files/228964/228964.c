/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_16);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            var_18 = ((((!(((arr_1 [i_0] [i_0]) && 3918855675)))) ? (((!(arr_3 [i_0])))) : ((((-2147483647 - 1) || var_10)))));

            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                var_19 = (((((var_2 ? var_13 : var_4))) > -var_12));
                var_20 = (((((~(arr_7 [i_1] [i_1 + 1] [i_2 - 1] [i_2 - 2])))) ? (min((arr_7 [i_1] [i_1 - 4] [i_2 - 2] [i_2 - 1]), (arr_7 [i_1] [i_1 + 1] [i_2 - 2] [i_2 - 3]))) : (arr_7 [i_1] [i_1 - 1] [i_2 + 1] [i_2 - 4])));
                var_21 = (((((-(376111647 && 18446744073709551615)))) ? var_3 : ((min(376111643, 1)))));
            }
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_22 = (1006680781001987887 + 6469875);
                var_23 = var_9;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_24 = var_16;
                            var_25 = ((18446744073709551615 ? 3212034392136243887 : 1006680781001987870));
                            var_26 = var_16;
                            var_27 = (max(var_27, ((min((min((arr_8 [i_4] [i_1 + 1] [i_4]), (arr_8 [i_4] [i_1 - 1] [i_4]))), ((-(arr_8 [i_4] [i_1 - 1] [i_4]))))))));
                        }
                    }
                }
                var_28 = ((((((((96 ? 599577768 : -981022966))) ? ((((var_16 < (arr_0 [i_3]))))) : (min(var_14, var_10))))) ? (!var_0) : ((-((((arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) == 1)))))));

                for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                {
                    var_29 = (((!(arr_4 [i_0] [i_1 - 3] [i_1]))) ? ((((!((min(var_10, 13251183386451302827))))))) : (max((var_14 || var_9), (min(var_11, var_14)))));
                    var_30 = (min(var_8, ((((((var_6 ? var_16 : var_13))) > ((var_7 ? var_15 : var_12)))))));
                    var_31 = max((~var_11), (((arr_9 [i_1 - 1] [i_1 - 3] [i_1 - 4] [i_1 - 4]) << (var_0 + 1645554541))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_32 = (1006680781001987870 ? 1006680781001987875 : 4098522362);
                        var_33 = (((var_1 ? var_6 : var_6)) <= (((143 << (18446744073709551593 - 18446744073709551575)))));
                    }
                    var_34 = ((var_1 ? (arr_22 [i_0] [i_1 + 1] [i_0] [i_1 - 3] [i_1 + 1] [i_0]) : (arr_22 [i_1] [i_1 - 1] [i_1] [i_1 - 3] [i_1 - 1] [i_1 - 3])));
                    var_35 = ((var_4 ? (arr_17 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (arr_3 [i_1 - 1])));
                    var_36 = (1 ? 0 : 14019135235329888034);
                    var_37 = (arr_0 [i_3]);
                }
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                {
                    var_38 *= var_6;
                    var_39 = (max(var_39, ((((var_13 ? var_5 : var_6))))));

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_40 = var_10;
                        var_41 = (min(var_41, (arr_9 [i_10] [i_10] [i_10] [i_10])));
                        var_42 *= (((arr_30 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 1 : (arr_26 [i_0] [i_0] [i_1 - 4] [i_0])));
                    }
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        var_43 = (var_11 - 14942700610851976031);
                        var_44 = 7380545239339178684;
                        var_45 = var_2;
                    }
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        var_46 = ((~((var_4 ? var_1 : var_9))));
                        var_47 = var_5;
                        var_48 = (max(var_48, (!var_2)));
                        var_49 = ((~(arr_13 [i_1] [i_1 - 3] [i_1] [i_1] [i_1] [i_1 - 3])));
                        var_50 = (((var_8 % var_2) ? var_13 : var_12));
                    }
                    var_51 = (max(var_51, (((arr_30 [i_0] [i_0] [i_1 - 2] [i_1 - 3] [i_1 - 1]) ? -var_14 : var_5))));
                }
                for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
                {
                    var_52 += (arr_3 [i_0]);

                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        var_53 = var_6;
                        var_54 = (((arr_22 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_14] [i_14]) ? var_3 : var_1));
                    }
                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        var_55 *= var_16;
                        var_56 = ((var_8 ? (arr_8 [i_1] [i_1 - 3] [i_1 - 3]) : (arr_8 [i_1] [i_1 - 3] [i_1 - 3])));
                        var_57 = (arr_1 [i_1 - 4] [i_1 - 4]);
                    }
                    var_58 *= (~1);
                    var_59 = var_15;
                }
                var_60 = var_12;
                var_61 = (arr_28 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1] [i_1]);
                var_62 |= (((arr_1 [i_1] [i_1 - 2]) ? (arr_29 [i_1] [i_1 - 4] [i_1 - 4] [i_1 + 1]) : var_3));
            }
        }
        var_63 = (min(var_63, -var_13));

        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {

            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                var_64 *= (arr_51 [i_0] [i_0] [i_0] [i_0]);

                /* vectorizable */
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    var_65 = var_13;
                    var_66 = (max(var_66, ((((arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_13 : (arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));

                    for (int i_20 = 0; i_20 < 19;i_20 += 1)
                    {
                        var_67 |= -var_13;
                        var_68 = ((((((arr_51 [i_0] [i_0] [i_0] [i_0]) ? var_2 : var_3))) ? var_3 : (~var_3)));
                    }
                    var_69 = (((arr_42 [i_0]) ? (arr_10 [i_0] [i_18] [i_0]) : var_0));
                }
                for (int i_21 = 0; i_21 < 19;i_21 += 1)
                {
                    var_70 = ((((max(var_8, var_13))) ? var_11 : (min((arr_9 [i_0] [i_0] [i_0] [i_0]), var_13))));
                    var_71 = ((((var_8 / (arr_15 [i_0] [i_17] [i_18] [i_17]))) * var_11));
                    var_72 = (-((-(arr_7 [i_0] [i_0] [i_18] [i_18]))));
                    var_73 = (min(-var_14, ((max(((var_10 ? var_16 : var_11)), ((var_16 ? 1 : var_11)))))));
                }
            }
            for (int i_22 = 2; i_22 < 17;i_22 += 1)
            {
                var_74 *= (min((arr_61 [i_0] [i_22 - 1] [i_22 - 2]), (((arr_61 [i_0] [i_22 + 1] [i_22 + 2]) ? (arr_61 [i_0] [i_22 - 1] [i_22 + 2]) : (arr_61 [i_0] [i_22 + 1] [i_22 - 1])))));
                var_75 = (max(var_75, ((max(var_16, var_10)))));
                var_76 = var_6;
                var_77 = (max(var_77, (min(((min((arr_52 [i_22 - 2] [i_22 + 2] [i_22 + 1]), var_13))), (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0])))));
            }
            var_78 = var_10;
            var_79 = (~((~(~var_14))));
        }
        for (int i_23 = 2; i_23 < 15;i_23 += 1)
        {
            var_80 *= ((var_0 * (!4870293499193750232)));
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 19;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 19;i_25 += 1)
                {
                    {
                        var_81 *= (arr_47 [i_23] [i_23] [i_23 + 1] [i_23 + 1] [i_23 + 1] [i_23] [i_23 + 2]);
                        var_82 = (min(var_82, 4548882778611819783));
                        var_83 = (max((1 && 4294967291), (~-819418142)));
                        var_84 = (max(var_84, (((((min(1, var_8)))) ? ((((((var_1 ? var_13 : var_5)) + 2147483647)) << ((((2458983275 ? var_8 : var_7)) - 5)))) : (min((arr_13 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25]), (min((arr_50 [i_24] [i_24]), (arr_42 [i_0])))))))));
                    }
                }
            }
        }
        for (int i_26 = 0; i_26 < 1;i_26 += 1)
        {
            var_85 = (min((min((((var_1 ? var_11 : (arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), var_14)), var_9));
            var_86 = (max(var_86, ((min((arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]), 2374301221)))));
        }
    }
    for (int i_27 = 1; i_27 < 1;i_27 += 1)
    {
        var_87 = (!-1);
        var_88 = (min(var_8, ((-(arr_75 [i_27])))));
    }
    #pragma endscop
}
