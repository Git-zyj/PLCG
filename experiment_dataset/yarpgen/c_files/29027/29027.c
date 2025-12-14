/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 ^= ((-(arr_2 [i_0])));
        arr_3 [i_0] [i_0] = ((~((min((arr_1 [i_0] [i_0]), 1)))));
        arr_4 [7] |= (min(((((arr_0 [i_0]) > (arr_1 [i_0] [i_0])))), (((((var_6 << (var_5 - 4144)))) ? ((((arr_0 [i_0]) >= -2366609265805093326))) : (arr_0 [i_0])))));
        var_13 = var_4;
        arr_5 [i_0] [i_0] |= ((((((arr_2 [i_0]) ? (((arr_0 [i_0]) ? var_3 : (arr_0 [i_0]))) : (arr_0 [i_0])))) ? (arr_2 [i_0]) : (min(((var_6 ? 0 : var_3)), ((13 ? 1 : -16))))));
    }
    var_14 *= ((((28542 ? var_1 : var_0)) ^ var_1));
    var_15 = (min(var_15, (~var_0)));
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_16 = (max(var_16, ((((~115) - ((~(3940843905 / 16384))))))));
                var_17 = (max(var_17, ((max((((arr_6 [i_1 - 2] [i_1 + 1]) ? (arr_0 [i_1 - 1]) : (arr_1 [i_1 + 1] [i_1 - 2]))), 354123390)))));
            }
        }
    }
    var_18 = var_9;
    #pragma endscop
}
