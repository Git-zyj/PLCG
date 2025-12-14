/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 -= (((-127 - 1) ? ((((arr_1 [12]) >= (arr_1 [0])))) : (((((arr_1 [12]) + 2147483647)) >> (((arr_1 [18]) + 108))))));
        arr_2 [i_0] = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_10))) ? (max((arr_0 [i_0]), (arr_1 [i_0]))) : (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] = var_9;
        var_12 = (((max((arr_1 [22]), var_6))) ? (((arr_0 [i_1 + 1]) ? var_9 : (max((arr_0 [i_1]), (arr_1 [6]))))) : (min(-13, (arr_1 [4]))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_13 = (min(var_13, var_5));
                        var_14 -= ((((max(var_9, (arr_12 [4] [i_2] [4] [i_4] [i_2] [1])))) != (arr_13 [i_1 - 3])));
                        var_15 = (max(((var_10 ? (arr_10 [i_1 - 1] [i_3] [i_4]) : (arr_6 [i_1 - 2] [i_1 - 1]))), (((arr_9 [i_1 - 1] [i_3] [8]) & (arr_9 [i_1 + 2] [i_3] [i_3])))));
                        var_16 -= ((((((arr_7 [i_1 + 1]) ? ((var_4 ? var_5 : var_5)) : ((-1053300476 ? 15169 : var_7))))) ? (arr_11 [i_4] [i_3] [i_2] [i_1 + 2]) : 117));
                    }
                }
            }
        }
        arr_14 [i_1 - 1] = var_5;
    }
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = var_3;
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                {
                    var_17 ^= (min(var_10, (arr_18 [i_5 - 2] [i_5 + 2])));
                    var_18 -= var_9;
                }
            }
        }
        arr_22 [i_5] = var_2;
    }
    var_19 = var_0;
    var_20 = ((var_7 ? 1330573019 : ((var_3 ? var_4 : var_10))));
    #pragma endscop
}
