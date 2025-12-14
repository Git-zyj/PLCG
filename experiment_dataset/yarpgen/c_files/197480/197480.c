/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_2 ? var_8 : (var_9 != var_7)))) ? ((max((max(var_7, var_2)), var_6))) : var_1));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0 - 3] = max(2092469623533169583, (((((arr_4 [15] [i_1 + 1] [9]) / (arr_0 [i_0 - 2]))) & (max((arr_2 [12] [18] [i_0 - 3]), var_0)))));
                arr_6 [3] = ((((min(((var_9 / (arr_1 [15] [15]))), (arr_3 [i_0])))) ? ((((!(arr_0 [i_0]))))) : (((arr_2 [i_0] [i_0 + 1] [7]) ? (arr_4 [i_0 - 3] [i_1 + 1] [i_1 + 1]) : (!var_1)))));
                arr_7 [i_0] [i_1] = (arr_0 [i_0]);
            }
        }
    }
    var_11 = var_8;
    #pragma endscop
}
