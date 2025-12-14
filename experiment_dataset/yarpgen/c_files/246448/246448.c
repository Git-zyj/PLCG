/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (((((var_8 & (65535 != var_1)))) ? (max(((var_9 ? var_17 : var_4)), (118 > 1152921504539738112))) : -var_10));
    var_21 = (max(-2036155804824813294, var_19));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_22 = ((((max(((max((arr_3 [i_1] [i_1]), (arr_2 [i_0] [i_0] [i_1 - 1])))), (((arr_3 [i_1] [i_1]) ? 2093167415 : 112))))) ? var_1 : (arr_0 [i_0])));
                arr_4 [i_1] [i_1] [i_1 - 1] = ((((max((max((arr_2 [i_0] [i_0] [1]), (arr_0 [i_1]))), (arr_0 [i_1])))) == -var_14));
            }
        }
    }
    #pragma endscop
}
