/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(max((var_4 != 39175), ((var_18 ? var_13 : -22324))))));
    var_20 = 1;
    var_21 = (max((max((162 | var_8), var_6)), ((((max(var_4, var_8))) | 1))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_1] [1] [i_2] [2] = (min((arr_1 [i_0] [1]), (arr_9 [i_2] [i_1] [i_1] [15])));
                    arr_11 [6] [i_1] = (min(((-(arr_6 [i_0 + 1] [i_1 + 4] [i_2] [i_0 + 1]))), ((((max(2147483631, 15469006023304238815))) ? (max((arr_4 [i_1] [1]), 1)) : ((((arr_2 [i_2]) >= (arr_8 [2] [i_1 + 1] [i_1] [2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
