/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((arr_1 [i_0]) - var_11));
        var_16 = (((arr_0 [i_0 - 1]) || (arr_0 [i_0 + 1])));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] = ((~(arr_8 [i_0 - 1] [i_1] [i_1])));
                        var_17 = (((arr_9 [i_3] [1] [8] [8]) | 65535));
                        var_18 = (min(var_18, var_3));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 3611084609;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] [i_4] = ((22 ? (((arr_10 [2] [2]) ? 13 : var_5)) : var_5));
        var_19 += var_10;
    }
    var_20 = var_4;
    var_21 = ((((((var_4 > ((var_5 ? var_11 : var_3)))))) | ((var_6 ? (min(4, 18446744073709551613)) : ((21129 ? 18446744073709551608 : var_14))))));
    #pragma endscop
}
