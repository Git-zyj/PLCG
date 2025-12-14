/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (min(67108862, (arr_1 [i_0])))));
                var_14 = 144115188075855864;
                var_15 = (max(var_15, (((var_8 ? var_9 : (max(var_2, (arr_1 [i_1]))))))));
            }
        }
    }
    var_16 = (min(var_16, (((var_4 ? 145 : (max((min(var_6, 100663296)), 16400640467470370753)))))));
    var_17 = var_8;
    #pragma endscop
}
