/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27264
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
                arr_5 [i_0] [i_1] = var_1;
                var_12 = ((-((((1 ? 77 : (arr_4 [i_0] [i_1] [i_0])))))));
                var_13 = ((((((var_9 ? (arr_1 [i_0] [i_1]) : var_9)) > 17)) ? var_11 : ((-81 ? 1459940972 : 8476))));
            }
        }
    }
    var_14 = var_7;
    var_15 = (max(var_15, ((((23 ? 0 : 17)) >= (((((190217685 ? var_8 : var_6)))))))));
    var_16 *= (!var_4);
    #pragma endscop
}
