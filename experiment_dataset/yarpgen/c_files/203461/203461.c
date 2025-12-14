/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-(min(((max(var_15, var_1))), (var_12 & var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_18 *= (((~1) ? ((((min((arr_3 [i_1] [i_0] [13]), var_12))) | (((arr_3 [i_0] [i_1 + 1] [5]) | 1)))) : (max(((max((arr_3 [i_1] [i_1] [i_0]), var_1))), ((~(arr_4 [12])))))));
                arr_5 [i_0] [i_1] = ((((((arr_3 [0] [i_1] [i_1 + 1]) / (arr_1 [i_0] [i_1])))) ? (((var_14 ? var_7 : var_3))) : (min((arr_1 [i_0] [i_1]), var_2))));
                var_19 -= var_11;
            }
        }
    }
    var_20 = ((var_14 > ((-(max(var_13, var_0))))));
    #pragma endscop
}
