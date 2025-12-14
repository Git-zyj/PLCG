/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(27293, (min(var_3, var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((((((min(var_1, (arr_5 [i_1] [i_0] [i_1])))))) ? ((~(arr_2 [i_0 + 1] [i_0 + 1]))) : 45746)))));
                arr_6 [i_0] = (min((arr_3 [i_0]), (max(31, (arr_3 [i_0])))));
                var_17 &= var_8;
            }
        }
    }

    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_18 = arr_9 [i_2 - 2];
            var_19 = (max(var_19, (((~var_6) ? (((max((min(232, 15)), 10)))) : var_12))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    {
                        var_20 = (max(var_20, (((max((arr_0 [i_5]), (((var_5 <= (arr_9 [i_2])))))) ^ var_8))));

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_20 [i_2] [i_2] = (((~((var_13 ? var_14 : -21)))));
                            var_21 = (((((var_9 - (arr_3 [i_5])))) ? 232 : ((max((arr_3 [i_5]), (arr_3 [i_5]))))));
                            var_22 -= min(((31 ? (240 + var_2) : ((64396 ? var_4 : var_13)))), (arr_19 [i_6] [i_5] [i_4 - 1] [i_3] [i_2]));
                            var_23 -= ((~(arr_8 [i_4])));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            var_24 = var_10;
                            arr_24 [i_7] [i_5] [i_7] [i_3] [i_7] = 4189256649163778238;
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            var_25 = 64396;
                            var_26 = (((((((((-2147483647 - 1) % 1))) ? 7 : (max(43940, -4809496201309628397))))) && (((-4797179125917844854 ? 39 : 225)))));
                            arr_28 [9] [i_3] [i_3] [1] [i_3] = arr_19 [i_2] [i_3] [0] [i_5] [i_8];
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_27 = (((arr_26 [i_2 - 2] [i_2 - 1]) / (arr_26 [i_2 - 1] [i_2 - 1])));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        {
                            var_28 = (max(64379, ((var_9 / ((1598883998 ? var_10 : (arr_37 [i_2] [i_9] [i_9] [2])))))));
                            arr_42 [i_11] [i_9] = ((~((39 ? ((-(arr_10 [i_2 - 1] [i_10] [i_12]))) : 19))));
                            var_29 = (((((var_8 >= (arr_16 [i_2])))) - ((var_7 - (arr_22 [i_2] [i_11] [i_10] [i_11] [i_12])))));
                            var_30 += (max(-20, (((!(var_0 >= 21596))))));
                            var_31 &= arr_34 [i_2] [i_2] [i_2];
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                {
                    var_32 = (max(((max((min(var_14, -32741)), -88))), ((6131696060944045730 % (~0)))));

                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        var_33 = (arr_29 [i_2]);
                        arr_54 [i_2] [i_14] [i_14] [i_15] = (arr_47 [i_14] [i_14]);
                    }

                    for (int i_16 = 2; i_16 < 13;i_16 += 1)
                    {
                        arr_59 [i_2] [i_13] [i_14] [i_14] = ((244 ? (((min(var_11, var_7)))) : (((((var_1 ? (-2147483647 - 1) : (arr_0 [i_14]))) >= var_0)))));
                        arr_60 [i_2] [i_2] [i_14] [i_14] [i_2] [i_13] = var_7;
                    }
                    for (int i_17 = 2; i_17 < 13;i_17 += 1)
                    {
                        var_34 = (((max(((((arr_51 [i_14]) | (arr_39 [i_13] [i_17])))), (arr_11 [i_14] [i_13] [i_2 - 1]))) & (arr_35 [i_2])));
                        arr_64 [i_14] = ((+(min((var_10 & var_11), -var_1))));
                        var_35 ^= ((var_0 ? (~32740) : (arr_38 [i_2] [i_13] [i_14] [i_17])));
                        arr_65 [i_14] [i_13] [i_14] = (+(((arr_39 [i_2 + 1] [i_13]) % (var_11 >= var_1))));
                    }
                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        var_36 = (min(var_36, ((min(41137, var_1)))));
                        var_37 -= (-450413152 - 21609);
                        var_38 = (max(var_38, (((((((43910 ? var_11 : (arr_45 [i_2] [i_13])) >= ((min(var_6, var_7)))))))))));
                    }
                }
            }
        }
        var_39 = (max(var_39, ((max((arr_35 [i_2 - 2]), ((-(arr_35 [i_2 - 2]))))))));
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            for (int i_20 = 3; i_20 < 12;i_20 += 1)
            {
                {

                    for (int i_21 = 3; i_21 < 13;i_21 += 1)
                    {
                        var_40 = (min(((max((8752973217604796151 >= 21619), (arr_3 [i_21])))), (~var_14)));

                        for (int i_22 = 1; i_22 < 13;i_22 += 1)
                        {
                            arr_80 [i_2] [i_2] [0] [i_2 - 2] [i_2 - 2] [i_2 - 1] |= ((~((+(((((arr_46 [i_2] [i_19] [6] [2]) + 2147483647)) << (6003492786687967380 - 6003492786687967380)))))));
                            var_41 -= (min((arr_78 [i_2] [i_2] [i_2]), (((!(((var_1 ? var_3 : (-2147483647 - 1)))))))));
                            var_42 ^= (((~(~72057594037927935))));
                        }
                        arr_81 [0] [i_21] = (min((max(var_4, (max(var_0, var_7)))), (arr_3 [i_21])));
                        var_43 = var_0;
                    }
                    /* vectorizable */
                    for (int i_23 = 0; i_23 < 14;i_23 += 1) /* same iter space */
                    {
                        var_44 ^= (((~var_1) * var_9));
                        var_45 = (((var_7 >> 28) ? (!243) : (((arr_8 [i_19]) % -57708985))));
                        arr_85 [i_2] [i_2] = ((((1 ? var_11 : 55)) / (~32740)));
                        var_46 = (var_6 > var_11);
                        var_47 = (max(var_47, 5801635597621435223));
                    }
                    for (int i_24 = 0; i_24 < 14;i_24 += 1) /* same iter space */
                    {
                        var_48 = 8839404120752147057;
                        arr_88 [i_24] [i_20] [i_19] [i_2] = var_8;
                    }
                    var_49 = (max(var_49, (((((var_11 ? ((~(arr_27 [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2] [i_2]))) : (var_9 & 131071))) + (((((var_1 | (arr_11 [i_2] [i_2 + 1] [2]))) <= (~1)))))))));
                    var_50 = (((((arr_31 [i_2 - 2] [i_19] [i_20 + 2]) || (arr_1 [18]))) ? ((min(((var_4 < (arr_53 [i_2] [i_2]))), (var_5 <= var_12)))) : ((min((!0), ((var_5 != (arr_58 [i_20] [2] [6]))))))));
                }
            }
        }

        for (int i_25 = 0; i_25 < 14;i_25 += 1)
        {
            var_51 -= var_4;
            arr_91 [i_2 + 1] = arr_30 [i_2 - 2];
            var_52 |= 6557800953143356957;
            arr_92 [i_2] = ((var_6 >= ((~(~-26719)))));
        }
    }
    #pragma endscop
}
