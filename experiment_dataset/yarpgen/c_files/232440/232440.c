/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = (min(((-10079 ? (arr_2 [i_0 + 1] [i_0 - 1]) : var_11)), (((arr_4 [i_0 - 2] [i_0 - 3]) ? -var_9 : (((arr_1 [i_0] [i_1]) - var_8))))));
                    var_20 = (min(1663275478, (arr_6 [i_1])));
                    arr_7 [i_0] = (var_2 ? ((((((arr_4 [i_0] [i_2]) ? var_9 : (arr_3 [i_2] [i_1] [i_0]))) - (arr_5 [i_0] [i_0])))) : (((((~(arr_2 [i_1] [i_1])))) ? (arr_4 [i_2] [i_0 - 1]) : 18446744073709551599)));
                }
            }
        }
    }
    var_21 = ((var_8 == (min(-6827, var_6))));
    #pragma endscop
}
