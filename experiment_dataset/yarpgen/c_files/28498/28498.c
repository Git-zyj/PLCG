/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (-73429511919701129 != 30);
                var_20 |= (((max(var_4, (arr_0 [i_1 + 2])))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_21 = (((!var_8) | (arr_5 [i_2] [i_1] [i_1 + 2] [i_2])));
                    var_22 = var_13;
                }
            }
        }
    }
    var_23 = (max(var_6, (((((var_17 >> (var_8 - 21)))) ? var_3 : ((max(215, 102)))))));
    var_24 = max((max(var_4, var_13)), var_2);
    #pragma endscop
}
