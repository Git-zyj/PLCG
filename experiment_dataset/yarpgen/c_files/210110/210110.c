/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_1] = (min(var_14, (min(3940649673949184, var_2))));
                var_17 -= (((((arr_1 [10]) * 3940649673949184)) ^ (arr_2 [9])));
                var_18 = (((arr_5 [i_1]) >= (arr_5 [i_1])));
            }
        }
    }
    #pragma endscop
}
