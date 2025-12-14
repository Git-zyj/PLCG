/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = ((((min((arr_3 [i_1] [i_1] [3]), (arr_2 [i_0])))) >= (max((arr_2 [i_0 + 1]), (arr_0 [i_0] [i_1])))));
                var_17 += ((((((arr_0 [i_0 + 1] [i_0 + 1]) == (arr_0 [i_0] [i_1])))) | (arr_1 [i_0])));
            }
        }
    }
    var_18 = var_0;
    #pragma endscop
}
