/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (!var_4)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((~(((((var_13 ? (arr_1 [i_0]) : 1))) ? var_2 : -var_13))));
                    var_16 = (min(var_16, (((var_14 ? 10416 : 1)))));
                    var_17 = ((var_2 ^ (min(var_0, (((arr_6 [i_1]) ? (arr_0 [i_1]) : (arr_3 [i_1])))))));
                }
            }
        }
    }
    #pragma endscop
}
