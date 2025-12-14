/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_14 |= var_4;
                var_15 = 88;
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_16 &= (max((min(var_7, ((max(var_7, -81))))), var_7));
                            var_17 = var_11;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_18 = (min(8521908846418439526, ((min(((max(var_2, 1))), var_7)))));
                                var_19 = ((max((max(8521908846418439538, var_10)), 2147483629)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 &= max(var_2, 11);
    #pragma endscop
}
