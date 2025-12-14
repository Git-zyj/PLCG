/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = 16777214;
                    var_15 = (max(var_15, 0));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 &= -88;
                                var_17 = var_10;
                                var_18 *= 94;
                                var_19 = (min(var_19, ((min(0, var_3)))));
                            }
                        }
                    }
                    var_20 = 0;
                    var_21 &= 94;
                }
            }
        }
    }
    var_22 = var_2;
    #pragma endscop
}
