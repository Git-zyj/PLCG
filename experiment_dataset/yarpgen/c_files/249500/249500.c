/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!(((((max(var_6, var_7))) ? (min(var_4, 25)) : var_4))));
    var_12 |= ((((min(17664, var_3)) & (!var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = (+(((arr_0 [i_0] [i_1 + 2]) << (((arr_3 [i_0] [i_1 + 1] [i_1]) - 13578171740729322612)))));
                var_14 = (max(((min(var_1, (arr_2 [i_0])))), (max(((var_5 ? (arr_3 [i_0] [1] [i_1]) : 24444)), (((var_7 ? (arr_2 [i_0]) : var_4)))))));
                var_15 = (min(var_15, var_7));
                var_16 = ((~((((max(var_8, 423107883))) ? (min(-2147483646, 11)) : (arr_1 [i_1 + 2])))));
                arr_4 [i_0] [i_0] [i_0] = 7726630624619374768;
            }
        }
    }
    var_17 = var_7;
    var_18 = var_0;
    #pragma endscop
}
