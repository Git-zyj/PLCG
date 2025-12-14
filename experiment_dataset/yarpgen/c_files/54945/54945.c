/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 106;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((min((((var_11 & var_8) ? ((~(arr_3 [i_0 + 1]))) : (arr_2 [i_1 - 1]))), var_6)))));
                var_16 *= (((((~(arr_0 [i_0 - 3] [i_1 - 1])))) ? ((max(198, var_2))) : 32739));
            }
        }
    }
    #pragma endscop
}
