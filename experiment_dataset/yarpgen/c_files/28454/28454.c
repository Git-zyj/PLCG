/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (((var_3 ? var_11 : -var_18)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_21 += (min((((arr_2 [i_0] [8] [i_1]) ? var_19 : (arr_2 [i_0] [i_0] [i_0]))), var_9));
                var_22 = (((((((var_7 ? var_1 : (arr_3 [i_0] [3] [i_0])))))) - (((arr_1 [i_0]) ? (var_18 | var_12) : ((((((arr_4 [i_0] [1] [i_0]) + 2147483647)) << (((arr_2 [i_0] [i_0] [i_1]) - 217778183)))))))));
                arr_5 [i_0] = ((var_8 ? var_16 : (((((((((arr_4 [i_0] [i_0] [i_1]) + 2147483647)) >> (var_17 - 197)))) ? (21 * 0) : (var_0 & 127))))));
            }
        }
    }
    #pragma endscop
}
