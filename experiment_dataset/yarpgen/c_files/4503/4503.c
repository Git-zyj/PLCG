/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((((arr_3 [1]) ? ((~((-97 ? var_2 : var_2)))) : ((var_3 - (arr_1 [i_0 + 1] [i_0 + 2]))))))));
                arr_6 [i_1] [i_0] [i_1] = (max(var_16, (30196 - -24)));
                var_19 = (min(var_19, (arr_4 [10] [i_0] [1])));
            }
        }
    }
    var_20 = var_9;
    #pragma endscop
}
