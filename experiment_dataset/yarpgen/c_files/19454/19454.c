/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = (((217 << (var_0 - 226))));
                    arr_6 [i_1] [i_2] [i_2] [i_0] = ((((var_6 ? (max((arr_1 [i_0]), (arr_5 [i_0] [i_1] [10]))) : (((min(-4, var_2)))))) ^ var_10));
                }
            }
        }
    }
    var_20 = -var_14;
    var_21 = var_11;
    var_22 = ((!((((max(var_9, var_17)))))));
    #pragma endscop
}
