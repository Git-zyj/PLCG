/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = ((var_18 & ((5 ? ((max(1, 1))) : (arr_2 [i_1] [i_0])))));
                var_21 = ((((arr_2 [i_0] [i_0]) ^ 1)) + ((((min(1, 1263864858)) == (1 < var_13)))));
            }
        }
    }
    var_22 = ((var_13 ? ((max(var_7, (min(var_11, var_3))))) : var_13));
    #pragma endscop
}
