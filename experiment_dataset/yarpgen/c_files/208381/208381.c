/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-((-((30786325577728 ? 4294967295 : 18446713287383973902))))));
    var_21 = 3520792003;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_22 *= (((~(arr_6 [i_0 + 1] [i_0 + 1] [i_2] [i_0 + 1]))));
                    var_23 = ((!((((arr_7 [i_0] [i_1]) ? ((((arr_1 [i_0]) || (arr_2 [i_0])))) : (((var_13 || (arr_3 [i_2])))))))));
                }
            }
        }
    }
    var_24 = var_0;
    #pragma endscop
}
