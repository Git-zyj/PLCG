/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += max(((min(var_10, 15822))), (((((103 ? -16 : 16777216)) <= 15822))));
    var_18 = (min(var_18, (((((min((min(var_4, var_2)), ((var_12 ? var_8 : var_13))))) ? ((var_14 ? (min(var_7, var_12)) : ((var_12 ? var_7 : 6920497838696080040)))) : (max(var_13, (min(var_9, var_8)))))))));
    var_19 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = (((((var_12 ? 16777213 : (arr_4 [i_1 - 1] [i_1 + 2] [i_1 - 3])))) ? (((arr_4 [i_1 + 2] [i_1 + 1] [i_1 - 2]) ? 15808 : var_11)) : (((((arr_4 [i_1 - 1] [i_1 - 2] [i_1 + 1]) && (arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 2])))))));
                var_21 ^= var_2;
            }
        }
    }
    #pragma endscop
}
