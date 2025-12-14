/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (+-4294967281);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_11 = (!var_5);
                                var_12 = -var_7;
                                var_13 ^= (!var_7);
                                var_14 = -3005093603776575578;
                                var_15 &= ((!((!((max(var_3, var_1)))))));
                            }
                        }
                    }
                    var_16 += ((min(var_0, (~var_7))));
                    var_17 ^= var_6;
                    arr_14 [i_2] [i_2] = (min(var_2, (min((~var_5), -var_7))));
                    var_18 = (~(min((max(var_6, var_3)), (((var_1 ? var_4 : var_5))))));
                }
            }
        }
    }
    var_19 = var_9;
    #pragma endscop
}
