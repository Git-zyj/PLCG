/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_15 ? var_7 : 0));
    var_19 = ((((((8157952333838005102 ? -17 : 1)))) & ((-((var_5 ? var_15 : var_2))))));
    var_20 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (arr_2 [i_0] [i_1 - 1]);
                var_22 ^= ((!(((var_17 ? -8157952333838005103 : var_11)))));
                var_23 = ((arr_5 [i_1 + 2] [i_1]) ? (arr_5 [i_1 + 1] [7]) : (((arr_5 [i_1 + 3] [i_1 + 1]) + 161438206)));
            }
        }
    }
    var_24 ^= var_12;
    #pragma endscop
}
