/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((((min(0, 65535)))) != (max(195, var_1)))))) < (min(var_19, var_13))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] &= (min((((var_18 > var_0) ? var_17 : var_2)), var_4));
        var_21 = ((var_12 ? 65527 : ((~(~var_17)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, ((max(((-1 ? var_16 : (min(var_3, 32754)))), var_10)))));
                    arr_9 [i_1] = (((min((!var_4), (min(105184883, 25828326439097558)))) << ((((((min(3349698918036541293, 25))) ? (max(492813669, 14994679339549226396)) : (var_7 % var_8))) - 14994679339549226395))));
                    var_23 = (max(var_23, ((min(var_2, ((-var_19 ? (var_6 + var_2) : (var_11 - var_10))))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_14 [i_3] |= (((~48578) > ((var_14 ? var_13 : var_6))));
        var_24 -= (~var_5);
        var_25 += var_1;
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_26 = (min(var_26, (((var_2 ? var_17 : 12138337603108132275)))));
        var_27 = ((~-1721113564) ? var_4 : var_8);
        arr_17 [i_4] = 128;
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            var_28 = (max(var_28, -15472));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 16;i_9 += 1)
                    {
                        {
                            arr_33 [i_5] [i_6] [i_7] [i_5] = var_9;
                            var_29 = (min(var_29, ((min(var_2, (((var_13 >= -5590395862655406386) << ((((13799381053275386838 ? var_17 : var_5)) - 975276932974468246)))))))));
                            var_30 *= 6;
                        }
                    }
                }
            }
            var_31 = var_13;

            for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
            {
                arr_37 [i_5] [i_10] = (min((((-1603547448 | 1959869650944655190) ? ((min(var_0, var_2))) : (~1))), ((var_18 ? var_15 : var_18))));
                var_32 = (min(var_32, ((var_4 ? var_17 : var_14))));
            }
            for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
            {
                var_33 = (max(72, var_4));

                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    arr_44 [i_5] [i_5] [i_5] [i_5] [i_6] = ((~(3488154931 == 12)));
                    arr_45 [i_5] = (min((min(var_16, -109)), var_10));
                }
                for (int i_13 = 1; i_13 < 15;i_13 += 1) /* same iter space */
                {
                    var_34 = -var_3;
                    var_35 = var_11;
                    var_36 = ((~(4294967295 < var_14)));
                }
                /* vectorizable */
                for (int i_14 = 1; i_14 < 15;i_14 += 1) /* same iter space */
                {
                    var_37 = (max(var_37, (~14978372120767084819)));
                    var_38 = (max(var_38, 21));
                    var_39 = -1556081704;
                    var_40 ^= var_14;
                }
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    var_41 = (min((((var_7 + ((-7824863603787282010 ? var_8 : var_0))))), var_17));
                    var_42 = (max(var_42, ((~(((~-58) >> var_15))))));
                    arr_54 [i_5 - 1] [i_15] [i_15] [i_15] = (((min((0 ^ 12582115148935609298), (~-7))) << var_0));
                    var_43 = 103;
                }
                var_44 = (max(var_44, 53784));

                for (int i_16 = 2; i_16 < 16;i_16 += 1)
                {
                    arr_57 [14] [14] [i_11] = ((((~((max(22761, var_12)))))) ? -1498249215 : (~var_19));
                    arr_58 [i_5] = 3816932184624534495;
                }
            }
        }
        for (int i_17 = 0; i_17 < 17;i_17 += 1) /* same iter space */
        {
            var_45 = (64 ^ 154);
            var_46 = ((+(((9007199250546688 && -25) ? (var_2 || 6680969771098025348) : (max(var_1, var_9))))));
            /* LoopNest 2 */
            for (int i_18 = 3; i_18 < 16;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 17;i_19 += 1)
                {
                    {
                        var_47 = (min(var_47, (~-12563)));
                        var_48 = (max(var_48, (((var_11 ? (169 / var_3) : (max(var_14, 1591636692127348136)))))));
                    }
                }
            }
        }
        for (int i_20 = 0; i_20 < 17;i_20 += 1) /* same iter space */
        {
            var_49 = (max(var_49, (((~(~var_15))))));
            var_50 -= (max((~var_2), ((9187343239835811840 ? 1 : 9700681952367797694))));
        }
        for (int i_21 = 0; i_21 < 17;i_21 += 1) /* same iter space */
        {

            for (int i_22 = 1; i_22 < 15;i_22 += 1)
            {

                for (int i_23 = 0; i_23 < 17;i_23 += 1)
                {
                    arr_73 [i_5] [i_23] [i_22 + 2] [i_23] = var_9;
                    var_51 ^= max(var_6, var_8);
                    var_52 = ((~(min(180, var_15))));
                    arr_74 [i_23] = var_19;
                }
                arr_75 [i_5] [i_5] [i_5] = (~var_12);
            }
            for (int i_24 = 0; i_24 < 17;i_24 += 1)
            {
                var_53 += ((-1 ? var_10 : ((var_9 ? var_14 : var_15))));
                var_54 &= (max(1536, (var_16 < var_15)));
                var_55 = (min(((var_8 ? (max(var_4, 18446744073709551612)) : (~-37))), 93));
            }
            var_56 = (min(var_56, ((min((((~(~0)))), (min(var_9, ((101 ? 5534545100120332855 : var_2)))))))));
            var_57 -= 45507;
        }
        var_58 = ((~((var_11 ? var_19 : var_7))));

        for (int i_25 = 0; i_25 < 17;i_25 += 1) /* same iter space */
        {
            var_59 -= var_12;
            var_60 = (~var_9);
            var_61 |= var_11;
        }
        /* vectorizable */
        for (int i_26 = 0; i_26 < 17;i_26 += 1) /* same iter space */
        {
            arr_83 [i_5 - 1] |= var_8;
            var_62 |= 0;

            for (int i_27 = 0; i_27 < 17;i_27 += 1)
            {
                var_63 = -var_18;
                var_64 -= 1342346703;
                var_65 -= (((var_8 ? var_8 : var_9)));
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 17;i_28 += 1)
                {
                    for (int i_29 = 3; i_29 < 13;i_29 += 1)
                    {
                        {
                            var_66 |= (((var_14 & var_1) & (~var_15)));
                            var_67 |= (((var_7 ^ var_4) & (-191516528 > var_13)));
                        }
                    }
                }
                arr_90 [i_5] [i_5] [i_26] [i_27] = var_9;
            }
        }
        var_68 = (max(var_68, (((-(((~var_13) ? ((var_0 ? 1 : var_14)) : ((var_13 ? -108 : var_10)))))))));
    }

    /* vectorizable */
    for (int i_30 = 0; i_30 < 17;i_30 += 1)
    {
        /* LoopNest 2 */
        for (int i_31 = 0; i_31 < 17;i_31 += 1)
        {
            for (int i_32 = 0; i_32 < 17;i_32 += 1)
            {
                {
                    var_69 = 65526;

                    for (int i_33 = 0; i_33 < 17;i_33 += 1)
                    {
                        var_70 = 4611684918915760128;
                        var_71 |= 117;
                        var_72 = (max(var_72, ((var_6 % (var_15 + 1)))));
                        var_73 = (max(var_73, 8570626440298967459));
                        arr_101 [i_33] [i_31] = var_3;
                    }
                }
            }
        }
        arr_102 [i_30] [i_30] = ((4281528840 ? (var_1 / var_3) : (((192 << (var_16 - 5395))))));
    }
    var_74 = (min(var_74, ((max(var_9, var_5)))));
    var_75 = (max(var_0, 13447));
    #pragma endscop
}
