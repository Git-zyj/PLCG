/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_6 ? (var_4 && var_5) : (var_8 && var_5)))) ? ((((((var_10 ? var_2 : var_3))) ? var_4 : ((var_11 ? var_10 : var_7))))) : (((((var_2 ? var_9 : var_0))) ? var_3 : var_8))));
    var_15 = (((var_4 || (var_5 || var_10))) && ((((((var_11 ? var_10 : var_8))) ? (var_4 && var_3) : (!var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = ((var_2 ? (((arr_6 [i_2] [i_2 + 1] [i_2] [i_2 + 1]) ? (((arr_6 [1] [i_1] [i_1] [i_1]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))) : var_12)) : (((arr_0 [i_2 - 1] [i_2 - 1]) ? (arr_0 [i_2 - 1] [i_2 + 1]) : (arr_0 [i_2 - 1] [i_2 - 1])))));
                    arr_7 [0] = ((((min((arr_4 [i_2 + 1]), (arr_4 [i_0])))) ? var_13 : (((arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? ((1828124683 ? 536346624 : 1)) : (arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1])))));
                    arr_8 [i_0] [i_0] [i_0] [3] = var_0;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 13;i_5 += 1)
            {
                {
                    var_17 = (max(var_17, ((((((~(arr_14 [i_4 - 2] [i_4] [i_5])))) ? ((((-var_10 <= (((arr_9 [i_3] [7]) ? var_11 : (arr_2 [i_3 + 2] [1]))))))) : (((var_13 + var_1) & var_9)))))));
                    var_18 = (max(var_18, ((max((arr_3 [i_4 + 2] [i_4]), (((arr_16 [i_3] [i_3 + 1] [i_5]) ^ (arr_3 [i_5] [i_5]))))))));
                    arr_17 [i_3 - 1] [i_3] [i_3] [i_3 + 1] = ((((min((arr_14 [i_5 - 3] [i_5 - 4] [i_3]), var_10))) ? (arr_16 [9] [i_4] [i_3]) : (((arr_6 [17] [i_3 + 2] [i_3 - 1] [i_3 - 1]) ? (arr_5 [i_3] [i_3 + 2] [i_3] [i_3 - 1]) : (arr_6 [i_3] [i_3 + 2] [i_3] [i_3 - 1])))));
                    arr_18 [i_3] [i_3] [i_3] = (((arr_13 [i_5] [i_5] [i_5 - 3]) ? (((arr_13 [9] [i_5] [i_5 - 2]) ? (arr_13 [i_5] [i_5 - 4] [i_5 - 3]) : (arr_13 [i_5] [i_5 - 3] [i_5 - 2]))) : (((arr_13 [i_5] [i_5] [i_5 - 3]) ? (arr_13 [i_5] [i_5 - 2] [i_5 - 3]) : (arr_13 [i_5] [i_5 - 2] [i_5 - 4])))));
                }
            }
        }
    }
    #pragma endscop
}
