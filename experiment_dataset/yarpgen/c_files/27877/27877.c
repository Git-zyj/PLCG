/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 += (min((arr_0 [i_0] [i_1]), (min((arr_2 [i_1] [i_0]), (arr_5 [i_1] [i_1] [i_1])))));
                var_20 = max((max(((~(arr_5 [i_0] [i_0] [i_0]))), (arr_3 [i_0] [i_0]))), (((((20 ? var_3 : var_14))) ? (arr_6 [i_0] [i_1]) : (arr_5 [i_0] [i_1] [14]))));
            }
        }
    }
    var_21 = var_15;
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_16 [i_2 - 1] [i_2] [i_4] = min(((((arr_15 [i_3 - 1] [i_2 + 1]) != 62997))), (((arr_10 [i_2 + 1] [i_3 + 1]) ? (arr_10 [i_2 - 1] [i_3 + 1]) : (arr_15 [i_3 + 1] [i_2 + 1]))));
                    var_22 = (((arr_7 [i_2]) ? (min((arr_10 [i_2 + 1] [9]), ((var_10 ? 20229 : -20229)))) : (((((-20213 ? (arr_4 [i_2] [i_3 + 1] [i_4]) : (arr_13 [i_2] [i_2] [i_2])))) ? (arr_14 [1] [i_3 - 1] [i_3 + 1] [i_4]) : (arr_8 [i_2])))));
                }
            }
        }
    }
    var_23 -= (!var_3);
    #pragma endscop
}
