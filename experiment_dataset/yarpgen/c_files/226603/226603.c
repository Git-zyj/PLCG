/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [5] = (((((~((var_9 ? var_3 : 4294967295))))) ? (max(((-1 ? (arr_5 [i_0] [i_1] [i_0] [i_2]) : (arr_4 [i_1 + 1]))), (arr_0 [i_0]))) : (arr_7 [i_0] [i_0] [i_1] [i_2])));
                    arr_9 [i_0] [i_0] [i_0] = -8918512441942560883;
                    arr_10 [i_0] [3] [i_2] = (max(((((arr_3 [i_0] [i_1 - 2]) << (((arr_3 [i_0] [i_1 - 1]) - 27568))))), (((arr_1 [i_1 - 2]) ^ (arr_1 [i_1 - 1])))));
                    var_12 = (min(var_5, ((var_0 & (((arr_2 [i_2]) ? var_3 : -8090206503230166836))))));
                }
            }
        }
    }
    var_13 = ((((min((var_9 / var_1), (var_7 - var_5)))) ? (((((var_8 ? 15045780410921789904 : 524287))) ? var_1 : ((var_11 ? var_4 : var_8)))) : var_3));
    #pragma endscop
}
