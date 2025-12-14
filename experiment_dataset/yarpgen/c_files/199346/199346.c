/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((((var_2 | var_7) ? ((((min(var_1, var_11))) ? var_0 : (max(var_12, var_13)))) : var_1)))));
    var_15 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = ((((-3320969759917859085 ? 3320969759917859082 : -10785))));
                    var_17 = (min(-23125, 1));
                    var_18 = (min(var_18, ((((-4672542407855669333 ? 519846059 : (arr_5 [i_0] [i_1] [i_2])))))));
                }
            }
        }
    }
    var_19 = (((~1) ? (-23141 && 17940823110531141855) : ((2119651136 ? var_6 : (30273 / -683066115127519300)))));
    #pragma endscop
}
