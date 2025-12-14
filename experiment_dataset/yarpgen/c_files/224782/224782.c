/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 &= (((arr_5 [i_0] [i_0] [i_0]) ? (max((arr_1 [14]), ((0 ? 8064 : (arr_0 [i_1] [i_2]))))) : 29090));
                    var_12 = ((((((var_8 ? var_1 : (arr_6 [i_0] [i_2]))))) ? ((min((!-1065182072), (max((arr_1 [i_0]), var_9))))) : (((!(((var_3 * (arr_3 [6] [i_2])))))))));
                    arr_7 [i_2] = ((-((1770418366 ? var_5 : var_3))));
                }
            }
        }
    }
    var_13 = (21 | 24);
    #pragma endscop
}
