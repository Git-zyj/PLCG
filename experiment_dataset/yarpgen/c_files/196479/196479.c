/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_3 ? (max(var_8, var_0)) : (max(1887416474889798018, (min(var_9, 2231419742))))));
    var_12 = ((((min(var_2, ((var_7 ? var_9 : var_0))))) ? (-9223372036854775807 - 1) : (((var_1 ? var_2 : (((-9223372036854775807 - 1) ? var_8 : var_10)))))));
    var_13 = var_9;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_1 - 2] [i_1] [i_0] = var_3;
            var_14 = (arr_2 [i_0]);
            arr_6 [i_0] [6] = 18446744073709551615;
        }

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_10 [i_2] [i_0] [i_0] = var_3;
            arr_11 [3] [i_2] = ((((max(7024458180570319390, var_2)) & (arr_2 [i_0]))));
        }
        var_15 = ((((-(min((arr_7 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))) ? (((arr_7 [i_0] [i_0]) ? ((var_5 * (arr_7 [i_0] [i_0]))) : 3153)) : (((-(var_5 && var_9)))));
    }
    var_16 = min(-15014, (-2147483647 - 1));
    #pragma endscop
}
