/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_3 < ((((((var_11 ? var_1 : 1))) ? (1 / var_12) : var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, ((((arr_2 [i_0] [i_2]) > ((((arr_5 [i_0] [0] [i_1 + 1]) | (((arr_4 [i_0] [i_1] [i_0] [i_2]) ? (arr_3 [8] [i_2]) : (arr_5 [i_0] [i_1 - 1] [i_0])))))))))));
                    var_16 = (min(var_16, ((min((arr_3 [i_1 + 3] [i_1 + 3]), (((var_6 || (arr_0 [i_1 + 2])))))))));
                }
            }
        }
    }
    #pragma endscop
}
