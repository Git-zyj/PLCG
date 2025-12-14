/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max((var_4 ^ var_1), (max(var_12, var_3))))) ? var_12 : var_10));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((+(max((arr_0 [i_1 - 2] [i_0 + 3]), (arr_0 [i_1 - 1] [i_0 + 1])))));
                var_14 -= ((-(((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_9 [i_2] = (((arr_8 [i_2]) ? (((arr_6 [i_2]) ? var_5 : var_3)) : (((!(arr_7 [i_2] [i_2]))))));
        var_15 = (((((arr_6 [3]) % (arr_8 [23]))) > (arr_8 [i_2])));
        arr_10 [9] = ((arr_7 [22] [0]) ? (arr_6 [i_2]) : -var_1);
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        var_16 *= (((((18446744073709551615 && 8142) > ((3558109143 >> (4317 - 4301))))) ? (((((((arr_6 [10]) ? (arr_11 [1]) : (arr_6 [i_3]))) <= (((((arr_6 [i_3]) && var_5)))))))) : var_6));
        arr_14 [i_3] |= (arr_12 [i_3 + 1]);
        var_17 = (max(var_17, ((((((var_12 ? (arr_8 [8]) : (arr_13 [i_3] [i_3])))) ? (arr_11 [13]) : (((arr_13 [i_3 - 1] [i_3]) ? (((arr_6 [i_3]) ? (arr_13 [i_3] [i_3]) : (arr_13 [i_3] [i_3 - 1]))) : (arr_12 [i_3 - 1]))))))));
    }
    #pragma endscop
}
