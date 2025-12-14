/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((var_6 ? var_11 : (((~((63 ? var_2 : 7393))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, (!7393)));
                            var_17 = ((-((0 ? var_8 : 58141))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_18 ^= (~7383);
                            var_19 = -6517795413958139849;
                        }
                    }
                }
                var_20 = (~-var_12);
                var_21 = (max(((1 ? 11491 : (!0))), 224));
            }
        }
    }
    var_22 = (min(var_22, ((min((((!(~var_13)))), -55319)))));
    var_23 += (min((min(99, (max(-73, var_14)))), var_6));
    #pragma endscop
}
