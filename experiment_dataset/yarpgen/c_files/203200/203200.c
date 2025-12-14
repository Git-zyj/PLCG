/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = (((var_1 & (arr_2 [i_1 + 2] [i_0 + 2]))));
                var_15 *= ((((arr_1 [i_0 - 1] [i_1 + 2]) && (arr_1 [i_0 + 2] [i_1 - 1]))));
            }
        }
    }
    var_16 = ((var_0 - (var_1 - -8989607068696576)));
    #pragma endscop
}
