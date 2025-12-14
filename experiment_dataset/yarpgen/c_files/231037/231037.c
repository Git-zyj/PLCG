/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (arr_2 [11]);
                arr_5 [i_0] = ((min(((max(var_2, var_11)), ((1 ? var_11 : var_2))))));
            }
        }
    }
    var_16 = (~var_13);
    var_17 = var_5;
    var_18 = ((((max(var_9, var_2))) * ((((((var_12 ? var_4 : var_13)) <= var_11))))));
    #pragma endscop
}
