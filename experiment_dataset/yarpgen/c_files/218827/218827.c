/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = ((((var_15 < (arr_2 [i_0]))) ? var_15 : (((arr_3 [i_0] [i_0] [i_1]) ^ (min((arr_1 [i_0] [i_0]), 30649))))));
            var_16 = (((min((arr_2 [7]), 1077899632)) - var_6));
        }
        arr_5 [i_0] = (max(((((max(var_3, 1077899632))) ? (0 && 1077899640) : -376839912)), (-376839942 | -1688129132)));
    }
    var_17 = (min((max(var_5, ((var_3 ? var_11 : var_9)))), var_8));
    #pragma endscop
}
