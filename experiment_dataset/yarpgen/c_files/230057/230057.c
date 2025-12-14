/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_9 ? var_5 : (min(((var_3 ? var_0 : var_7)), (((var_4 >> (var_7 - 4527))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (((((((arr_0 [i_0 - 1]) & (arr_0 [i_0 - 1]))) + 2147483647)) << (((arr_0 [i_0 - 1]) ^ (arr_0 [i_0 + 1])))));
                arr_4 [i_1] [i_1] [i_1] = (((var_4 <= var_8) - var_0));
                arr_5 [i_1] [i_1] = ((((!(var_9 && var_0))) ? var_2 : 1));
                var_12 = arr_0 [i_0];
            }
        }
    }
    var_13 = -var_5;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_14 = (max((min(((1 ? (arr_9 [i_2] [i_2]) : var_5)), ((var_7 ? var_5 : var_2)))), (arr_12 [i_3])));
                var_15 = ((((-((-(arr_8 [i_2])))))) ? (max((((arr_12 [i_3]) | (arr_10 [i_2] [i_3]))), ((((arr_11 [i_2]) != var_9))))) : (arr_10 [7] [9]));
                arr_13 [i_2] = (((var_7 + 1) ? ((1 ? 1 : (arr_6 [i_2]))) : (((!(arr_6 [i_2]))))));
            }
        }
    }
    #pragma endscop
}
