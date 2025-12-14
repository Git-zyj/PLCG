/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((15 + var_8), var_8));
    var_14 ^= (((120 / var_3) >= var_0));
    var_15 = (min(var_15, var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 *= ((var_6 ? (~219) : 36));
                    arr_9 [i_2] [i_2] [i_2] [i_0] = (4586075930307752545 ^ 0);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = (var_0 * var_0);
                                arr_14 [i_0] [i_2] [i_1] [i_2] [i_2] [i_3] [i_4] = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(var_6, (max(var_9, var_6))));
    #pragma endscop
}
