/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_2 ? (((var_0 ? var_13 : ((var_9 ? var_8 : var_11))))) : var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((-(arr_4 [i_0] [i_1])));
                arr_7 [i_0] = ((((max(((-(arr_3 [i_0] [i_1] [i_1]))), var_12))) ? (((arr_2 [i_0] [i_1 + 4]) ? (arr_2 [i_1 + 3] [i_0]) : (arr_2 [i_0] [i_1 - 1]))) : (arr_0 [8] [8])));
                var_18 = ((~(arr_4 [i_0] [i_1])));
            }
        }
    }
    var_19 = (max(var_19, var_2));
    var_20 = var_14;
    #pragma endscop
}
