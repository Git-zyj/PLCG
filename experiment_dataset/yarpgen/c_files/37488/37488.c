/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] = (max(((((var_0 > var_9) == (var_6 * var_16)))), var_17));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = (((min(var_10, (var_5 & var_16))) != ((((var_3 / var_14) == (min(var_10, var_15)))))));
                                arr_13 [i_0] [1] [i_0] = (((((var_18 << var_10) + (var_16 - var_7))) / var_13));
                                var_20 *= (min((((var_7 != var_12) * (var_12 ^ var_0))), ((((min(var_10, var_16))) | (var_9 && var_12)))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_2] [i_2] = ((((((var_14 & var_8) || (var_5 / var_8)))) == (((var_14 + var_0) * (var_12 == var_8)))));
                    var_21 -= (50545 & 2071041342);
                }
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    var_22 = (min(var_22, ((max((((var_14 != ((max(var_0, var_18)))))), (((var_1 <= var_14) | var_18)))))));
                    arr_18 [i_1] [i_1] [14] = (((min((-50 | 2071041342), (var_9 || var_17))) <= (((((var_14 + 2147483647) >> (var_1 - 17))) + var_3))));
                    var_23 -= (2311614590725502317 % 17451448556060672);
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_24 += ((((((var_3 && ((min(var_15, var_12))))))) >= (var_12 & var_9)));
                                var_25 &= (((((var_12 - var_2) - (var_1 - var_15))) == ((var_10 / (max(var_8, var_3))))));
                            }
                        }
                    }
                    var_26 *= (1331946197 * -2071041342);
                }
                for (int i_8 = 3; i_8 < 14;i_8 += 1)
                {

                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_15 != (var_11 & var_5)));
                        arr_33 [9] [5] [1] [i_9] [i_1] [i_9] = var_1;
                        var_27 = ((var_10 * (var_5 && var_5)));
                    }
                    var_28 = (max(var_28, ((max((((2071041342 != 2221496074) > var_18)), ((((max(2071041342, 1663192118))) || 1)))))));
                    arr_34 [i_0] [i_0] = (max(((((var_16 < var_13) >= (min(var_10, var_9))))), (((var_2 * var_10) * var_14))));
                    var_29 = (((max((var_1 != var_13), (var_10 <= var_2))) || ((((var_17 | var_17) | (min(var_12, var_17)))))));
                    arr_35 [i_0] [1] [i_8] [i_8 - 1] = ((var_3 ^ var_12) + (var_5 + var_5));
                }
            }
        }
    }
    var_30 ^= ((((var_18 && var_11) && (1158 && 3551691975764503589))) && ((max((min(var_14, var_8)), (min(var_6, var_8))))));
    var_31 = (max(var_31, (((var_7 & (((var_1 * (var_8 == var_10)))))))));
    var_32 = ((var_8 * ((var_2 * (var_16 < var_17)))));
    #pragma endscop
}
