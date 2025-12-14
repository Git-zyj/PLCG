/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!var_13) ? var_9 : (((((var_2 ? var_15 : var_0))) ? var_14 : (min(992511851, var_15)))));
    var_19 = ((2147483626 ? (1 < -992511849) : 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (max((arr_0 [i_0] [i_1]), (arr_2 [i_0] [i_1] [i_1])));
                var_21 = (min(var_21, ((((((max(1, 660773811)) >> (((((arr_2 [i_0] [i_0] [6]) ? (arr_0 [i_0] [i_1]) : 7636256906015771651)) + 7928))))) ? var_8 : (((max(35861, 1))))))));
                var_22 = ((-(((((((arr_1 [i_0]) ^ -1498163124))) < (min(var_11, var_7)))))));
            }
        }
    }
    var_23 = ((((max(-10182, ((var_15 ? var_17 : 7636256906015771653))))) ? (((var_2 ? var_4 : var_7))) : -92));
    #pragma endscop
}
