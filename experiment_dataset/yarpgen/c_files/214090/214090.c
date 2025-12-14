/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = ((((-(arr_3 [i_0] [1] [i_0 - 1]))) ^ (((((arr_1 [i_0 - 2]) < (arr_1 [i_1])))))));
                var_22 = (((arr_1 [i_0 + 2]) != (((arr_1 [i_0 + 1]) / (arr_1 [i_0 - 1])))));
            }
        }
    }
    var_23 += var_13;
    #pragma endscop
}
