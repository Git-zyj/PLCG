/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 *= (((arr_0 [i_0]) ? ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) : ((((max(-813557598, -32761))) ? (((arr_2 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))) : (((32 <= (arr_2 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((6749 + ((105 ? -109 : -1))));
        var_19 -= (max((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0]))), 53360));
        arr_4 [9] = ((((((min(-813557606, var_16)) + (arr_1 [i_0] [i_0])))) ? ((((arr_1 [i_0] [0]) != (arr_0 [i_0])))) : ((((arr_0 [6]) && (arr_2 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 &= (((-1 ? (((var_1 && (arr_5 [i_1])))) : (arr_6 [i_1]))));
        arr_7 [i_1] |= (1 != var_2);
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_21 = (min(var_21, (((!(((-1 - (!45621)))))))));
        var_22 = (min(((((var_15 ? var_8 : (arr_8 [i_2]))) - var_8)), (arr_0 [i_2])));
        var_23 ^= max((max((((arr_10 [i_2]) ? var_5 : (arr_2 [i_2] [5]))), ((60334 ? 1 : -1)))), var_4);
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    {
                        var_24 -= (arr_16 [i_2] [i_3 - 1]);
                        var_25 = (max(((min((1 & 63), (arr_16 [i_3 - 1] [i_3 - 1])))), var_3));
                        var_26 |= (((arr_11 [i_4]) && (65535 ^ 956992245)));
                    }
                }
            }
        }
    }
    var_27 = var_5;
    #pragma endscop
}
