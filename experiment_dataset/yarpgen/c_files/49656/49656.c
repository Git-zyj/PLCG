/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (~0);
        var_11 = min(-0, ((max(255, 7))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_12 = (-(arr_4 [i_1]));
        var_13 += ((-(arr_6 [i_1])));
        var_14 &= ((((var_5 ? (arr_6 [i_1]) : (arr_5 [i_1] [i_1])))) ? ((-(arr_4 [i_1]))) : -0);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 20;i_3 += 1)
            {
                {
                    var_15 = ((var_4 > (((var_1 ? var_1 : var_1)))));
                    var_16 -= var_2;
                    var_17 += var_5;
                    var_18 -= (arr_5 [i_3 + 1] [i_3]);
                    var_19 = (((((var_3 << (((arr_6 [i_1]) - 6337783137905702042))))) ? (((~(arr_10 [i_3] [i_3] [i_3] [i_3 - 2])))) : (arr_9 [15] [11] [i_3 + 3])));
                }
            }
        }
        var_20 -= ((-var_0 ? (arr_9 [i_1] [i_1] [i_1]) : var_0));
    }

    for (int i_4 = 4; i_4 < 12;i_4 += 1)
    {
        var_21 &= var_4;
        var_22 = var_10;
        arr_14 [i_4] = var_6;
        var_23 = (((arr_1 [i_4] [i_4]) < ((((var_1 ? 22 : -32756))))));
    }
    var_24 = var_0;
    #pragma endscop
}
