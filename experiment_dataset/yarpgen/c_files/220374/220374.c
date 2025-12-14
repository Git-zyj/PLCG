/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((max(-3616563792600029489, var_15)) * (~var_3))) > (((max(var_1, var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [1] [i_1] = (((((((((arr_2 [i_0] [i_1]) << (67 - 63)))) ? (var_15 / -84) : ((~(arr_2 [i_0] [i_1])))))) ? ((((max(var_6, var_14))) ? var_11 : (min(-82, var_2)))) : var_9));
                var_18 = (max(var_18, (((((((arr_0 [i_0]) - (arr_3 [i_0] [i_1])))) ? (-64 ^ 2095104) : 1026922482)))));
                arr_7 [i_0] [i_1] = ((((((((24576 ? 13336 : var_2))) ? -1838273557 : 15))) ? (106 && var_14) : ((((!2097151) != (max(1148417904979476480, var_2)))))));
                var_19 = (!16701);
            }
        }
    }
    #pragma endscop
}
