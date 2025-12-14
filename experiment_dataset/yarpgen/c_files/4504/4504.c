/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (((((var_0 ? ((max(var_2, var_3))) : var_10))) ? (((min(var_3, var_5)))) : var_11));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (arr_1 [i_0 + 1]);
                arr_5 [i_0] = ((((((arr_4 [i_0] [i_0]) >> var_3))) ? ((max((((arr_3 [i_0] [17]) ? (arr_3 [i_1] [18]) : 1)), (arr_4 [i_0 + 2] [i_0 + 1])))) : ((236 + (arr_1 [i_0 + 2])))));
                var_17 = ((((((-(arr_4 [i_1] [i_0]))) ? 1 : 96))));
                arr_6 [i_0] = (arr_2 [i_0]);
                arr_7 [i_0] [i_1] [i_0] = (((((-(arr_4 [i_0 + 2] [i_0 - 1])))) ? ((min(0, 117))) : (arr_4 [i_0 - 1] [i_0 + 1])));
            }
        }
    }
    var_18 = var_0;
    #pragma endscop
}
