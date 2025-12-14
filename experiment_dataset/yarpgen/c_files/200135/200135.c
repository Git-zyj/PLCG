/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_4));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (arr_1 [i_0])));
                var_22 = arr_5 [10] [i_1];
                arr_7 [10] [16] = (arr_0 [i_0] [2]);
                var_23 += (arr_1 [11]);
            }
        }
    }
    var_24 = var_16;
    #pragma endscop
}
