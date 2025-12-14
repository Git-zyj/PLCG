/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_2));
    var_17 = var_2;
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((max(9370854122693727671, 8299905441254452300)))));
                arr_6 [i_0] [i_0] [i_0] = 8299905441254452301;
                var_20 = (((-9223372036854775807 < 3364828893844509244) - (1073725440 <= -8299905441254452291)));
            }
        }
    }
    #pragma endscop
}
