/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((var_7 < (((var_11 > var_6) ? ((min(var_12, var_14))) : (var_2 * var_2))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (min((((arr_2 [i_0 + 1] [i_0] [i_0]) | (arr_2 [i_0 - 2] [i_0 - 2] [i_0 - 3]))), (((((((arr_0 [i_1]) / var_6))) || (arr_1 [i_0]))))));
                var_17 = (max(var_17, (((-(arr_1 [i_0 - 1]))))));
            }
        }
    }
    #pragma endscop
}
