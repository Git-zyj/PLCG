/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = ((((arr_1 [i_0]) > 1333480909)));
                arr_5 [2] |= (max(var_12, ((~(arr_1 [14])))));
                arr_6 [1] [i_0] = ((max(255, ((var_2 ? var_1 : 176)))));
            }
        }
    }
    var_17 = var_11;
    var_18 = (max(var_14, var_4));
    var_19 = ((((max(((var_12 ? -621337543012489115 : var_2)), (2147483647 / var_4)))) ? ((var_11 ? var_14 : -var_8)) : var_15));
    #pragma endscop
}
