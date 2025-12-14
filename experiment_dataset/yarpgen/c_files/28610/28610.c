/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= ((((((var_0 - var_8) ? var_7 : var_6))) ? ((max(var_9, var_11))) : var_10));
    var_13 = (max(var_13, var_8));
    var_14 = (((((var_2 ? var_8 : ((-7246 ? -7729 : 124))))) || var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] &= arr_7 [i_0] [i_0] [i_0];
                    var_15 = ((((((arr_7 [i_2] [i_0] [i_0]) | (arr_2 [i_2] [i_1])))) ? ((((arr_7 [i_0] [i_0] [1]) && (arr_7 [i_0] [i_0] [i_0])))) : (((arr_7 [i_1] [i_0] [i_1]) ? (((arr_5 [i_1] [i_2]) ? (arr_4 [i_0] [i_1] [i_2]) : 32767)) : ((max(-43, (arr_6 [3] [5]))))))));
                }
            }
        }
    }
    #pragma endscop
}
