/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (-4896779003401521458 | (((-(var_1 & var_5)))));
    var_21 = var_13;
    var_22 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_0] [i_0] = ((-(1 || 0)));
                var_23 = (min(var_23, ((min(((-(arr_4 [i_0] [i_0] [i_1]))), (min((!9223372036854775797), var_1)))))));
                arr_9 [i_0] [i_1] [i_1] = ((-(((arr_0 [i_0] [i_0]) * (arr_2 [i_1])))));
            }
        }
    }
    #pragma endscop
}
