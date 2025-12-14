/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (min(109, ((var_6 ? 108 : -4606939927287120412))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 *= ((2189438220 && (((var_2 ? (arr_1 [i_1]) : -110)))));
                arr_4 [i_0] [i_0] [i_1] = -109;
                var_20 = (max((min(var_0, 103)), (max((arr_2 [i_1]), var_6))));
            }
        }
    }
    var_21 = ((!(((((min(var_11, var_12))) ? -116 : var_9)))));
    #pragma endscop
}
