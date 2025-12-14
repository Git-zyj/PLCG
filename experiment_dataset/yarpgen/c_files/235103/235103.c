/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (((!(((arr_2 [i_0] [i_0]) == (arr_2 [i_0] [i_0]))))) ? (((((arr_0 [i_0] [i_0]) < (arr_0 [i_0] [i_0]))) ? ((min(var_3, var_14))) : (min((-32767 - 1), var_10)))) : (min((((var_7 < (arr_0 [i_0] [i_0])))), (((arr_0 [i_0] [i_0]) / var_2)))));
        var_21 = (((((var_13 | ((1 ? var_18 : (-2147483647 - 1)))))) ? (((((var_10 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? var_8 : (arr_0 [i_0] [i_0]))) : (var_13 < var_7)));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {
                var_22 = (-((~((var_0 ? var_13 : var_1)))));
                var_23 = (max(var_4, (((((-(-127 - 1)))) * (max(var_8, var_13))))));
                var_24 = (max(var_24, (3500061577 != 3500061580)));
                arr_8 [i_1] [i_2] [i_1] = ((var_15 ? ((((arr_5 [i_1]) >> var_3))) : (((arr_5 [i_1]) ? (((1 ? 124702069 : (arr_7 [i_1] [i_2] [i_2])))) : var_9))));
            }
        }
    }
    #pragma endscop
}
