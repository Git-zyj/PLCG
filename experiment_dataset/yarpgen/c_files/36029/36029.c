/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((-(((var_14 < var_4) ? 3848029054317238202 : var_15))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_2 [17] [12] [i_0]);
                arr_6 [i_0] = var_10;
                var_20 = (min(((9790 ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0]))), ((min((~var_14), var_6)))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = ((-(((arr_9 [i_2] [i_2]) ? -var_2 : (arr_0 [i_2 - 1])))));
        arr_12 [i_2] = var_12;
        arr_13 [5] = (((((~(((arr_9 [i_2] [i_2]) & var_11))))) ? ((~(~1))) : ((min((arr_9 [i_2] [i_2 + 1]), (arr_9 [i_2] [i_2 + 1]))))));
    }
    #pragma endscop
}
