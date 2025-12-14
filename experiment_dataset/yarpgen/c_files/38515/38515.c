/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    var_19 = var_6;
    var_20 = (((((min(var_4, var_13)))) + (min(var_13, (max(var_16, var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = arr_0 [i_0];
                var_21 = (min(((min(var_4, (var_9 | var_13)))), (arr_0 [i_0])));
                var_22 = (i_0 % 2 == zero) ? ((((min((min((arr_4 [i_0 - 3] [i_0 - 3]), var_12)), ((((arr_3 [2] [i_0] [2]) || var_3))))) >> (((arr_0 [i_0]) - 5757493822411919897))))) : ((((min((min((arr_4 [i_0 - 3] [i_0 - 3]), var_12)), ((((arr_3 [2] [i_0] [2]) || var_3))))) >> (((((arr_0 [i_0]) - 5757493822411919897)) + 1615584335500471921)))));
                var_23 ^= var_17;
            }
        }
    }
    #pragma endscop
}
