/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [18] [18] = var_3;
                arr_7 [i_0] = ((((arr_5 [i_1 + 1] [i_1 + 2]) ^ (arr_5 [i_1 - 1] [i_1 - 1]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                arr_14 [8] = ((+(min((arr_1 [i_2] [i_2 - 1]), ((min((arr_11 [i_2] [i_2 - 1] [i_2]), var_13)))))));
                arr_15 [i_2] [i_3] = (((arr_10 [1]) ? 7719559616719089638 : 2147483632));
            }
        }
    }
    var_14 = (2147483632 ? (max((-2834570531185436137 * 9244205040545915502), (var_7 * var_6))) : ((((var_10 ? var_0 : var_2)))));
    #pragma endscop
}
