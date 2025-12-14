/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = (var_13 % var_12);
                arr_6 [i_1] = (var_1 >= 1);
                arr_7 [i_1] = (54 / var_6);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_15, var_0));
                            var_16 = 5339460401574956895;
                        }
                    }
                }
            }
        }
    }
    var_17 = var_3;
    #pragma endscop
}
