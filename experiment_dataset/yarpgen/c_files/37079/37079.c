/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((((max(var_3, var_5))) ? var_5 : ((((!var_3) && var_14))))))));
    var_20 = var_14;
    var_21 = (max(var_21, (((var_5 ? var_2 : var_17)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_22 -= (arr_4 [i_1] [i_1 + 3] [i_1 + 2]);
                var_23 = (16398 > 16406);
            }
        }
    }
    var_24 = (min((1 / var_3), var_6));
    #pragma endscop
}
