/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = var_3;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_4 [i_0] = max(((((((arr_3 [i_1] [1] [i_0]) ? (arr_3 [i_0] [15] [i_1]) : (arr_3 [i_0] [0] [i_0])))) ? (arr_1 [i_0] [i_1]) : (4294967295 < var_9))), (((~(arr_1 [i_0] [i_0])))));
            var_15 = (max(var_15, (((((((arr_0 [i_0] [i_1]) / (max(2691334200, 642448264))))) ? (max((((arr_1 [i_0] [4]) ? 1603633096 : var_9)), -1476605501)) : (min((arr_1 [i_1] [15]), ((530817411 ? var_0 : (arr_3 [i_0] [2] [i_1]))))))))));
            arr_5 [5] [i_1] = ((((((((arr_3 [i_0] [i_1] [i_0]) >> (((arr_1 [i_0] [15]) - 3299380473)))) % (((arr_0 [i_0] [i_1]) ? var_7 : (arr_1 [i_0] [i_0])))))) ? var_3 : (!331862590)));
            arr_6 [i_0] [10] [i_1] = ((((!(var_3 && -530817416))) && ((max((((!(arr_0 [i_0] [i_1])))), (max(2691334194, -530817421)))))));
        }
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_16 = min((arr_3 [i_2 - 2] [7] [i_2]), (((!(arr_9 [i_2 + 1])))));
            var_17 = max(((min((arr_7 [6] [i_2 + 1]), var_5))), (max(var_11, 3)));
        }
        var_18 = (max((min(var_4, 1874935349)), -1366077508));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        var_19 = ((!(3167199236 | 1603633087)));
        var_20 = ((var_4 ? var_4 : (arr_10 [i_3])));
    }
    #pragma endscop
}
