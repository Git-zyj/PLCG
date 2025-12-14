/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 &= (max((((var_10 / (arr_2 [2] [i_0] [14])))), (min((arr_3 [i_0]), (arr_1 [11])))));
                var_12 = ((!(arr_2 [i_0 - 2] [i_1] [i_1])));
                var_13 = var_0;
            }
        }
    }
    var_14 = max(var_1, 2573);
    #pragma endscop
}
