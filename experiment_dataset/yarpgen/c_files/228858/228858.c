/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = ((-((((var_16 && var_17) && var_5)))));
        var_20 += ((-((-(arr_1 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_21 *= ((-(((arr_3 [i_1 + 3] [i_1 + 1]) ? var_0 : -5130475779694188645))));
        var_22 ^= ((((var_11 ? var_16 : (((arr_3 [i_1 + 1] [i_1]) ? var_7 : var_9)))) ^ -0));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_23 &= (arr_5 [i_2 - 1] [i_2 - 1]);
        var_24 = ((((var_15 || (arr_8 [i_2 - 1]))) ? (min(var_4, (237 / -5130475779694188645))) : ((((~var_1) ? var_2 : (arr_0 [i_2 - 1] [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_25 |= ((var_13 ? var_8 : var_3));
        var_26 *= -142;
        arr_11 [i_3] |= ((var_10 ? -var_5 : ((-5130475779694188645 ? 3362 : 2871712087))));

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_27 = ((var_13 ? var_17 : (arr_9 [i_3])));
            var_28 = ((((((((arr_10 [i_3]) ? var_1 : var_16)) + -0))) ? ((13328 ? (arr_9 [i_3]) : var_4)) : ((~(arr_12 [i_3] [i_3] [i_4])))));
            var_29 ^= (max((arr_13 [i_4] [i_3] [i_3]), var_0));
            arr_14 [i_4] = (((((var_15 ? (((arr_13 [i_3] [i_3] [i_3]) ? var_12 : 1523310846955568213)) : (~var_13)))) ? (max((arr_13 [i_4] [i_3] [i_3]), (arr_12 [i_3] [i_4] [i_4]))) : 35499));
        }
        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {
            var_30 = ((!((((~-42) ? 3315692323 : (((~(arr_12 [i_3] [i_5] [i_3])))))))));
            var_31 ^= ((((((arr_9 [i_3]) ? ((((arr_16 [i_3] [i_3] [i_3]) ? var_17 : var_12))) : ((var_0 ? var_18 : var_17))))) ? var_13 : (((((var_8 / (arr_10 [i_3])))) ? -var_6 : (max(var_13, var_12))))));
        }
        var_32 &= var_18;
    }

    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_33 -= var_9;
        arr_21 [i_6] [i_6] = (arr_1 [i_6]);
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    {
                        var_34 = ((-(((arr_18 [i_9 + 2] [i_9] [i_9 - 1]) ? -5130475779694188667 : var_10))));
                        var_35 -= (arr_15 [i_7] [i_9 + 1] [i_9 + 2]);
                    }
                }
            }
        }
        var_36 -= ((((((var_17 ? var_12 : var_8)))) ? (((((var_6 ? var_8 : var_17))) ? ((((arr_28 [i_7]) >> (var_13 + 734688405)))) : ((var_7 ? var_6 : var_18)))) : (((var_0 ? var_11 : (((arr_31 [i_7] [14] [i_7] [i_7]) ? (arr_8 [i_7]) : var_15)))))));
    }
    #pragma endscop
}
