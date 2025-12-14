/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = ((((max(var_12, var_6))) ? (((arr_6 [i_0 + 1]) ? (arr_6 [i_0]) : (arr_6 [i_0 + 1]))) : ((var_4 ? 125 : var_4))));
                var_16 += min((arr_0 [3] [i_1]), var_11);
                var_17 = 1;
            }
        }
    }
    var_18 = (max(var_18, (((var_11 ? (!var_5) : (min(18446744073709551615, (min(77, var_9)))))))));
    #pragma endscop
}
