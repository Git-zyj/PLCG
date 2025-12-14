/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (((+((((((arr_2 [18] [i_1]) ? var_9 : var_6))) ? (((arr_3 [i_0] [i_1]) ? (arr_0 [i_0] [i_1]) : 18408)) : (((!(arr_2 [14] [i_1])))))))))));
                var_12 -= ((((((arr_3 [i_0 + 2] [i_0 + 1]) | var_2))) ? (((36169322 >> (40764 - 40763)))) : ((min((((arr_3 [i_1] [i_0]) ? 14121 : (arr_0 [i_0] [1]))), (1 ^ 0))))));
            }
        }
    }
    var_13 -= var_9;
    var_14 = ((1 ? var_6 : (var_2 <= var_7)));
    #pragma endscop
}
