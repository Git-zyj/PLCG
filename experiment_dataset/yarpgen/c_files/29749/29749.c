/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (var_9 % var_0)));
                var_16 = ((~(((var_14 >= ((var_8 ? 6888702850878033037 : (arr_0 [17]))))))));
                var_17 = var_1;
            }
        }
    }
    var_18 = var_12;
    var_19 = var_3;
    #pragma endscop
}
