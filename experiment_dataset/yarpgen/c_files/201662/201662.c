/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((0 - ((var_10 ? 5190 : var_8)))), ((((((var_6 ? var_6 : var_2))) < ((var_6 ? 2283020130 : var_13)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_0] |= (((-5182 ? (((arr_1 [i_0]) + (arr_4 [i_0] [10]))) : (~-5182))));
                    arr_7 [i_0] [i_0] [i_1] = 5880589875377677770;
                }
            }
        }
    }
    var_18 = var_9;
    #pragma endscop
}
