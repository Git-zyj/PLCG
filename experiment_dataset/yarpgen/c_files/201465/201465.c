/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((max((((arr_3 [i_0]) ? (arr_1 [i_0] [i_0]) : var_13)), (arr_1 [i_0] [i_0 + 1]))) <= (max((((!(arr_1 [i_0] [i_0])))), (252 % 14))));
                arr_6 [i_1] [i_0] [i_1] = (max(((var_15 ? ((((arr_2 [i_0]) == (arr_4 [i_0])))) : var_4)), (max(23431, 71))));
            }
        }
    }
    var_16 = (((((var_11 & (var_4 ^ var_8)))) ? var_14 : var_7));
    #pragma endscop
}
