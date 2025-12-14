/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (((arr_3 [i_0]) % (min((arr_5 [i_0] [i_1]), ((max(var_13, (arr_1 [i_0] [i_0]))))))));
                var_19 = (arr_3 [i_0]);
            }
        }
    }
    var_20 = ((~(min(var_0, 1))));
    var_21 += ((var_10 ? (((var_15 ? var_1 : var_16))) : (!var_15)));
    #pragma endscop
}
