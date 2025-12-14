/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 -= (min((((!((min((arr_4 [1]), (arr_4 [0]))))))), (min((arr_1 [i_0] [i_1]), (max(2068667834, var_4))))));
                var_18 += (max(((-(28 <= 125))), 28));
            }
        }
    }
    var_19 *= (((max((var_15 || var_15), (-29 || 63969))) ? (!var_5) : (((var_3 || (((var_6 ? var_10 : var_15))))))));
    var_20 = (max(var_20, (!var_6)));
    #pragma endscop
}
