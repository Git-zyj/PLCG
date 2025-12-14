/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((70 != (((var_8 / var_1) ? (((max(var_6, var_2)))) : var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_12 *= 5066348915562529109;
                var_13 = (min(var_13, ((((min((arr_0 [i_1] [20]), 5066348915562529109)) ^ ((((arr_0 [20] [i_1]) ^ (arr_0 [i_1] [i_1])))))))));
                var_14 = (34576 ^ -7142816550095729546);
            }
        }
    }
    #pragma endscop
}
