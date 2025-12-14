/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((3782610244 ? ((((min(var_12, 4980946295903287200))) ? ((var_14 ? var_11 : var_2)) : var_14)) : (((var_8 >= var_9) ? ((var_14 ? var_13 : var_6)) : (min(var_0, var_8))))));
    var_18 += ((-((min(var_12, -15792)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (~(((((var_10 ? var_2 : (arr_1 [i_0] [i_1])))) ? var_3 : var_12)));
                var_20 = ((arr_5 [0] [i_1 + 1] [6]) ? (!var_8) : (((((15619 ? 0 : -15619))) ? (((max(var_4, var_7)))) : var_15)));
                arr_7 [7] [i_0] = ((~6830221991522014648) ? (max((max(var_12, var_16)), ((min(var_4, (arr_3 [i_0 + 1] [i_0 + 1] [i_1 + 2])))))) : ((max(15619, var_2))));
            }
        }
    }
    var_21 = (max(var_21, var_0));
    #pragma endscop
}
