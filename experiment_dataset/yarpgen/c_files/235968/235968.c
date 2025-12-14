/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (!var_6)));
    var_21 = var_10;
    var_22 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [3] [i_1] = (((!((((arr_3 [i_0]) / var_13))))) || (((var_10 ? ((0 ? (-127 - 1) : 124)) : (arr_3 [0])))));
                var_23 = (max(var_23, (((((var_17 ? ((((!(arr_2 [i_0]))))) : ((58714 ? 58714 : var_0)))) - var_7)))));
                var_24 = (((((var_18 ? var_11 : var_14))) ? ((((((arr_2 [i_1]) ? var_6 : (arr_4 [i_1]))) <= ((((arr_3 [i_0]) ? var_19 : (arr_4 [i_1]))))))) : (arr_1 [i_0])));
            }
        }
    }
    #pragma endscop
}
