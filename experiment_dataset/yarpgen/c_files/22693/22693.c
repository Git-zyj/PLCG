/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_14 ^= (((16286 == 18448) * -107));
                arr_4 [i_0] = ((106 ? 61 : 111));
                arr_5 [i_0 + 3] [i_1 + 1] = (!var_11);
                var_15 -= 106;
            }
        }
    }
    var_16 = (min((((125 >> (((~117) + 128))))), (var_8 && 18447)));
    var_17 = (((~((var_2 ? var_9 : var_9)))));

    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        arr_8 [i_2] = max(((max(48, -7590))), var_2);
        arr_9 [i_2 + 1] = ((-(min(((min(18447, (arr_7 [i_2])))), 1742466393108247211))));
    }
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        var_18 = (16287 ? (min((arr_11 [i_3 + 2]), 1)) : (((((!(arr_1 [i_3]))) ? -3 : 0))));
        arr_13 [i_3 + 2] = (((var_0 ? ((~(arr_2 [i_3]))) : ((((arr_12 [i_3] [i_3 + 2]) | var_13))))) << ((((~(~8936830510563328))) - 8936830510563328)));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 18;i_4 += 1)
    {
        var_19 -= -var_11;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                {
                    var_20 = ((var_3 ? -112 : (arr_19 [i_4 - 4])));
                    arr_25 [i_4] [i_4] [i_6 - 1] = var_8;
                    var_21 = (((arr_20 [i_4 + 2] [i_4 - 1] [i_4]) != var_2));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_22 = var_12;
                                arr_30 [i_4] [i_4] [i_6] [i_4] [i_8] [12] = ((512 ? -95 : 23));
                                var_23 = var_5;
                                arr_31 [i_4 - 2] [i_4 - 2] [i_4] [i_4] [i_7] |= var_11;
                            }
                        }
                    }
                }
            }
        }
        var_24 = (((((~(arr_29 [i_4] [i_4] [i_4] [i_4] [i_4 + 2] [i_4] [i_4])))) ? var_12 : (((-16287 ? 95 : var_3)))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 16;i_10 += 1)
            {
                {
                    var_25 = var_12;
                    var_26 = -70;
                    arr_38 [i_4] [i_9] [i_10] [i_10] = arr_15 [i_4];
                    var_27 = ((((arr_24 [16] [6] [6] [i_4]) + 9223372036854775807)) >> (69 - 65));
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {

        for (int i_12 = 3; i_12 < 8;i_12 += 1) /* same iter space */
        {
            arr_45 [i_11] [8] &= ((-var_13 ? var_3 : (!var_8)));
            var_28 *= (min((((arr_39 [i_12 - 3]) ? (min(1296262829, 6049863527136461353)) : var_5)), -0));
            var_29 = (((((32767 ? (!15) : ((var_8 ? var_4 : (arr_32 [i_11] [i_12 + 2] [i_11])))))) ? ((min((arr_17 [i_12 - 2] [i_11]), (((13 ? (arr_23 [i_11]) : var_10)))))) : ((((((arr_34 [i_12]) * (arr_36 [i_11] [6] [i_12])))) | ((15 ? 0 : 0))))));
            var_30 = ((var_3 ? (!101) : (-7195453576573274881 < 8)));
        }
        /* vectorizable */
        for (int i_13 = 3; i_13 < 8;i_13 += 1) /* same iter space */
        {

            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                var_31 = ((var_0 ? (arr_27 [i_11] [i_13 + 2] [i_14]) : (arr_18 [i_14] [i_14] [i_14])));
                var_32 = var_12;
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 8;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 10;i_16 += 1)
                    {
                        {
                            arr_57 [i_16] [i_11] [i_13 - 2] [i_13 - 2] [i_11] [i_11] = ((((arr_6 [i_11] [i_16 + 1]) || var_4)));
                            var_33 = var_0;
                        }
                    }
                }
            }
            for (int i_17 = 1; i_17 < 10;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 3; i_18 < 9;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 11;i_19 += 1)
                    {
                        {
                            var_34 = (((arr_62 [i_17] [5] [1] [i_17 + 1] [i_18 - 2] [i_18]) ? (arr_6 [i_13 + 2] [i_17 - 1]) : (arr_28 [i_11] [i_17] [i_13] [i_13] [i_11])));
                            var_35 = -64;
                        }
                    }
                }
                arr_66 [i_17] [i_11] [i_17] = var_0;
                var_36 = (-56 != 0);
            }
            arr_67 [i_11] = (arr_28 [i_11] [12] [i_11] [i_13] [i_11]);
            var_37 &= (arr_14 [10]);

            for (int i_20 = 2; i_20 < 10;i_20 += 1)
            {
                var_38 &= ((var_9 ? (arr_15 [i_20]) : var_10));
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 11;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 10;i_22 += 1)
                    {
                        {
                            arr_77 [i_13 + 1] [i_20] [i_11] = (((arr_28 [i_20] [i_20 - 1] [i_20 - 1] [i_20 + 1] [i_11]) >= (arr_28 [i_20 - 2] [i_20 - 2] [i_20 - 2] [i_20 - 2] [i_11])));
                            arr_78 [i_11] = (arr_14 [i_11]);
                            var_39 += ((31 == (arr_15 [i_20])));
                        }
                    }
                }
                var_40 = -var_8;
            }
            for (int i_23 = 0; i_23 < 11;i_23 += 1)
            {
                var_41 = 1208699419;
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 11;i_24 += 1)
                {
                    for (int i_25 = 1; i_25 < 10;i_25 += 1)
                    {
                        {
                            var_42 = 17945;
                            arr_85 [i_11] [i_13] [i_23] [i_24] [i_25] [i_11] = 4394008687180677730;
                            var_43 = (arr_49 [i_11] [i_13 + 1] [i_11]);
                            var_44 = 47590;
                        }
                    }
                }
                var_45 += ((var_5 ? (0 < 26) : var_9));
                var_46 = var_9;
            }
            var_47 = (((var_3 * 16) ? var_7 : ((79 ? (arr_80 [i_11] [i_11] [i_13 + 1]) : 186))));
        }
        for (int i_26 = 0; i_26 < 11;i_26 += 1)
        {
            var_48 = 15065;
            var_49 = 1896771203;
            var_50 |= (max((max((var_7 != 4), -17945)), (var_8 >= var_0)));
            arr_89 [i_11] [i_11] [i_11] = (max(((~(arr_48 [i_11] [i_26]))), (var_2 | var_11)));
        }
        var_51 -= (~15081);
    }
    #pragma endscop
}
