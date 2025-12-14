/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((!(((((max(var_7, var_17))) ? (((max(-6140, var_1)))) : (min(170, 1446569906)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] = (arr_5 [i_1]);
                    var_21 = (min(var_21, (max((min((min((arr_3 [i_0] [i_0] [i_2]), (-9223372036854775807 - 1))), ((min((arr_2 [6]), 4294967295))))), (!86)))));
                    var_22 &= (var_17 / var_4);
                }
            }
        }
    }
    var_23 = var_2;
    #pragma endscop
}
