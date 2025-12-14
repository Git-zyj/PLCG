/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_10 ^= ((((((min(31408, 3726170323094779091))) ? (3726170323094779087 | 3726170323094779091) : -3726170323094779106)) / 3726170323094779072));
                    var_11 = -3726170323094779092;
                    var_12 = (min(var_12, ((((((3726170323094779072 ? (arr_4 [i_2]) : 3726170323094779063))) ? (min(-3726170323094779092, 3726170323094779076)) : (arr_3 [i_2]))))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        var_13 ^= ((-3726170323094779083 ? (arr_8 [i_1] [i_3 + 2] [i_1 + 1] [i_1]) : (arr_0 [i_1 + 1] [i_0])));
                        var_14 = (min(var_14, var_2));
                    }
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        var_15 = (min(var_15, (var_8 == -3726170323094779090)));
                        var_16 |= var_6;
                        var_17 = (max(var_17, (((((max((~var_3), (-3726170323094779073 ^ -3726170323094779083)))) ? (3726170323094779089 | var_3) : -3726170323094779073)))));
                    }
                    var_18 = (min(var_18, ((((var_8 - (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                }
            }
        }
    }
    var_19 ^= (max(((((((3726170323094779089 << (((-3726170323094779084 + 3726170323094779145) - 60))))) || (var_3 + var_0)))), (((((var_4 + 9223372036854775807) >> (-3726170323094779090 + 3726170323094779130))) >> (var_9 + 102)))));
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 7;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 7;i_6 += 1)
        {
            {
                var_20 ^= (!(-3726170323094779094 | var_0));
                var_21 ^= (((var_4 - var_9) ? ((-(min(-3726170323094779092, -3726170323094779090)))) : (~3726170323094779082)));
            }
        }
    }
    #pragma endscop
}
