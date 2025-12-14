/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_19 = (min(var_19, var_0));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_2] [i_1] = (arr_0 [i_1]);
                        var_20 = ((((58 < (!var_17))) ? 659679474 : -193));
                        arr_12 [i_0] [i_0] [i_2] [i_0] = (((((var_3 ? (var_0 && 32754) : 190))) ? ((8318 ? 217 : -41)) : (((63 <= -32743) ? (((arr_1 [i_1]) ? (arr_0 [i_0]) : 1369750655)) : -34235))));
                        arr_13 [i_0] [i_2] [i_2] [1] = ((~(arr_5 [i_0] [i_0])));
                    }
                }
            }
        }
        arr_14 [i_0] = (-var_1 ? (((arr_1 [i_0]) / 1016347969)) : ((((!2786548214) || 31301))));
        arr_15 [i_0] = 50627;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_21 = var_13;

        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_22 = (max(var_22, (((-163 ? var_16 : ((var_11 ? 2786548226 : var_2)))))));
            var_23 = (~-2147483643);
            arr_20 [i_4] [i_5] = ((-72 ? 1603618319 : ((119 ? (arr_18 [i_4] [i_5]) : 1))));
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_24 = (max(var_24, (((((188823381 << (34246 - 34230))) <= var_9)))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    {
                        arr_33 [i_6] [i_6] [i_8] = 1508419074;
                        arr_34 [i_6] [i_9] = (((-5562 + -110) ? 40 : -986429403));
                        var_25 ^= (-127 - 1);
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_26 = var_14;
        arr_37 [i_10] = ((((-30908 ? ((1921751843 ? 2373215453 : (arr_36 [8]))) : (~47948))) | (((~((151 ? 24 : 31290)))))));
        var_27 -= var_16;
        var_28 |= var_4;
        arr_38 [16] |= 1508419074;
    }
    var_29 = (min(var_29, var_5));
    #pragma endscop
}
