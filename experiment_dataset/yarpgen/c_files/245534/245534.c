/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_16 ^= ((~((max(11, 256)))));
        arr_2 [i_0] [i_0 + 1] = (arr_1 [i_0]);
        var_17 = (max(-1, -2283552357951855317));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_18 ^= var_15;
        var_19 = (arr_3 [i_1] [i_1]);
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (max(var_0, ((+((13 ? (arr_5 [i_2]) : 11))))));
        arr_9 [i_2] [i_2] = (((((((-1 ? 239 : 893717533))) ? (((-1945126851 ? (arr_1 [i_2]) : 524287))) : (var_12 ^ 9111732509995520809))) | ((((arr_0 [i_2]) & -7615816507788989520)))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 7;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 7;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_20 = var_15;
                                var_21 = (arr_19 [i_3] [i_4]);
                            }
                        }
                    }
                    var_22 = (min(-397170416, -99));
                }
            }
        }
        var_23 = ((min(-8016359639905556938, 524285)));
    }
    #pragma endscop
}
