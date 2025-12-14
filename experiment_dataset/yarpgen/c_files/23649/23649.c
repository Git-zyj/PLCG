/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((0 ? var_10 : var_9));
    var_18 = var_10;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((11123964188056010051 || ((((((arr_0 [1] [i_0]) && (arr_1 [i_0] [i_0]))) ? (((arr_0 [i_0] [i_0]) ? var_13 : (arr_1 [i_0] [i_0]))) : (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))));
        var_19 = (max(var_19, var_7));
        var_20 = (min(var_20, (((!(((0 ? 3302841568 : 0))))))));
        arr_3 [i_0] [i_0] = ((((min(var_4, (arr_1 [i_0] [i_0])))) ? (max((arr_1 [i_0] [i_0]), ((var_8 ? var_3 : var_13)))) : 1));
        var_21 = (((((max(var_14, var_14)))) % ((var_3 ? (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : ((1 ? var_12 : (arr_0 [i_0] [i_0])))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            {
                var_22 = (max(var_22, (arr_0 [11] [i_1])));
                var_23 ^= (arr_8 [i_1] [i_2] [i_2]);
                var_24 = (max(var_24, var_14));
                var_25 = (1 * ((+((1964604771 ? (arr_6 [i_1]) : 1)))));
            }
        }
    }
    #pragma endscop
}
