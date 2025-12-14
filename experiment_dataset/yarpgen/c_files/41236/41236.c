/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    var_14 = (min(((var_4 ? var_1 : (!var_7))), (((var_6 != var_1) ? (min(var_8, var_6)) : var_6))));
    var_15 |= ((0 ? ((((max(55348, 10187))) ? -var_9 : var_1)) : (((((55347 ? var_11 : var_1))) ? var_1 : var_9))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = ((((((arr_2 [i_0] [i_0]) | (((arr_1 [i_0] [5]) ? var_11 : (arr_0 [i_0])))))) ? -2014668783 : (((((var_1 ? -2014668771 : (arr_0 [i_0])))) ? var_11 : (((arr_2 [1] [i_0]) ? var_10 : 112))))));
        arr_5 [i_0] = ((-2014668780 ? var_1 : ((((arr_0 [i_0]) == -30698)))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_16 = (max(var_16, ((((arr_7 [i_1]) - (arr_7 [i_1]))))));
        var_17 = arr_6 [i_1] [i_1];
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_18 = ((~((1654528592 << (((arr_15 [3] [i_2] [i_3] [i_4]) - 506957915023672016))))));
                        arr_18 [i_1] [i_3] [i_3] [i_4] [i_3] [i_1] = ((-126 ^ ((-(arr_15 [i_1] [i_2] [i_3] [1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
