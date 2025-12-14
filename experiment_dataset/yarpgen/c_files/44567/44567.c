/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_4 ? (2264074519880858166 / 1523379634) : var_9)) * var_7));
    var_15 = (var_6 | 9496810448453163666);
    var_16 -= max((var_0 % var_0), var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((((((-2264074519880858167 ? 74 : (arr_1 [i_1]))))) % ((~((74 >> (((arr_0 [i_1]) - 7339)))))))))));
                var_18 = (((((arr_4 [i_1]) ? (arr_2 [i_1]) : (((((arr_0 [i_0]) && 74)))))) % var_6));
                arr_6 [i_0] = var_9;
            }
        }
    }
    #pragma endscop
}
