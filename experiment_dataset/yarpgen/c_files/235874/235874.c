/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 = (((((~(28 / var_13)))) || ((min(249, (arr_2 [i_0]))))));
                    var_21 = (max(((~((max((arr_6 [i_0]), (arr_2 [i_0])))))), (~var_8)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_22 = var_4;
                        var_23 = (min(var_23, var_10));
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, ((max(((((min(var_19, 249))) ? ((80 ? var_3 : var_9)) : -186)), 224)))));
    var_25 = var_19;
    #pragma endscop
}
