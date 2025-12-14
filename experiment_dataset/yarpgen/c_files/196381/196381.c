/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 |= (((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_8))) ? ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) : (((arr_1 [i_0]) / (arr_1 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = (((((134217728 > 65535) && var_10))) & ((3861425308 ? ((-3192 ? 25 : 16)) : (30504 | -103))));
                    var_14 ^= (((((var_6 ? ((var_7 << (var_1 - 54250))) : (((((arr_6 [i_0] [2] [1] [i_1]) < (arr_6 [18] [i_1] [i_1] [i_0])))))))) ? (!var_5) : (max((max((arr_5 [i_2] [i_1] [i_1] [i_0]), (arr_2 [i_1] [i_1]))), ((min((arr_0 [13] [i_1]), var_8)))))));
                }
            }
        }
    }
    var_15 = (min(var_15, (((-(((((var_2 ? 45145 : var_3))) ? ((min(var_6, 25))) : ((var_4 ? var_1 : var_3)))))))));
    #pragma endscop
}
