/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(-var_17, ((var_14 ? ((1 ? 9223372036854775807 : 2147483584)) : var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (max((((!(!var_5)))), (((arr_5 [i_0] [i_1] [i_1]) / (arr_4 [i_0] [i_0] [i_0])))));
                arr_6 [i_0] [2] &= ((!(((32757 ? (arr_0 [22] [22]) : 227)))));
                arr_7 [i_0] [i_0] = ((((max(var_12, (min(var_7, var_17))))) ? ((((min(var_7, 0))))) : ((0 ? (arr_4 [i_0] [i_0] [i_1 - 1]) : var_17))));
                arr_8 [i_0] [i_0] = (max((((1 ? (arr_3 [i_0] [i_1 + 1]) : var_13))), (min((max(var_3, var_17)), (-4618420892106645343 == var_7)))));
            }
        }
    }
    #pragma endscop
}
