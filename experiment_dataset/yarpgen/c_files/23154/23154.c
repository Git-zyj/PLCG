/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        var_13 = (max(var_11, ((((max(-4173478088490677824, var_3))) ? (min(var_0, var_6)) : (((((arr_1 [i_0]) > (arr_1 [i_0 + 2])))))))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0 - 4] [i_1] [i_1] = (((((((max((arr_0 [i_0] [0]), var_5))) >= (12402 | var_0)))) * (arr_2 [i_0 + 3] [i_0 + 2] [i_1])));
            var_14 = var_1;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_15 ^= ((((min((((arr_3 [i_3] [i_1]) ? var_11 : (arr_0 [5] [i_0]))), ((((arr_2 [i_0] [i_0] [i_3]) ? (arr_10 [i_3] [i_1] [i_2] [i_3] [i_3]) : (arr_2 [i_0] [i_1] [i_3]))))))) ? ((((arr_9 [1] [i_1] [i_3] [i_3] [i_0] [i_3]) ? (arr_0 [i_2] [i_1]) : (arr_0 [i_2] [i_3])))) : ((var_10 ? (min(var_0, var_10)) : 36790))));
                        var_16 = (min(((max((!var_12), var_7))), (((arr_9 [i_0 - 4] [i_0 + 2] [i_1] [i_0 + 1] [6] [i_2]) ? var_2 : var_4))));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                        {
                            var_17 = (min(var_17, ((((min(((var_2 ? (arr_1 [i_4]) : var_11)), (max(var_11, var_1)))) - (((-(arr_0 [i_2] [i_4])))))))));
                            var_18 = -36802;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            var_19 -= (((arr_1 [i_2]) | (((arr_14 [i_0] [4] [i_0]) ? (arr_3 [i_5] [i_1]) : var_9))));
                            var_20 += var_7;
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_21 = (min(((((arr_14 [i_0 - 3] [i_0 + 1] [i_0 + 2]) == (arr_12 [i_1])))), (((arr_12 [i_1]) ? (arr_14 [i_0 - 3] [i_0 + 1] [i_0 + 2]) : var_1))));
                            var_22 += ((var_3 && (arr_19 [i_0] [i_0] [i_0 - 3] [i_0] [i_0 - 4] [i_0] [i_0 + 1])));
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] = (min((arr_2 [i_1] [i_2] [i_1]), (min(((6468521388812200050 ? 10730138755430239865 : 243)), 6024632903879260929))));
                            var_23 = var_10;
                            var_24 &= -var_1;
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_25 = (min(var_25, (arr_19 [i_0] [i_0] [i_1] [i_2] [0] [i_3] [i_7])));
                            var_26 = (((arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (min((!var_5), 8802609726381932549)) : 6));
                            var_27 = ((!((!(arr_16 [i_1] [i_1])))));
                        }
                    }
                }
            }
            var_28 |= var_3;
        }
        for (int i_8 = 2; i_8 < 9;i_8 += 1)
        {
            arr_28 [i_0] [i_0] [9] = (arr_11 [i_0] [i_8] [i_0] [i_8] [i_8 - 2] [i_8]);
            arr_29 [i_0] [i_0] [9] = -6115397110015679080;
            arr_30 [3] [i_8 - 1] = var_6;
            var_29 += (max((((!((min(122, 8802609726381932558)))))), (arr_6 [i_8 - 2] [i_8])));
            arr_31 [i_0] [i_0] = var_6;
        }
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
    {

        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            arr_38 [i_9] [i_9] [i_9] = ((+(max(-var_8, ((var_11 ? (arr_34 [1]) : (arr_37 [5] [i_10] [i_10])))))));
            arr_39 [i_10] [i_10] [i_9] = (min((max((((arr_34 [9]) ? (arr_37 [i_9] [i_9] [i_10]) : (arr_36 [i_9]))), var_6)), (((((((arr_37 [i_10] [i_9] [i_9]) ? var_12 : (arr_34 [0])))) ? (!-6032782848695996493) : ((var_12 ? var_3 : (arr_36 [i_9]))))))));
            arr_40 [i_9] [i_9] [i_10] = (arr_32 [i_10]);
        }
        for (int i_11 = 4; i_11 < 10;i_11 += 1)
        {
            arr_45 [i_11] = (!7716605318279311750);
            /* LoopNest 3 */
            for (int i_12 = 2; i_12 < 9;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 8;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        {
                            var_30 = ((var_2 >> (((((1 ? 52 : 1369349047494982452))) ? 15 : 10730138755430239865))));
                            arr_56 [i_9] [i_11 - 1] [i_12] [i_11] [i_13] [i_14] = var_12;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_31 = (var_10 ? (arr_37 [i_9] [4] [i_15]) : (arr_37 [i_15] [i_9] [i_9]));
            var_32 = (max(var_32, var_9));
        }
        arr_60 [i_9] = ((!((min(var_9, var_9)))));
    }
    for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
    {
        var_33 = (min(var_33, (((((((arr_49 [i_16] [i_16] [2] [i_16]) ? (arr_44 [i_16]) : (max(var_3, var_11))))) ? (min(var_8, (arr_37 [i_16] [i_16] [i_16]))) : (max((min((arr_55 [i_16] [5] [i_16] [i_16] [i_16] [i_16]), (arr_36 [i_16]))), (arr_54 [i_16] [2] [i_16] [i_16] [2]))))))));
        arr_64 [i_16] [i_16] |= ((27579 * (arr_58 [i_16] [i_16])));
    }
    var_34 = ((var_6 >> (var_4 - 8507683292678401334)));
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 23;i_17 += 1)
    {
        for (int i_18 = 3; i_18 < 21;i_18 += 1)
        {
            {
                var_35 = ((((min(var_11, var_8))) ? ((+(((arr_67 [i_17] [8]) ? var_6 : var_3)))) : ((((((!(arr_65 [i_17] [i_18 - 2])))) <= ((min(var_3, var_1))))))));
                var_36 = (((((min(var_11, var_1)))) ? (((!((min(17077395026214569163, 1)))))) : ((-(arr_66 [i_17])))));
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 23;i_19 += 1)
                {
                    for (int i_20 = 3; i_20 < 21;i_20 += 1)
                    {
                        {
                            var_37 = max(-115, var_4);

                            for (int i_21 = 2; i_21 < 19;i_21 += 1) /* same iter space */
                            {
                                var_38 = ((-(max(((min((arr_69 [i_18]), var_1))), -var_2))));
                                var_39 = (!var_5);
                            }
                            for (int i_22 = 2; i_22 < 19;i_22 += 1) /* same iter space */
                            {
                                var_40 = (((arr_76 [i_17] [i_18] [i_18] [i_20] [i_22]) ? var_12 : ((max((arr_73 [i_18 + 2] [i_18] [i_20 + 1] [i_20 - 2] [i_20] [i_22 + 4]), (arr_74 [i_18 - 2] [i_18 - 2] [i_20 - 2] [i_22] [i_22 - 1]))))));
                                var_41 = ((((((!var_11) ? (max((arr_65 [i_19] [i_19]), var_12)) : (!var_6)))) && var_3));
                                arr_81 [i_18] [i_22] = 22009;
                            }
                            for (int i_23 = 0; i_23 < 23;i_23 += 1)
                            {
                                var_42 = var_5;
                                var_43 = (max(var_43, (((((max((arr_70 [i_20 + 1] [i_20 - 1] [i_20 + 1]), var_3))) << (((((arr_70 [i_20 + 1] [i_20 - 3] [i_20 + 1]) ? (arr_70 [i_20 - 3] [i_20 + 1] [i_20 - 1]) : (arr_70 [i_20 - 1] [i_20 + 1] [i_20 - 2]))) - 111)))))));
                            }
                            arr_85 [i_18] [i_18] [i_19] [i_18] [i_18] [i_19] = var_10;
                            var_44 = ((min((arr_71 [i_17] [i_20] [i_18]), ((var_7 ? var_10 : (arr_75 [i_17]))))) != (((((7716605318279311750 ? 7202388306077196629 : 58930))) ? var_6 : ((-10 ? (arr_70 [5] [5] [5]) : var_12)))));
                            arr_86 [16] [i_18] [16] [i_18] [i_18] [i_18] = (min((min((arr_67 [i_20 - 1] [i_18 + 2]), var_2)), ((max((arr_67 [i_20 - 1] [i_18 + 2]), (arr_67 [i_20 - 1] [i_18 - 2]))))));
                        }
                    }
                }
                var_45 = ((var_6 ? (arr_66 [i_17]) : (((((arr_78 [i_18] [i_17] [i_18] [i_18] [i_18 - 2]) ? var_9 : var_6)) - (((arr_67 [i_18] [20]) ? (arr_80 [3]) : (arr_67 [i_17] [i_18])))))));
            }
        }
    }
    #pragma endscop
}
