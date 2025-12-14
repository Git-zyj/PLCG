/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = 11713984748232982048;
                var_13 = (((((var_11 ? (max(65535, var_5)) : (1 != 1)))) ? (134086656 - 65535) : (((!var_8) ? (var_8 && var_3) : var_6))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                {
                    var_14 = ((min(65535, (!1))));
                    arr_16 [i_2] [i_2] [i_3] [i_3] = var_1;
                }
            }
        }
    }
    #pragma endscop
}
