/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((max(var_9, (min(var_8, var_5)))), var_2));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = var_1;
                var_16 = 113;
                var_17 ^= (arr_2 [i_0] [i_0]);
                var_18 = (max((arr_1 [i_1] [i_0]), (((var_7 / var_7) / ((-(arr_1 [i_0 + 2] [6])))))));
                var_19 = (max(var_19, (arr_0 [i_1])));
            }
        }
    }
    var_20 = var_6;
    var_21 = 1;
    #pragma endscop
}
