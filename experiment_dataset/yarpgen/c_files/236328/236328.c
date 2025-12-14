/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 ^= ((872933730 & (((-829637497 ? 829637517 : 348644190)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_18 -= var_12;
                            var_19 -= (min((max(829637497, 434412781)), var_8));
                        }
                    }
                }
                var_20 -= (min(var_10, var_3));
            }
        }
    }
    var_21 -= var_5;
    var_22 = (max((min(2759331802, (!var_16))), (max(var_4, ((var_3 ? var_16 : var_9))))));
    var_23 = (((!(((434412763 ? 179 : var_12))))) ? var_14 : (((var_10 - var_2) ? var_10 : (!var_11))));
    #pragma endscop
}
