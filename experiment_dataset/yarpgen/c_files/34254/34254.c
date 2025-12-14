/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    var_20 = var_14;
    var_21 = (!var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_22 = ((((-(arr_3 [14] [i_3])))));
                                arr_17 [i_0] [i_3] [i_3] [i_3] [i_4] [i_4] = ((var_1 ^ (var_6 % var_15)));
                            }
                        }
                    }
                }
                var_23 = ((!(var_12 > var_5)));
            }
        }
    }
    var_24 = ((((((var_12 | var_9) || (~var_11)))) != 0));
    #pragma endscop
}
