/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_12;
    var_20 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (((~2921179962) ? (min((!1369008702), (arr_4 [i_1] [i_0] [i_0]))) : (((arr_2 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : ((max((arr_2 [i_0] [i_0]), (arr_3 [i_0] [i_0]))))))));
                var_22 = (min(var_22, (((!(((((arr_3 [i_0] [1]) ? (arr_4 [i_0] [i_0] [2]) : (arr_4 [i_1] [i_1] [i_0]))))))))));
            }
        }
    }
    var_23 = ((var_10 & ((((0 && var_7) <= -1810955220)))));
    var_24 = ((((((((var_14 ? 12327757761819046090 : var_3))) ? -var_4 : var_3))) ? (((((1678935402 ? var_3 : 274877906943))) ? (var_13 ^ 5) : (min(var_11, var_2)))) : (((((274877906943 ? 3647754624 : -1788024134)) << (((min(-2790531421502389490, var_13)) + 2790531421502389511)))))));
    #pragma endscop
}
