/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_5));
    var_13 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_14 = (min((max((arr_6 [9] [i_2]), (arr_2 [i_0 - 1]))), (arr_2 [i_2])));
                    arr_7 [i_2] [i_2] [i_2] [i_2 - 1] = (!(((var_5 ? (((min((arr_6 [5] [i_2]), (arr_2 [i_0]))))) : (((arr_1 [0]) * var_10))))));
                }
            }
        }
    }
    #pragma endscop
}
