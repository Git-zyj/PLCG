/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_8, ((var_0 ? (min(var_3, var_2)) : (var_10 % var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 |= ((!(((((min((arr_2 [15]), var_3))) ? ((((arr_2 [4]) | (arr_4 [i_0] [7])))) : (arr_7 [i_1 + 3] [i_0 - 1]))))));
                    var_15 &= var_5;
                }
            }
        }
    }
    var_16 = (min((!var_7), var_9));
    #pragma endscop
}
