/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = (max(var_11, -var_7));
                arr_6 [i_0] = ((((((arr_4 [i_0 - 3]) ? (arr_2 [i_0 - 1]) : (arr_4 [i_1])))) ? (min(((var_3 ? var_9 : var_5)), 1)) : ((((arr_5 [i_0 - 3] [i_0 - 2]) ? var_1 : (arr_3 [i_0]))))));
            }
        }
    }
    var_13 = ((((((var_9 ? var_0 : var_1)) % var_0)) ^ var_4));
    #pragma endscop
}
