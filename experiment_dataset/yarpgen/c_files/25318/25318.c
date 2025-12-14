/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 = (arr_2 [i_0]);
                    var_12 = (max(var_12, ((max((((arr_6 [8] [0] [2] [i_2 + 1]) / (arr_6 [2] [4] [i_2] [i_2 + 1]))), (!var_1))))));
                    arr_8 [12] [1] [i_1] = (((2147483647 ? (arr_1 [4] [4]) : (arr_1 [i_0] [i_0]))));
                    arr_9 [12] [i_0] |= (-2147483647 - 1);
                    arr_10 [i_0] [i_1] |= (((max(var_10, (arr_1 [i_2] [i_2 - 1]))) | (((arr_1 [5] [i_2 + 1]) & (arr_1 [8] [i_2 - 1])))));
                }
            }
        }
    }
    var_13 = (min(var_13, var_1));
    var_14 -= -var_3;
    var_15 -= ((var_2 && (((var_0 ? var_8 : (min(2147483634, var_2)))))));
    #pragma endscop
}
