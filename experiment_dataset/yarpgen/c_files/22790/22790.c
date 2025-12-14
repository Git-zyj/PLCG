/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = ((((((((arr_1 [i_1]) | (arr_4 [i_0] [i_0])))) > (min(1, (arr_0 [i_0] [i_1 - 3]))))) && (arr_4 [i_0] [i_0])));
                var_15 = (min(var_15, (((((((var_13 ? 0 : var_6)) - -7257839621146460684)) % ((min(var_3, -24160))))))));
            }
        }
    }
    var_16 = var_3;
    var_17 = (((((min(var_13, -24160)))) > -3));
    var_18 = (min(8974139590515624841, ((((1 ? var_10 : var_9))))));
    var_19 = (((min((((14922821813195227115 ? var_8 : var_13))), var_12))) ? (0 && var_5) : ((((min(3924909657, 32764))) ? var_4 : var_12)));
    #pragma endscop
}
