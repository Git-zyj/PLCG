/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_4);
    var_20 = (min(var_20, var_12));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((var_15 - (((133 < (arr_0 [i_0 + 1])))))));
                arr_5 [i_1] = ((((min(14000, var_18))) ? (arr_2 [i_0 - 1]) : (min(396232435, 396232435))));
                arr_6 [i_0] [i_0] = (((((var_9 ? (max(var_7, var_16)) : ((((arr_2 [i_0]) / 2)))))) ? 79 : (arr_2 [i_0 + 1])));
                arr_7 [i_0] [i_0] [9] &= (arr_1 [i_1]);
                var_21 = (min(var_21, (((189 ? (((((arr_0 [i_0 + 1]) >= -396232433)))) : (max(7672, 5794141008141307557)))))));
            }
        }
    }
    var_22 = ((max(2147483647, var_1)));
    #pragma endscop
}
