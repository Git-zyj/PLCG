/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = (((((((max(107, 1))) << (var_2 - 2130213592)))) - var_4));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = min((((!((min(-15772, 102)))))), ((4294967281 >> (((arr_2 [i_0] [9]) + 10596)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((((max(-12468, 15771))) ^ var_9));
                        var_15 *= ((((((max(-15771, (arr_9 [i_0] [i_0] [i_0] [i_0])))) + 2147483647)) << (!9874)));
                        arr_12 [i_0] [i_1] [i_2] = ((max((arr_2 [i_0] [i_0]), (arr_3 [i_0] [i_1] [i_2]))));
                    }
                }
            }
        }
        var_16 *= ((((-1 ? (min(var_5, 17)) : ((max((arr_7 [i_0] [i_0]), 2725618072))))) >> (((arr_2 [i_0] [i_0]) + 10594))));
        arr_13 [6] &= (min(var_4, var_1));
        arr_14 [i_0] [i_0] = (((-117 + 2147483647) << (65525 - 65525)));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_17 *= ((((min((min(var_7, 3801037057)), ((((arr_15 [i_4]) ^ 40)))))) | 16774639734649278421));
        var_18 ^= (1407055897 - (min((arr_17 [1] [i_4]), (arr_17 [i_4] [i_4]))));
    }

    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        var_19 = (!65517);
        arr_20 [i_5] = (((arr_16 [i_5 - 3]) << (!18211796760591873438)));
    }
    for (int i_6 = 3; i_6 < 10;i_6 += 1)
    {
        var_20 *= (((arr_15 [i_6]) - ((((max(-15774, -126))) ? 9511554358286219617 : (~var_9)))));
        var_21 ^= ((((max(var_7, ((max(37389, 7165)))))) ? -116 : var_8));
        arr_24 [i_6] [i_6 - 2] = (((((arr_21 [i_6 - 3]) ? (arr_21 [i_6 - 3]) : (arr_21 [i_6 + 3]))) * ((min(var_8, -32)))));
        arr_25 [i_6] = var_8;
    }
    #pragma endscop
}
