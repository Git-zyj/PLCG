/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 6094743141425502379;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min(var_5, ((((arr_2 [i_0] [i_1] [6]) != (arr_0 [i_0]))))));
                arr_6 [6] = 0;
            }
        }
    }
    var_21 = -80;
    #pragma endscop
}
