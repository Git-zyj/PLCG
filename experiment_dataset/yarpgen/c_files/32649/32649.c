/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = (max(var_20, ((((var_1 || var_4) ? (min(((max((arr_5 [1] [i_0]), (arr_4 [12] [16] [2])))), (min(var_9, var_10)))) : (((((!(arr_5 [i_1] [10]))) ? var_0 : (((arr_1 [i_0 - 1]) ? (arr_2 [17] [i_0]) : (arr_5 [i_0] [11])))))))))));
                var_21 = (min(186, (!-32)));
                var_22 -= (arr_5 [i_0 - 1] [i_0 - 1]);
                var_23 *= var_6;
            }
        }
    }
    var_24 = ((((((var_9 | var_17) ? (((var_3 ? var_4 : var_15))) : var_3))) ? (((((var_19 ? var_1 : var_3))) ? (min(var_14, var_11)) : var_18)) : var_15));
    #pragma endscop
}
