/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min(((var_10 ? 118 : var_5)), 1)) / (((var_14 ^ 1) ? (max(var_8, 5725185431938273936)) : (((var_13 ? var_15 : var_17)))))));
    var_20 = (min(((1 ? (max(1, var_5)) : var_8)), (((((var_4 ? 40 : var_10)) ^ var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = (((((var_10 ? var_10 : (((arr_2 [i_0]) ^ (arr_2 [i_2])))))) ? (((((var_17 ? 83 : (arr_2 [i_0])))) ? (1 / var_5) : 79518260167032859)) : ((((((arr_3 [i_0] [i_1] [i_2]) - (arr_7 [i_1] [i_1])))) ? 147 : (max((arr_6 [i_1] [i_1]), var_3))))));
                    var_21 = (arr_7 [i_1] [i_1]);
                    var_22 |= (max((((((var_14 ? (arr_8 [i_0] [i_1] [i_2] [i_1]) : (arr_3 [i_0] [i_1] [i_2])))) ? ((((arr_8 [i_0] [i_0] [i_0] [i_0]) == 191))) : (arr_0 [i_0] [i_2]))), -28053));
                    arr_10 [i_1] [i_1] [i_2] = ((arr_1 [i_0]) ? (((max((arr_5 [i_1] [i_1]), (arr_1 [i_0]))))) : (((arr_1 [i_2]) ? (((arr_5 [i_1] [i_1]) ? var_11 : 1)) : (((((arr_6 [i_0] [i_1]) + 2147483647)) << (((((arr_8 [i_0] [i_1] [i_2] [i_2]) + 36)) - 16)))))));
                }
            }
        }
    }
    var_23 = 127;
    #pragma endscop
}
