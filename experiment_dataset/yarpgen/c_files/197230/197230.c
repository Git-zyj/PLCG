/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((((!(var_5 && var_7)))), (max(var_5, var_9))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (arr_1 [1])));
                    arr_10 [i_0] [i_1] = ((var_8 ? ((((arr_1 [i_0]) && (arr_0 [i_0])))) : var_7));

                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        var_14 *= (((arr_4 [6]) * (arr_12 [0] [i_1] [i_2] [i_3 + 2] [i_1] [i_2])));
                        var_15 = ((arr_9 [i_0] [i_0] [i_0]) >= (1 < 20348196));
                        arr_14 [6] [i_0] [i_0] [1] = var_2;

                        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                        {
                            var_16 = (max(var_16, ((((((1 ? -27384 : 1))) - var_3)))));
                            var_17 = ((var_9 ? var_9 : (arr_13 [i_0])));
                            arr_18 [i_0] [i_4] = (20348202 != 1);
                            var_18 += (((arr_11 [i_4] [i_4] [i_3 + 1] [i_3 + 1]) != (arr_11 [i_3] [i_3] [2] [i_3 + 1])));
                            arr_19 [i_0] [i_1] [i_2] [i_1] [i_4] [i_0] = (((arr_15 [i_0] [i_1] [i_1]) << (var_3 - 1137264133)));
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            arr_24 [i_5] [i_3] [i_0] [i_1] [5] = (((var_11 < var_10) << (var_2 - 4396)));
                            arr_25 [i_0] [i_1] [i_0] [i_2] [i_3] [i_0] = ((-(arr_0 [i_0])));
                            var_19 = (min(var_19, (arr_21 [i_0] [6] [i_0] [i_0] [i_0])));
                            var_20 = (max(var_20, (((var_6 ? (arr_8 [0] [1] [i_3] [i_3 - 1]) : var_8)))));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            arr_28 [i_6] [i_3] [i_0] [i_0] [i_1] [i_0] = ((arr_22 [i_6] [i_0] [i_2] [i_0] [i_0]) ? (arr_22 [i_0] [i_0] [5] [i_3] [i_6]) : (arr_22 [i_0] [i_0] [8] [i_3] [i_6]));
                            var_21 = (max(var_21, (((-(((arr_0 [8]) ? var_5 : (arr_1 [9]))))))));
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_31 [i_7] [i_7] [i_3] [i_0] [i_2] [4] [i_0] = -var_0;
                            var_22 -= ((arr_1 [i_0]) & (var_0 || var_8));
                            var_23 = (max(var_23, var_8));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_24 = (arr_9 [i_8 - 2] [i_1] [i_2]);
                                arr_36 [0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((((((arr_3 [1]) >> (((arr_22 [i_9] [i_0] [i_2] [i_0] [9]) - 5039479430816114137))))) || (arr_20 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2])))) : (((((((arr_3 [1]) >> (((((arr_22 [i_9] [i_0] [i_2] [i_0] [9]) - 5039479430816114137)) - 8584988014140305019))))) || (arr_20 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2]))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_25 = (arr_21 [i_11] [i_10] [i_0] [i_0] [i_0]);
                arr_42 [i_0] [2] = var_0;
                var_26 = ((var_8 < (arr_8 [0] [i_0] [i_11] [1])));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        {
                            var_27 = (min(var_27, -var_2));
                            var_28 = (((arr_20 [i_0] [i_10] [i_11] [1] [i_13] [i_0]) ^ (((arr_30 [i_0] [0] [1]) ^ var_5))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 8;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        var_29 = (max(var_29, (((-var_6 + (((arr_53 [i_0] [i_10]) ? var_2 : (arr_26 [i_0] [i_10] [i_14] [i_15] [i_10]))))))));
                        var_30 = (max(var_30, var_3));
                        arr_55 [i_15] [i_10] [i_10] [i_10] [1] &= (arr_23 [i_0] [i_10] [i_10] [i_14 + 1] [i_15] [i_15]);
                        arr_56 [i_0] [i_10] [i_0] [i_15] = ((((var_8 ? (arr_51 [i_0] [1] [i_14] [i_15]) : (arr_12 [i_0] [i_0] [i_0] [i_14] [i_14] [i_15]))) * (arr_13 [i_0])));
                    }
                }
            }
            arr_57 [i_0] [i_0] = (((arr_12 [i_0] [i_10] [i_10] [i_0] [i_0] [i_0]) | var_6));
            var_31 = (i_0 % 2 == zero) ? ((((arr_38 [i_0] [i_0]) << (((arr_38 [i_0] [i_0]) - 2664538688665791701))))) : ((((arr_38 [i_0] [i_0]) << (((((arr_38 [i_0] [i_0]) - 2664538688665791701)) - 7159957604119619530)))));
        }
    }
    for (int i_16 = 0; i_16 < 23;i_16 += 1)
    {
        arr_61 [i_16] [i_16] = ((((min((max(var_7, var_5)), (min((-2147483647 - 1), 1))))) ? ((min(384, -30766))) : ((((min(var_10, var_10))) >> (min(1, var_9))))));
        arr_62 [20] &= (max((min((arr_59 [i_16] [14]), (min(var_0, var_8)))), ((((((arr_60 [i_16]) ^ (arr_60 [i_16])))) ? (arr_60 [i_16]) : (arr_60 [i_16])))));
        /* LoopNest 2 */
        for (int i_17 = 4; i_17 < 19;i_17 += 1)
        {
            for (int i_18 = 4; i_18 < 20;i_18 += 1)
            {
                {
                    arr_69 [i_16] [i_17 - 2] [i_16] [i_16] = var_4;
                    arr_70 [16] [i_17 - 2] [i_16] = ((((((min((arr_66 [4] [i_16]), (arr_59 [1] [i_18])))))) * (((-(arr_58 [i_17]))))));
                    var_32 = (min((arr_68 [i_16]), (max((min(var_0, var_1)), ((min((arr_60 [i_17]), var_5)))))));
                    arr_71 [i_18] [i_16] [i_16] [i_16] = max(((max((-20348199 | -27131), 18705))), var_1);
                }
            }
        }
    }
    for (int i_19 = 1; i_19 < 14;i_19 += 1)
    {
        var_33 = ((((min((arr_63 [i_19 + 2]), (arr_63 [i_19 + 1])))) ? (arr_63 [i_19 + 2]) : ((((arr_63 [i_19 - 1]) || (arr_63 [i_19 + 2]))))));
        arr_74 [15] = min((max((max(var_6, var_1)), var_0)), (((-((min(var_6, var_2)))))));
        arr_75 [i_19 + 1] = (max(((((((arr_59 [i_19 + 1] [i_19]) + var_11)) != ((max((arr_60 [i_19 + 2]), (arr_58 [i_19 + 3]))))))), (((-1 ? 60355 : -20348177)))));
    }
    /* LoopNest 3 */
    for (int i_20 = 4; i_20 < 18;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 22;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 22;i_22 += 1)
            {
                {
                    var_34 = var_0;
                    var_35 = (max(var_35, ((((min((min(2147483648, 312)), ((max(2147483647, 2078755967))))) != ((((((min((arr_63 [i_20 - 1]), var_5))) || ((min(-6294, 7453067665493142294))))))))))));
                    var_36 = (-(arr_66 [i_20] [i_22]));
                }
            }
        }
    }
    #pragma endscop
}
