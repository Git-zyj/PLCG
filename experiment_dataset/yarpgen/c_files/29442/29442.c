/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((var_0 ? (max(var_10, ((var_7 ? var_7 : var_1)))) : ((((var_4 > var_7) ? ((-2041230424 ? 1 : var_3)) : (-48 - var_6))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (min((min(((var_6 ? 3801674926 : (arr_6 [i_0] [i_0] [i_0]))), (arr_3 [i_2 - 1] [i_1] [i_2]))), (((~(((arr_5 [i_0] [19] [1] [20]) ? (arr_1 [i_2] [i_0]) : var_6)))))));
                    var_12 = ((-(((arr_0 [i_2 - 1] [i_2 - 1]) ? 3801674926 : (arr_0 [i_2 - 1] [i_2 - 1])))));
                }
            }
        }
        var_13 -= 1;
    }
    #pragma endscop
}
