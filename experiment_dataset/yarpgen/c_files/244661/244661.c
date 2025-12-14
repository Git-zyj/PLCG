/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_10 ? (((((var_6 ? var_0 : var_2))) ? var_3 : (max(var_8, 2795667488)))) : var_2));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 += 2419848596849164656;
                var_14 ^= ((((-((var_5 ? (arr_0 [2]) : var_8)))) & ((~(arr_2 [i_0 + 2])))));
                var_15 = (arr_2 [i_0]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_16 = ((((max(127, 4294967295))) ? (arr_6 [i_2]) : (((arr_6 [i_2]) ? (arr_6 [i_2]) : var_4))));
        arr_7 [i_2] = min((min(var_2, (min(var_6, var_5)))), 4294967295);
    }
    var_17 = ((((((var_11 ? var_3 : (-127 - 1))) ? var_10 : var_8))));
    #pragma endscop
}
