/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (var_15 + var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = ((((((min(1, 1)) ? 1 : (((arr_1 [i_0] [i_0]) ? -54 : (arr_2 [i_0])))))) ? ((-(arr_7 [i_0 + 1]))) : (arr_5 [i_0 + 1] [i_0 + 1] [i_1])));
                var_22 = (((arr_7 [i_0 + 1]) / var_4));
                var_23 *= (arr_7 [i_0 + 1]);
                var_24 = (((((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]) + (arr_5 [i_0 + 1] [i_0 + 1] [i_0])))) ? ((1 - ((max(1, var_5))))) : (((arr_6 [i_0] [i_1] [i_1]) - -1)));
            }
        }
    }
    #pragma endscop
}
