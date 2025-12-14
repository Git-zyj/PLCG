/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 18446744073709551615;
    var_11 = var_5;
    var_12 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [16] = ((((max((278801850 > 278801850), ((7881299347898368 <= (arr_0 [i_0])))))) - (min(((var_9 ? (arr_3 [15] [3]) : var_6)), (arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_13 = (((arr_3 [i_0] [i_0]) & ((((max(14009, var_7))) ? -13994 : (11582236345232942028 <= 255)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_14 [i_1] = (max(((max(var_4, (arr_12 [i_1] [i_0] [i_1] [i_2] [i_1] [i_3])))), (max(((4294967295 + (arr_5 [i_1] [i_2] [i_3]))), -6212))));
                        arr_15 [i_1] [i_1] = (min(-14009, 32767));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_14 -= (max((arr_9 [i_0] [i_4] [i_0] [i_4]), (((14003 == (-1694823616676927812 <= 9922))))));
            var_15 ^= min(379273610, (((arr_19 [i_0] [i_4]) + 0)));
            var_16 ^= (max((max((((-14009 ? var_3 : 14009))), -735076887712633522)), 14010));
        }
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_17 -= (arr_12 [10] [i_5] [i_5] [i_5] [i_5] [i_5]);
        arr_24 [i_5] = (min(var_8, 13994));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                {
                    var_18 += ((-1774080203 ? var_9 : ((var_1 / (arr_0 [i_7 - 1])))));

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_19 = (arr_29 [1] [i_6] [i_5] [i_5] [i_5]);
                        var_20 = (((((1774080203 ? 1774080218 : 24576))) ? 6230188326160377549 : 2404345414));
                        var_21 *= (+(((((max((arr_30 [10] [i_6] [i_6] [i_7 - 1] [i_8]), (arr_1 [i_5]))))) + (arr_29 [i_6] [i_6] [i_8] [12] [i_8]))));
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                    {
                        var_22 -= ((-(((arr_12 [i_9] [i_9] [10] [i_9] [i_7 + 1] [0]) ^ (arr_27 [i_6] [i_7 - 1] [i_6] [11])))));
                        arr_34 [i_5] [i_6] [0] = ((((((max(-1186331106, var_3))) | (max((arr_20 [i_5] [i_5]), (arr_20 [i_5] [i_6]))))) + (((((min(var_4, (arr_13 [i_9] [i_7] [i_9] [i_9]))) >= (arr_8 [i_5] [i_9])))))));
                        var_23 ^= var_8;
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        arr_37 [i_5] [i_6] [8] = (min(-6230188326160377546, (max(((var_6 & (arr_7 [i_6] [i_6] [i_10]))), (arr_5 [i_5] [i_6] [11])))));
                        var_24 -= (max(0, -13994));
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                    {
                        var_25 ^= 6230188326160377560;
                        arr_42 [i_5] = ((-(((arr_40 [5] [i_6] [i_11] [i_7 - 1]) ? ((14030557649679629600 ? -7881299347898361 : var_6)) : -2147483635))));
                    }
                    var_26 -= (((!(var_7 && 11448))));
                }
            }
        }
        var_27 -= (((var_6 ? ((4973833932888943906 ? 278801855 : (arr_18 [i_5] [3] [i_5])) : -479403314))));
    }
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        var_28 -= ((((((((32767 ^ var_0) + 2147483647)) << ((max(0, (-32767 - 1))))))) ? var_1 : (((max(1774080218, var_2))))));
        var_29 = var_1;
    }
    #pragma endscop
}
