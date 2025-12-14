/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                arr_5 [i_1] = var_8;
                var_19 = ((((((((arr_4 [i_1]) ? (arr_3 [i_0]) : (arr_1 [i_0]))) * (!46431)))) ? ((((((!(arr_0 [i_0] [i_1 - 2])))) & (((var_15 < (arr_4 [i_0]))))))) : (((arr_1 [0]) ? (arr_1 [i_1 + 3]) : (arr_4 [i_1 + 4])))));
            }
        }
    }
    var_20 = (min((max(var_12, var_11)), var_10));
    #pragma endscop
}
