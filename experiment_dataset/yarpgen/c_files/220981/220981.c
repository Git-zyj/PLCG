/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~((((min(var_2, var_2))) ? (var_6 % var_8) : var_7)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = arr_2 [i_0];
                var_14 = arr_0 [i_1];
                arr_5 [i_1] = ((arr_1 [i_0]) ? (min((arr_1 [i_0]), 1623320478990612729)) : -5166658977096812109);
                var_15 = max(((var_2 | ((18347345288334552986 >> (14566641162213565168 - 14566641162213565157))))), (min(var_1, var_1)));
            }
        }
    }
    var_16 = (6924881204691105190 ? 18446744073709551615 : 0);
    #pragma endscop
}
