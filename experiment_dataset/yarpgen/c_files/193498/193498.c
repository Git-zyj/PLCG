/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(var_4, (!42963)))) | var_6));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_1] = -var_3;
                var_11 = (min(128, var_6));
            }
        }
    }
    var_12 *= var_2;
    var_13 = ((max(var_9, -var_1)));
    #pragma endscop
}
