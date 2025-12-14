/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 *= var_11;
                arr_6 [i_1] [14] = var_8;
                arr_7 [8] [2] [i_1] = (arr_4 [i_0]);
                var_21 = (max((((arr_0 [i_1]) ? (arr_0 [i_0]) : (arr_2 [i_1]))), ((max(((min(var_4, var_5))), var_2)))));
                arr_8 [i_1] [12] [i_1] = (min((arr_5 [i_0] [8]), (arr_1 [12])));
            }
        }
    }
    var_22 = var_17;
    var_23 = var_2;
    #pragma endscop
}
