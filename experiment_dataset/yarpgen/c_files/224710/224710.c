/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (((((min(var_14, var_9)))) << ((((((max(9223372036854775796, -1))) ? var_5 : (min((arr_6 [i_0] [i_0]), var_7)))) + 1169117836))));
                arr_7 [i_0] [i_0] [i_0] = ((((229 ? (arr_6 [i_0 + 1] [i_0 + 1]) : var_12))) ? (arr_6 [i_0 - 1] [i_0 - 4]) : (!6041003337159881119));
            }
        }
    }
    var_17 = 4194303;
    var_18 = 0;
    var_19 = var_12;
    #pragma endscop
}
