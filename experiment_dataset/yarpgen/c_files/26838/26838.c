/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -6686;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = (max(103, -25));
                var_22 = (max(((((arr_3 [i_0] [i_1]) ? (arr_2 [i_0] [3]) : var_4))), (max((arr_0 [i_0]), (arr_1 [i_1])))));
                var_23 = 1184337654;
                var_24 = (arr_3 [12] [i_1]);
            }
        }
    }
    #pragma endscop
}
