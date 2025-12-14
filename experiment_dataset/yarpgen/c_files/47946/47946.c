/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_0 ^ (min(var_8, var_9)))))));

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_17 = ((~(((-var_13 >= ((max(var_14, var_3))))))));
        var_18 = (max(var_18, ((((min(var_11, (arr_1 [i_0 - 1] [i_0 - 3]))) | (arr_1 [i_0] [i_0]))))));
        var_19 *= 255;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, var_2));
                                var_21 = (max(var_21, var_10));
                            }
                        }
                    }
                    var_22 = (min(var_22, var_7));
                }
            }
        }
    }
    #pragma endscop
}
