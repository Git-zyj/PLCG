/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((-518722010199291682 || var_0), var_4));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = (((((-((((arr_3 [i_1] [i_0 - 2] [i_0 + 1]) == 21044)))))) ? ((((arr_1 [i_0]) ? -1 : 160))) : (min(((~(arr_3 [i_0 - 2] [i_1] [i_1]))), -50))));
                var_13 = var_3;
                var_14 = (~((((min(var_7, (arr_5 [i_0 - 1])))) ? (arr_3 [i_0 - 2] [6] [6]) : (arr_3 [i_1 + 4] [i_0 - 1] [i_1]))));
                var_15 = (min(var_15, 160));
                arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((!((((((-(arr_2 [i_0])))) ? -var_7 : -5854330714231015632)))));
            }
        }
    }
    var_16 = (((((var_6 ? ((min(255, var_3))) : (min((-9223372036854775807 - 1), 0))))) ? ((((!(-9223372036854775807 - 1))))) : (max(var_5, (min(0, 9223372036854775807))))));
    #pragma endscop
}
