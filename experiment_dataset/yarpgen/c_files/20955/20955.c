/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, var_4));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((((~42) ? (~19776) : 613420800)))));
                                var_20 = (((~var_7) ? ((~(~var_13))) : ((~(~var_9)))));
                                arr_14 [i_2] [i_2] [i_2] [i_2] [i_4] [i_1] [i_1] = (max((((19776 ? 1 : 255))), (((((var_6 ? var_16 : var_9))) ? var_17 : (var_1 & var_11)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_5;
    var_22 = (min(var_22, var_11));
    #pragma endscop
}
