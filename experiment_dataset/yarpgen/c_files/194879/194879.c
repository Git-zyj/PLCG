/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 = (var_16 == var_3);
    var_19 = (min(var_19, var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = 65535;
                var_21 = (min(((((arr_3 [i_1] [i_0]) ? (arr_6 [i_1] [i_1] [i_1]) : 164))), (max((arr_2 [i_0] [i_1]), 9223372036854775791))));
            }
        }
    }
    #pragma endscop
}
