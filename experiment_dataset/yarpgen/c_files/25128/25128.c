/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 5754215014136948485;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 = (max((max((arr_5 [1] [3] [11] [8]), (((arr_0 [19]) ? var_4 : (arr_0 [13]))))), (((max(var_14, (arr_1 [0] [18])))))));
                    arr_8 [10] [16] [6] = (max(((((arr_7 [1] [11] [1] [7]) ? (!var_4) : (arr_6 [12] [16] [i_2 - 3])))), (max((arr_2 [0]), (var_17 + var_9)))));
                    var_22 = (((max((arr_0 [i_2 - 2]), (arr_7 [16] [8] [15] [i_2 - 1]))) > (arr_0 [1])));
                    arr_9 [16] [6] = (((max((((arr_4 [4]) != 0)), ((1 == (arr_2 [1]))))) ? (arr_3 [5]) : (((((var_2 ? var_19 : -1675451145))) ? (1793382190 == var_18) : var_15))));
                }
            }
        }
    }
    var_23 = var_3;
    var_24 = (((var_10 && ((max(-26841, -1675451145))))));
    var_25 = (max(var_25, var_15));
    #pragma endscop
}
