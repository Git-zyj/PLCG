/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_19 = (min(var_19, (((var_18 ? var_15 : ((var_9 ? var_16 : 1)))))));
            arr_4 [i_0] [i_0] [i_0] = -65;
            var_20 = 4294967295;
            var_21 |= ((64 ? var_11 : var_17));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_22 |= (min(var_5, (min(var_14, 1073610752))));
            arr_8 [i_2] = (min(((var_18 ? ((var_2 ? var_12 : var_13)) : var_0)), 1));
            var_23 ^= var_15;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_13 [i_4] [i_4] [14] [i_4] [i_4 - 1] [i_4 - 1] |= (min(0, 0));
                        var_24 ^= ((((max(((var_0 ? var_16 : var_17)), ((min(var_12, var_14)))))) ? ((((min(var_2, var_7))) ? var_5 : (min(1, var_5)))) : (max(((max(var_1, var_10))), ((var_17 ? 123 : var_14))))));
                    }
                }
            }
        }
        var_25 *= ((((min(-28670, var_4))) != (min((var_17 / var_9), (var_12 % var_5)))));
        var_26 ^= (max(((((var_14 % var_7) ? -1659303043 : var_10))), (min((((-35 ? var_11 : var_13))), (min(6141907602623986461, var_7))))));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_27 = (min(var_27, ((min(var_0, ((min(((0 ? var_13 : var_11)), var_16))))))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                {
                    var_28 ^= var_8;
                    var_29 = var_0;
                }
            }
        }
        arr_21 [i_5] = var_16;
    }
    for (int i_8 = 3; i_8 < 13;i_8 += 1)
    {
        arr_26 [i_8] = (((((((var_6 ? var_1 : 1))) ? 0 : var_6)) | ((var_1 ? var_17 : -104))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {

                    for (int i_11 = 2; i_11 < 16;i_11 += 1)
                    {
                        var_30 = ((121 ? var_2 : ((var_1 ? (((1 ? 88 : 58))) : (min(var_7, var_8))))));
                        arr_35 [i_8] = (max(((max(-6131, 1))), var_9));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
                    {
                        var_31 = ((var_16 ? var_4 : 65472));
                        var_32 = var_13;
                        var_33 ^= 0;
                        arr_38 [i_8] [i_9] [i_9] [2] = var_1;
                    }
                    for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
                    {
                        var_34 = (max(var_34, (((((min((max(var_12, var_2)), var_4))) ? (((var_13 ? ((var_13 ? 2872001968 : var_17)) : (((var_6 ? var_9 : var_6)))))) : ((898866672 ? (var_9 != 65) : ((var_9 ? 2022733993 : 1796864350387928109)))))))));
                        arr_41 [i_8] = (min((var_9 | var_1), (min((var_12 != var_9), ((var_15 ? var_13 : 65))))));
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 0;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 17;i_15 += 1)
                        {
                            {
                                arr_46 [i_8] [i_9] [i_8] [i_8] [i_8] = (min((-9223372036854775807 - 1), ((65 ? ((0 ? 2272233302 : 9223372036854775807)) : ((((-32767 - 1) ? 123 : -59)))))));
                                arr_47 [i_8] [i_8] [i_8 + 2] [i_10] = (var_6 == var_14);
                                arr_48 [i_15] |= ((((min(((var_10 ? var_10 : var_7)), (((var_12 ? 163 : 32767)))))) ? (min(var_8, var_11)) : (min(((var_14 ? var_1 : var_16)), ((min(var_13, var_14)))))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 15;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 17;i_17 += 1)
            {
                {
                    var_35 = var_3;
                    arr_53 [i_8] [i_16] [i_8] = min((min(var_5, 30654)), 2022733993);
                }
            }
        }
    }

    for (int i_18 = 0; i_18 < 22;i_18 += 1)
    {
        var_36 = (min(var_36, (((((((((var_1 ? var_12 : var_14))) ? ((var_5 ? var_2 : var_14)) : var_3))) ? ((((var_10 ? var_5 : 1796864350387928109)) >> ((((var_7 ? 123 : var_10)) - 100)))) : ((min(((var_2 ? var_5 : var_10)), ((-125 ? -1315405213 : 198))))))))));

        /* vectorizable */
        for (int i_19 = 1; i_19 < 19;i_19 += 1) /* same iter space */
        {
            var_37 = -85;
            arr_59 [i_18] [i_19] = var_5;
            var_38 = (max(var_38, (((var_3 ? var_7 : var_3)))));
        }
        for (int i_20 = 1; i_20 < 19;i_20 += 1) /* same iter space */
        {
            var_39 = var_17;
            arr_62 [i_18] [i_20 - 1] = ((var_1 ? (min(var_13, var_7)) : ((max((min(var_9, var_5)), ((var_1 ? var_3 : var_6)))))));
            arr_63 [i_18] |= ((((((((897 ? var_8 : var_17))) ? ((var_13 ? var_11 : var_13)) : ((min(var_10, var_4)))))) ? (min(((min(var_5, var_15))), (min(var_2, 8589934591)))) : ((((-127 - 1) ? 28929 : 1795962445404772366)))));
            var_40 = (min(var_40, (((((min(-6342, 0))) ? (min(var_14, var_7)) : (((var_16 ? var_4 : var_12))))))));
        }
        for (int i_21 = 1; i_21 < 19;i_21 += 1) /* same iter space */
        {

            for (int i_22 = 0; i_22 < 22;i_22 += 1)
            {
                var_41 = (min(-124, var_15));
                arr_70 [i_21] [i_21] = ((((min(var_8, var_8))) ? ((((min(var_13, var_10))) ? (((min(var_1, var_4)))) : var_8)) : (min(((var_12 ? 3067189932 : 77)), (((var_9 ? -57 : var_3)))))));
                var_42 = ((((9223372036854775807 ? 1 : -6342))) < ((1 ? (((var_0 ? var_2 : var_14))) : ((var_14 ? var_16 : var_7)))));
            }
            var_43 = 0;
        }
        arr_71 [i_18] |= 581572907;
    }
    for (int i_23 = 0; i_23 < 19;i_23 += 1)
    {
        var_44 = ((min(3558, 17566)));
        arr_75 [i_23] = ((var_10 ? (((min(-65, 64)))) : ((((min(var_12, var_14))) ? var_4 : var_4))));
        var_45 = ((((min(var_12, var_18))) ? (min(var_0, var_12)) : (((max(255, var_17))))));
    }
    /* vectorizable */
    for (int i_24 = 2; i_24 < 16;i_24 += 1)
    {
        arr_78 [i_24] [i_24] = var_10;

        for (int i_25 = 0; i_25 < 1;i_25 += 1)
        {
            arr_83 [i_25] = var_15;
            /* LoopNest 3 */
            for (int i_26 = 0; i_26 < 19;i_26 += 1)
            {
                for (int i_27 = 1; i_27 < 17;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 19;i_28 += 1)
                    {
                        {
                            arr_92 [i_24] [i_24 + 1] = ((((var_16 ? var_16 : 2272233304)) <= 9005));
                            var_46 = (min(var_46, var_3));
                            var_47 = ((var_10 ? var_1 : var_12));
                        }
                    }
                }
            }
            var_48 = 12031398948673520711;
            arr_93 [i_24] [i_24] [i_24] = var_0;
        }
        for (int i_29 = 0; i_29 < 19;i_29 += 1)
        {
            var_49 = var_1;
            arr_97 [i_24] [i_29] = (var_1 ? 64 : var_1);
        }
        for (int i_30 = 0; i_30 < 19;i_30 += 1)
        {
            /* LoopNest 3 */
            for (int i_31 = 0; i_31 < 19;i_31 += 1)
            {
                for (int i_32 = 3; i_32 < 17;i_32 += 1)
                {
                    for (int i_33 = 1; i_33 < 17;i_33 += 1)
                    {
                        {
                            var_50 = var_3;
                            arr_107 [i_31] [i_31] [i_31] = ((2147483647 ? var_6 : var_12));
                        }
                    }
                }
            }
            var_51 = (var_4 ? (((var_13 ? 0 : var_15))) : ((var_9 ? var_17 : 6415345125036030905)));
            var_52 = var_17;

            for (int i_34 = 1; i_34 < 18;i_34 += 1)
            {
                arr_111 [i_24] [i_24] = (((((2022733993 ? var_13 : var_1))) ? ((1 ? var_1 : var_3)) : ((var_5 ? var_1 : var_1))));
                var_53 = var_1;
                var_54 = ((-80 + 2147483647) >> (7168 - 7142));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_35 = 1; i_35 < 17;i_35 += 1)
    {
        for (int i_36 = 0; i_36 < 21;i_36 += 1)
        {
            {
                var_55 = (min((max(0, (min(4246095403899244898, var_1)))), ((max(var_8, (var_4 - var_1))))));
                arr_118 [i_35] [i_35] |= ((var_13 ? ((((((4294967295 ? var_11 : var_2))) ? var_18 : var_15))) : (min(1227777363, 0))));
            }
        }
    }
    #pragma endscop
}
