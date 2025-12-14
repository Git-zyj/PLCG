/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 |= (-497519179 ? (((((var_12 ? var_3 : var_7)) > var_4))) : ((min((!var_11), var_11))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_2] = (((arr_2 [i_0]) <= (((arr_5 [i_0] [i_1]) / 1))));
                    var_15 = (arr_4 [i_0] [i_2]);
                }
            }
        }
        var_16 |= ((!((min(((var_9 ? var_3 : -497519202)), (arr_4 [i_0] [i_0]))))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {
            var_17 -= (max((((((min(var_1, (arr_14 [i_3])))) != (arr_11 [i_4 - 2] [i_4 - 2])))), 25558));
            var_18 = (((arr_12 [i_3]) < var_8));
            var_19 = (min(var_19, (((max(-497519202, -59))))));
        }
        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            var_20 = (min(var_20, (arr_11 [i_5 - 1] [i_5 - 1])));
            var_21 = (((((((!(arr_16 [i_5]))) || var_2)))) & (((((-1927083999 ? var_6 : (arr_10 [i_3] [i_3])))) * (min((arr_10 [i_3] [i_3]), (arr_11 [i_3] [i_5]))))));
            var_22 = ((((max(var_11, (arr_16 [i_5]))))) ? (arr_10 [i_5 - 1] [i_3]) : (((((arr_17 [i_5 - 1]) && var_6)) ? (arr_16 [i_5]) : (~0))));
            var_23 *= (min((((-25557 / 1) ? (((arr_16 [i_3]) ? (arr_13 [i_3] [i_5] [i_3]) : var_10)) : var_2)), (((var_11 ? 497519202 : (arr_16 [i_3]))))));
        }
        var_24 = (max(var_24, ((max((max((arr_13 [i_3] [i_3] [i_3]), (arr_11 [i_3] [i_3]))), (41306 || var_7))))));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 14;i_6 += 1)
    {
        arr_23 [i_6] = ((~(arr_19 [i_6 - 2] [i_6 + 1])));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    var_25 = ((~(arr_20 [i_6 - 2])));
                    var_26 -= -1531594929;

                    for (int i_9 = 2; i_9 < 15;i_9 += 1)
                    {
                        var_27 = (-497519199 ? ((var_8 + (arr_18 [i_8] [i_7]))) : var_9);
                        var_28 -= var_4;
                        var_29 = (((arr_29 [i_9 - 2] [i_9 - 2] [i_9 - 1] [i_9 - 2]) - (1 - var_11)));
                    }
                    for (int i_10 = 2; i_10 < 15;i_10 += 1)
                    {
                        var_30 -= (1 ? -25557 : -103);
                        arr_35 [i_10] [i_10] [i_10 - 1] [i_10] = var_8;
                    }
                }
            }
        }
        var_31 ^= (arr_20 [i_6]);
        arr_36 [i_6 + 1] = (3 + 1);
    }
    /* LoopNest 2 */
    for (int i_11 = 4; i_11 < 24;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 22;i_12 += 1)
        {
            {
                var_32 += (min(-var_8, (min((arr_37 [i_11 - 4]), 497519198))));
                var_33 = ((((max((arr_42 [i_11] [i_11] [i_12]), ((44764 ? 1113383865 : -497519203))))) ? (24221 <= 41314) : (((((~var_6) + 2147483647)) << (((((~497519178) + 497519202)) - 23))))));
            }
        }
    }
    #pragma endscop
}
