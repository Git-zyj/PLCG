/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0 - 1] [10] = (arr_2 [i_0] [i_1]);
                arr_5 [i_0] = -4157421188;
                arr_6 [i_0] = ((4294967287 ? -78 : 77));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3 + 1] [i_2] [i_2] [i_1] [i_1] [i_0] = ((((((arr_8 [i_0] [i_0] [i_2] [i_3]) ? (arr_10 [i_0] [11] [i_0] [i_3 + 3]) : 2100528671315876608)) < (52993 || 1776257725))));
                                var_14 ^= ((~(max((var_5 ^ var_4), var_1))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_2] = 18050657982112349919;
                                var_15 *= 49;
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = (((((17784 ? 872161166 : 45731))) ? ((((((1484518582 ? 4157421182 : 1134087156)) <= (((77 ? 31421 : var_4))))))) : 2100528671315876606));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = -177;
    var_17 = ((((((var_8 ? var_11 : 36865)) + 2147483647)) >> (51971 - 51957)));
    var_18 = ((244 ? var_11 : (max((var_2 && var_10), (max(1776257722, var_0))))));
    var_19 = ((((~((var_8 ? var_13 : 7582936547689348831))))) ? (((max(1934781500037817374, 32767)) >> ((((65535 ? -78 : var_5)) + 110)))) : ((((var_1 & 32767) ? 14224540943662414121 : -26))));
    #pragma endscop
}
