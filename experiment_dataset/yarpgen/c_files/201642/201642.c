/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_17 = ((-8199770808580100916 | (((((~(arr_2 [i_1 + 2]))) + 1)))));
                var_18 = ((((max(23778, 23778))) ^ (1 == 0)));
                var_19 = (max(var_19, (((((((217 <= (arr_2 [i_0 + 1]))))) / ((~(arr_2 [i_0 - 3]))))))));
            }
        }
    }
    var_20 = (max(1, (~var_13)));
    var_21 *= (36706 / -var_9);
    var_22 = (max(var_22, (((var_0 / (~-1852454812574547601))))));
    var_23 = (~1);
    #pragma endscop
}
