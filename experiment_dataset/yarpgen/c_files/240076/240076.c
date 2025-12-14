/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((((((((-1 ? 52222 : -7541047590614000179))) ? ((2147483647 ? var_9 : var_1)) : (var_9 <= 2147483647)))) ? (max(-1, -1704966349)) : (((((1 ? var_2 : 16))) ? -3 : var_0))));
    var_11 ^= 1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, var_5));
                    arr_11 [i_2] [i_2] = ((((max(((17757825217442820780 ? -8231499296708928894 : 1704966357)), (arr_3 [i_0])))) ? (((-3 - var_1) + ((max(3666, 8191))))) : ((((-1704966349 ? 1 : 13313)) - (arr_5 [i_0])))));
                    var_13 = ((16 ? -66 : 2));
                    var_14 = (-(-var_1 | 65535));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_2] [i_2] [i_0] = ((~(min(33184, (18446744073709551599 | 13313)))));
                                var_15 = (-9223372036854775807 - 1);
                                var_16 = ((16 ? ((1 & (((-2147483647 - 1) ? 1 : 18086)))) : -268435456));
                                var_17 *= (((((65535 ? -886878338 : 886878337))) || -18087));
                                var_18 = 5600449791037144785;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_19 ^= (max(0, (((arr_18 [i_5]) >> (((-9223372036854775790 | 2067843014) + 9223372034786932794))))));
        var_20 = (~-18087);
    }
    #pragma endscop
}
