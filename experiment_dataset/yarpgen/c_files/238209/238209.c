/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((max(((8106507962321925679 ? var_1 : (-2147483647 - 1))), ((max(-4674, 7))))), ((((1023 >> var_0) == var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max(((40588 == (arr_3 [i_0] [i_0]))), ((((var_3 ? (arr_2 [i_0] [i_0]) : 9794)) > (arr_2 [i_0] [i_0])))));
                var_14 = 24;
                arr_6 [11] [4] [i_1] = var_10;
                arr_7 [i_0] [i_0] [i_0] = var_2;
            }
        }
    }
    #pragma endscop
}
