/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_11 = ((!(arr_1 [12] [i_0 + 1])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, 255));
                    var_13 = ((~(arr_7 [i_0 - 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 = 745860814;
                                var_15 = ((!(arr_7 [i_4 + 2])));
                            }
                        }
                    }
                }
            }
        }
        var_16 *= var_1;
    }
    for (int i_5 = 3; i_5 < 16;i_5 += 1)
    {
        var_17 |= (arr_16 [16]);
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        var_18 = ((((((arr_5 [i_5 + 3]) * var_0))) ? (arr_5 [i_5 - 2]) : ((max((arr_5 [i_5 + 3]), (arr_5 [i_6 - 1]))))));

                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            arr_28 [0] [i_5] [0] [i_7] [i_9] [i_8] [i_6 - 1] = ((~(((var_4 & var_5) ? (((-2218779209267093381 + 9223372036854775807) >> var_7)) : var_0))));
                            var_19 ^= ((var_5 ? (~1) : ((max((arr_4 [i_5] [i_6 - 1] [i_5 + 2]), (arr_4 [i_5 + 1] [i_6 - 1] [i_5 + 4]))))));
                            arr_29 [i_9] [i_9] [i_8] [i_5] [i_7] [i_5 + 1] [i_5 + 1] = ((((1 ? (((arr_23 [i_5] [i_5] [i_5] [i_7]) ? var_3 : var_5)) : (((min(var_1, var_1)))))) - (((~(arr_9 [i_6] [i_6 - 1] [i_7]))))));
                        }
                        for (int i_10 = 1; i_10 < 16;i_10 += 1)
                        {
                            var_20 = (max(var_20, ((((!var_9) * (0 & 22))))));
                            arr_33 [i_5] [i_6] [i_7] [i_5 - 1] [i_7] [i_8] = -19462;
                            var_21 = (min(var_21, (min(((((476534215 >> (var_0 - 3196))) >> (255 - 227))), ((max((((arr_1 [i_8] [i_6]) | (arr_26 [i_8] [i_5]))), 61289)))))));
                            arr_34 [i_5 - 3] [3] [i_6 - 1] [i_5] [3] = -2218779209267093381;
                            arr_35 [i_5 + 3] [i_6] [i_7] [i_8] [i_5] = ((((min(var_6, ((var_10 ? var_0 : var_3))))) ? var_6 : (max(972207981, ((((arr_24 [i_5] [19] [i_5] [i_5]) ? var_7 : 1)))))));
                        }
                        for (int i_11 = 1; i_11 < 18;i_11 += 1)
                        {
                            arr_38 [i_5] [i_5] = (((((arr_11 [i_5 - 2] [i_6] [i_6] [i_7] [i_8] [i_5]) * (arr_11 [i_5] [i_11 + 1] [i_5 + 1] [i_8] [16] [i_5])))) ? (min(((min(var_6, 0))), (((arr_2 [i_11]) ? (arr_23 [i_5] [i_6] [i_6 - 1] [i_8]) : var_7)))) : (((var_2 ? var_9 : ((18623 ? 0 : -729877749))))));
                            arr_39 [i_5 - 2] [i_5 - 2] [i_5] [7] [i_11] = (max((((~var_3) ? var_8 : ((var_7 ? var_7 : var_10)))), ((((((2218779209267093381 << (250512522 - 250512520)))) || (-682904653 != 1))))));
                        }
                        var_22 -= ((((arr_26 [i_8] [i_8]) / (arr_26 [i_8] [i_8]))));
                    }
                }
            }
        }
    }
    var_23 = -729877727;
    var_24 = (max((!var_7), (max(((0 ? var_10 : var_0)), var_0))));
    #pragma endscop
}
