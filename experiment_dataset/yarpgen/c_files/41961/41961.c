/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((~var_1) + 2147483647)) >> (var_0 / var_0))) ^ ((((7 ^ 1) >= (!var_1))))));
    var_12 = (~((-(~23))));
    var_13 = (((var_3 / var_1) / (((-70 * 18157) / (var_3 / var_3)))));
    var_14 |= (((((var_3 && var_1) ^ var_5)) + ((((var_0 && var_2) <= (32 < var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    var_15 = (((((-var_8 != (!var_8)))) == (((~-573744949) - (var_9 ^ var_6)))));
                    var_16 = ((((((var_1 || (arr_3 [i_0]))) || ((!(arr_4 [17] [17]))))) && ((!(((arr_3 [i_1]) && (arr_1 [16])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_17 = ((-var_2 + 2147483647) >> ((+(((arr_8 [i_0] [i_0] [19] [i_0] [i_0]) / var_3)))));
                                var_18 = (min(var_18, (((((((var_10 < (arr_5 [i_0] [i_1] [i_2] [20]))))) <= ((-(((var_4 != (arr_3 [i_3])))))))))));
                                var_19 = (min(var_19, ((((--5) * (((var_0 / var_4) / (var_2 * 1))))))));
                                var_20 = (((1 / 3697) - ((+(((arr_8 [i_0] [i_1] [i_2] [i_3] [i_4]) * -104))))));
                            }
                        }
                    }
                }
                var_21 = (((((((((arr_9 [i_0] [19] [4] [i_0]) <= var_3))) != (!var_0)))) >> ((((~(11 != var_8))) + 2))));

                /* vectorizable */
                for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    var_22 ^= ((-(3218024750 - 24564)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_23 = ((!((((arr_14 [i_0] [i_1] [i_5 - 1]) ^ (arr_21 [22] [i_7]))))));
                                var_24 = ((~((-7572697855203799946 ^ (arr_0 [i_0] [i_0])))));
                                var_25 += ((8 < ((((arr_6 [i_0] [i_1] [i_6] [i_1]) && (arr_11 [i_0] [21] [21] [21] [i_5] [i_6] [i_7 - 1]))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    var_26 = (37661 || 472894613);
                    var_27 = (((104 != 189) ^ (((arr_9 [i_0] [22] [i_0] [i_0]) ^ (arr_1 [i_8])))));
                    var_28 += (((~var_3) | (~18046)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_29 = ((((var_6 && (arr_7 [i_0] [i_0] [i_0] [i_0]))) || (!-40)));
                                var_30 = (((((arr_19 [i_0] [i_10] [i_8] [i_10] [23] [i_0]) >> (((arr_25 [i_9] [i_1]) + 4988)))) % (var_9 != 4095)));
                            }
                        }
                    }
                }
                var_31 -= ((((((!((((arr_6 [i_0] [2] [15] [i_0]) >> (var_1 - 95)))))))) ^ ((-((~(arr_9 [i_0] [i_0] [i_0] [i_0])))))));
            }
        }
    }
    #pragma endscop
}
