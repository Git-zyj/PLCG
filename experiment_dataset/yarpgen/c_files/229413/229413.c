/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_16 = (((~-32) & (arr_0 [i_0 + 1] [i_0 - 1])));
        arr_3 [i_0 - 1] = var_13;
        arr_4 [i_0] [i_0] = ((+((((arr_1 [5] [i_0 + 2]) > var_12)))));
        var_17 = ((-((((min(1, var_15)) <= (((arr_1 [i_0] [i_0 + 2]) ? (arr_2 [3] [3]) : (arr_1 [i_0 + 2] [i_0 - 1]))))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_18 ^= (arr_5 [i_1] [1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    arr_15 [i_1] [i_2] [13] = -38;
                    arr_16 [i_3] [21] [i_2] [i_1] = 34;
                    arr_17 [i_3] [i_2] [i_2] [17] = (max((((arr_9 [i_1]) ? (arr_9 [i_1]) : var_5)), (((arr_9 [i_2]) * (arr_9 [i_3])))));
                }
            }
        }
        arr_18 [i_1] [i_1] = (((var_8 && 119) || ((var_13 && (arr_7 [i_1])))));
        var_19 -= min(var_11, (((((max((arr_6 [i_1]), (arr_6 [12])))) | (((var_9 >= (arr_14 [i_1] [i_1] [i_1]))))))));
    }
    var_20 &= var_9;
    #pragma endscop
}
