/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((var_9 ? var_7 : 51481)) ? (((-9223372036854775807 - 1) & -1471787029)) : (((var_0 ? 35940 : var_6)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = max((min((arr_10 [i_0] [i_1] [i_1 - 1] [i_3] [12]), var_11)), (((((var_4 ? (arr_7 [i_0] [i_0] [i_0]) : 29608))) ? var_8 : (arr_4 [i_1 + 1]))));
                                var_15 *= (((((+(((arr_4 [i_0]) | var_2))))) ? ((-((~(arr_11 [i_0] [i_1] [i_2] [i_0] [i_4]))))) : (-1515862076412755187 >= -1515862076412755186)));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_16 = (min(var_16, (((((var_1 ? (arr_14 [i_1 - 1] [i_1 - 1] [i_1] [i_2]) : (min(var_5, var_6)))) & (max(-var_2, (((arr_7 [i_0] [i_1] [i_1]) ? var_2 : var_6)))))))));
                        var_17 ^= ((((min(18446744073709551593, var_9)) >> (((arr_2 [i_0] [i_0]) - 2336)))) | (1827789315 / var_2));
                        var_18 = (((arr_3 [i_0] [i_2] [i_0]) >= 1827789330));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_19 = (min(((~(max(var_10, 125)))), ((max(-1, 1827789354)))));
                            var_20 -= ((((((-16 ? 4294967278 : -138915502653812512)))) ? (arr_11 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : ((3 ? (-2147483647 - 1) : 49774))));
                        }
                    }
                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            var_21 = (min(var_21, ((max((min((arr_14 [i_0] [i_7 - 2] [i_7 - 1] [i_2]), (arr_14 [i_2] [i_2] [i_2] [i_2]))), (((var_10 ? var_4 : (arr_2 [i_0] [2])))))))));
                            var_22 = ((((((max(var_9, 3)) && (18446744073709551567 || -3))))));
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_23 = ((((((arr_11 [i_7] [i_7 - 2] [i_7] [i_7] [i_7]) ? ((46662 ? (arr_3 [i_7] [i_1] [i_0]) : 1827789314)) : 8247196782081131674))) ? (max((arr_22 [i_0] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_0]), (max(1131042188220432869, 11157458323893113948)))) : (((1546 ? 1 : -2706877661778636229)))));
                            var_24 = (max(var_24, ((((arr_19 [1] [i_1] [i_1] [1]) ? (536870911 ^ -8247196782081131679) : (max((arr_2 [i_0] [i_0]), (((arr_22 [i_0] [i_1] [i_2] [i_0] [i_7]) ? var_6 : var_0)))))))));
                            var_25 = (~(max(4382, (arr_11 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]))));
                        }
                        var_26 = (arr_21 [i_0] [i_1 + 1] [i_0] [i_0] [3]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
