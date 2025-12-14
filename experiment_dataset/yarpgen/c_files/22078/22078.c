/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-var_1 ? (((((3525 << (var_9 + 112))) / ((var_8 ? var_3 : 124))))) : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_11 = ((((-(min((arr_4 [i_0] [i_1]), 0)))) - (((min(-3517, (min(var_8, 3431))))))));
                var_12 = ((((min(12909, var_8))) ? (((arr_0 [i_1 - 1]) ? 123 : (arr_0 [i_1 + 1]))) : (arr_0 [i_1 - 2])));
                var_13 += (((((((((arr_2 [i_1] [i_1]) ? (-2147483647 - 1) : -3538))) ? ((min((-2147483647 - 1), var_8))) : var_6))) ? (((var_7 & 4036775877845558236) ? var_1 : var_4)) : (((((var_2 ? var_4 : var_5))) ? ((min(-116, var_8))) : (var_0 * 3539)))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2 - 1] = (((var_3 | var_1) ? var_8 : (arr_1 [i_1 - 3])));
                    var_14 = (((arr_1 [i_1 - 1]) ? 10925865576283009208 : (arr_4 [i_1 - 2] [i_1])));
                    var_15 = (((arr_5 [i_0] [i_1 - 2] [i_1] [i_2 + 1]) / (arr_2 [i_0] [i_1 + 1])));
                }

                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_16 |= (((((arr_9 [i_1 + 1] [i_1 - 3] [i_1 - 3] [i_1]) ? var_1 : (arr_2 [i_1 - 2] [i_1 - 3]))) - ((min((arr_9 [i_1 - 1] [i_1 - 3] [i_1 + 1] [i_1 - 3]), var_3)))));
                    arr_10 [i_1] [i_1] = 3551;
                    var_17 = (((~(arr_8 [i_0] [i_1 - 2] [i_1] [i_3]))));
                    arr_11 [i_0] [i_1 - 1] |= ((((min(((var_1 ? var_5 : 213729868)), (max(var_2, (arr_9 [i_0] [i_1 - 3] [i_3] [i_0])))))) ? 193 : ((-(((!(arr_3 [i_1]))))))));
                }
            }
        }
    }
    #pragma endscop
}
