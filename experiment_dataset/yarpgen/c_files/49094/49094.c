/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_3 ? (min(((1 ? 5427371368173875525 : var_5)), (((var_3 ? var_7 : 4036157350))))) : (~62)));
    var_15 ^= ((var_10 ? var_11 : var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((min((arr_1 [i_0] [i_1]), (((!(arr_1 [i_0] [i_1])))))))));
                var_17 = (min(var_17, ((max(-763545121, 2525813758)))));
                arr_5 [1] [i_1] &= (arr_4 [i_0]);
            }
        }
    }
    #pragma endscop
}
