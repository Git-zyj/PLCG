/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_6 ? var_7 : ((var_10 ? ((var_6 ? var_12 : 8837)) : (((max(var_4, var_14))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [3] [3] [i_1] [i_2] = ((((((arr_5 [i_2] [i_0 + 3] [i_0] [12]) ? (arr_5 [i_0 + 3] [i_0 + 3] [i_0 + 1] [i_0]) : (arr_5 [i_0 + 2] [i_0 + 1] [i_0] [i_0])))) ? ((((arr_5 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2]) ? (arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 1]) : (arr_5 [i_0 + 3] [i_0 + 3] [2] [1])))) : var_7));
                    arr_9 [i_2] [i_0 + 3] [i_0 + 3] |= (((arr_1 [i_0] [i_0]) ? ((((var_14 < (arr_5 [i_0] [i_0] [i_0] [i_0 - 1]))) ? ((2686733793 ? 65535 : (arr_4 [i_0] [i_0] [i_0]))) : (arr_4 [i_0 + 2] [8] [i_2]))) : var_2));
                    var_16 += (((((((!(arr_4 [i_0] [8] [i_2]))) ? -3333730900196017407 : var_5))) ? (((max(var_9, (arr_1 [i_0 + 2] [12]))))) : 2628710992));
                }
            }
        }
    }
    #pragma endscop
}
