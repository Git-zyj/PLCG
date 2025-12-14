/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (var_5 ? ((15251 ? ((39408 ? 15251 : 14)) : (min(3, var_17)))) : 1100);
    var_21 |= (min((~1108512988), var_16));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_22 += (max((602478220 % 39408), 2568318374));
                var_23 = max(((3664720241 << (((arr_0 [i_0 - 2]) - 31237)))), ((3893152904 ? 50294 : 2036786871)));
                arr_4 [i_1] = ((-(((var_0 >= var_14) << (((max((arr_0 [11]), var_9)) - 219003592))))));
            }
        }
    }
    var_24 = (-((((var_17 ? 2777008225 : var_15)) >> (39385 - 39363))));
    #pragma endscop
}
