/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (((min(var_11, ((min(1627814017, var_5)))))) ? (((2047 ? -3812391124630199744 : 4825011919597042052))) : (3812391124630199762 - var_11));
    var_14 = ((min(((var_12 ? 1627813997 : 2667153267)), ((26868 ? 2517318361 : 3447138305)))));
    var_15 = (min(var_15, ((((((-2290374492780700852 ? var_5 : var_1)) + var_3))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 -= var_8;
        var_17 *= (((((1636633788 ? 1627814018 : 1))) ? (arr_1 [i_0] [8]) : ((max((arr_1 [i_0] [12]), (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 &= (((arr_1 [2] [2]) ? (((((min(847828979, (arr_3 [i_1] [i_1])))) ? var_2 : ((-2385172544036443990 ? (arr_0 [i_1] [i_1]) : var_6))))) : ((1 ? 3812391124630199745 : var_6))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_2] [i_2] [i_4 + 2] = var_3;
                        var_19 -= var_2;
                    }
                }
            }
        }
        var_20 = (max(var_20, (((((((arr_0 [i_1] [i_1]) ? (arr_0 [i_1] [i_1]) : var_6))) ? ((min((arr_4 [i_1] [i_1]), (arr_0 [i_1] [i_1])))) : ((0 ? (arr_4 [i_1] [i_1]) : (arr_0 [i_1] [i_1]))))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_21 += (arr_18 [i_5]);
        var_22 -= (((arr_1 [i_5] [i_5]) == (arr_1 [i_5] [i_5])));
    }
    #pragma endscop
}
