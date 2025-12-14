/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_5;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = ((((((max((arr_1 [i_0] [i_2]), 1))) & (max((arr_3 [i_0]), 1))))) ? ((((((arr_6 [i_0] [i_1] [4]) ? var_5 : 1)) != (var_3 * 1)))) : 1525815093);
                    var_12 = (arr_3 [i_0]);
                    arr_7 [i_0] [i_1] [i_0] = (min(1, 1));
                    arr_8 [1] [i_1] [18] &= (((max(1, 1525815093)) < (((((var_2 ? var_0 : (arr_3 [1])))) ? ((var_6 ? (arr_1 [1] [i_1]) : -175722832)) : -var_4))));
                    var_13 -= ((max((1 < 93558899), -2147483641)) - var_8);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            {
                arr_14 [i_3] [i_4] = (((max((min(var_9, 2147483640)), (arr_13 [i_3 - 1] [i_4 - 1] [i_3 - 1]))) * var_3));
                var_14 = ((1 & -1480487850) ? var_0 : ((1 ? (var_3 != var_7) : 171826619)));
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_15 = ((-((((max(var_4, var_4))) ? ((var_5 ? var_5 : -804149575)) : (min((arr_6 [20] [0] [i_5]), 2147483647))))));
        arr_19 [i_5] = (arr_16 [i_5]);
    }
    #pragma endscop
}
