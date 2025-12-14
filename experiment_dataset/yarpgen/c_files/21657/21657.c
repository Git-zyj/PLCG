/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_0;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_16 *= ((((min((max((arr_0 [i_0 + 1]), var_5)), (!9433640686483881800)))) >= 13618637297688430681));
        var_17 = (min(var_17, ((((~var_10) ? (~241) : -485737207)))));
        var_18 = (max(var_18, ((((1577378900 - 86) & -1577378900)))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_19 = 485737200;
        var_20 = (max(var_20, var_5));
        var_21 = (((arr_0 [i_1]) | 35));

        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_22 *= (~18230);
            arr_7 [i_1] [i_2] [i_2] = (32760 / -32760);
            arr_8 [10] [i_2] [i_1] = ((~((var_2 & (max(10613386812264632308, var_7))))));

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_23 = (min(var_23, ((min((min((~10613386812264632308), (~var_5))), ((min((arr_5 [i_3] [i_2]), 32767))))))));
                var_24 = (min((min(var_5, (min(1, var_12)))), (22 * 0)));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {
                var_25 = (((!var_2) >= -485737198));

                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    var_26 = (arr_4 [i_1]);

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_27 = (min(var_27, ((max((45 < 1577378900), -5798)))));
                        var_28 += 768;
                    }
                    for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        var_29 = (((((-(var_14 <= var_12)))) ? (min((((15 ? 15276 : 14))), var_11)) : -46));
                        var_30 = ((-542052596 ? -var_11 : (((32767 ? (arr_14 [i_1] [i_7] [i_5 + 2] [i_7 - 1]) : (arr_14 [i_4] [i_2] [i_5 + 2] [i_7 - 1]))))));
                        var_31 = ((63 < ((-40 ? 51610 : var_11))));
                        arr_23 [i_1] [i_2] [i_4] [i_5] [i_7] = (!var_9);
                    }
                    for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        arr_27 [i_1] [i_4] [i_2] [i_5 - 2] = (((-32758 < -89) ? (((arr_13 [i_5 - 2] [i_5 - 3] [i_5 + 1] [i_5 - 2]) ? (arr_13 [i_5 - 1] [i_5 - 1] [i_5 + 2] [i_5 - 2]) : (arr_13 [i_5 + 1] [i_5 + 2] [i_5 + 2] [i_5 + 1]))) : 31991));
                        var_32 = -485737216;
                    }
                }
                var_33 = 19;
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
            {
                var_34 = 131068;

                for (int i_10 = 0; i_10 < 0;i_10 += 1)
                {
                    var_35 = ((~(max((var_11 / 1772470870), ((max(-110, 12288)))))));
                    arr_32 [i_10] [i_9] [i_2] = (((((((!(arr_10 [i_10] [i_9] [i_2]))) ? 22031 : 109))) ? ((((((arr_4 [i_1]) & -89))) ? 1 : (((arr_21 [i_1] [i_2] [11] [i_9] [i_9] [1]) ? 4294955007 : 105)))) : ((((76 && (((12288 ? var_1 : (arr_9 [7] [7] [i_10 + 1]))))))))));
                }
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    var_36 = (~(-12 != -485737194));
                    arr_36 [i_1] [i_2] [i_1] [i_11 + 1] = 24;
                }
            }
        }
        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
        {
            var_37 = ((var_12 ? (arr_2 [i_1]) : var_2));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        {
                            var_38 = ((((min((arr_19 [i_15] [i_1] [i_1] [i_12] [i_1]), (max(var_6, 23))))) & 485737193));
                            var_39 &= ((var_7 ? (max((arr_0 [i_1]), var_9)) : var_13));
                        }
                    }
                }
            }
            var_40 = ((+(max((arr_17 [i_1] [i_1] [3]), (arr_17 [i_1] [7] [i_12])))));
        }
        for (int i_16 = 0; i_16 < 14;i_16 += 1) /* same iter space */
        {
            var_41 = (min(var_41, (((((1 ? 232 : ((var_0 ? 51610 : 0)))) >= -485737194)))));
            var_42 = 233;
        }
        var_43 = (max(var_43, ((((min(2147483647, ((min(var_7, 1))))) + ((-((-195398278 ? 1772470838 : 13925)))))))));
    }
    for (int i_17 = 0; i_17 < 10;i_17 += 1) /* same iter space */
    {
        arr_52 [1] = 4064;

        for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
        {
            arr_55 [i_17] [i_18] = (min(var_10, (min(232, (max(var_11, 1))))));
            var_44 = -4026531840;
        }
        for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
        {
            arr_58 [i_19] [i_19] [2] = (min(23, ((((arr_4 [i_17]) < -4064)))));
            var_45 ^= ((-(((!((min(7680, 14))))))));
        }
        var_46 = var_14;
    }
    for (int i_20 = 0; i_20 < 10;i_20 += 1) /* same iter space */
    {
        var_47 += (min(((23 << (((((arr_6 [i_20] [i_20] [i_20]) ? var_11 : 40)) + 9217619046859670786)))), var_2));
        var_48 = var_3;
        arr_61 [i_20] = ((!(arr_53 [i_20] [i_20] [3])));
        var_49 = (~132120576);
    }
    var_50 = (-((max(216, 1))));
    var_51 = 1;
    var_52 += 14;
    #pragma endscop
}
