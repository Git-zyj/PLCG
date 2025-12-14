/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((-8454 ^ 0), (min(14, 121))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((var_3 ? (max(6819845635560747193, (((var_3 ? var_2 : 8085786897343466322))))) : ((((arr_1 [i_0]) << ((((max(var_2, 155))) - 147)))))));
                arr_5 [i_0] = (max((1179328028 * var_12), ((((arr_2 [i_0] [i_0] [i_1]) - ((1 ? 145 : var_6)))))));

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_2] [i_1 + 2] [i_0] = 4773220658319216565;
                                var_15 *= ((~var_12) == 5535882526612216273);
                            }
                        }
                    }
                    arr_13 [i_0] = var_12;
                    var_16 = (max(var_16, (arr_2 [i_0] [i_0] [i_0])));
                }
                arr_14 [i_0] [i_0] = var_8;
            }
        }
    }
    var_17 = var_2;

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 18;i_7 += 1)
            {
                {
                    arr_22 [i_5] [i_5] = (max(504, 48));
                    arr_23 [i_5] = ((var_1 ? (((-62 ? var_3 : var_1))) : ((-((var_1 ? var_8 : 48))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    {
                        arr_32 [i_5] [i_8] [i_9] [i_5] = 1;
                        arr_33 [i_5] [i_5] [i_5] [i_5] [i_10] [i_5] = (((((61 ? (arr_15 [i_5]) : 56087))) ? (~18446744073709551615) : (((max(48, 0))))));
                        arr_34 [i_10] |= 1493638252;
                        var_18 = (max(var_18, 140));
                    }
                }
            }
        }
        var_19 -= var_9;
        var_20 &= ((((43273 | (var_3 / var_3))) <= var_5));
        var_21 += ((-2568832290952545903 + (2824339401 % var_5)));
    }
    #pragma endscop
}
