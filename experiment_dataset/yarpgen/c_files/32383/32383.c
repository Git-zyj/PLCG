/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_19 |= (((min(var_18, (arr_0 [9]))) < ((-(arr_2 [i_0] [i_0] [i_0 + 1])))));
                var_20 = (min(var_20, (((((!(((22 ? var_9 : 0))))) ? ((~(((arr_3 [i_0] [i_1]) ? (arr_1 [i_1] [i_0]) : (arr_1 [i_1 + 1] [i_0]))))) : var_18)))));
                var_21 = (min(var_21, ((max((arr_2 [i_0] [18] [i_0]), (((!(arr_3 [i_0 - 1] [i_1 + 1])))))))));
                var_22 ^= (((max(var_15, (((var_18 ? (arr_1 [i_1] [i_0]) : (arr_1 [1] [i_0 - 1])))))) + (((-((var_1 ? (arr_1 [i_0] [i_1]) : var_12)))))));
            }
        }
    }
    var_23 = (max(var_23, var_15));
    var_24 = ((var_3 ? ((((~var_15) ? (var_17 % var_2) : var_5))) : (((!var_5) & ((var_2 ? var_15 : var_10))))));
    var_25 = var_5;
    #pragma endscop
}
