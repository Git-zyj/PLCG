/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (((!(136 - 1073741824))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_2] [1] [i_2] = ((~(arr_5 [i_2] [i_1] [i_0 + 1])));
                    var_21 |= -26;
                    arr_9 [i_2] [i_1] [i_1] [0] &= (((((min(23, var_3)) << (((!(arr_6 [i_0] [i_1] [i_1] [18]))))))) < ((-(arr_1 [i_0 + 1]))));
                    var_22 = (((((arr_0 [i_0 - 2]) ? (max((arr_6 [i_0] [i_0] [i_1] [1]), (arr_3 [i_1]))) : (((31 ? (arr_3 [i_1]) : 2111206341))))) - (((((!(arr_3 [i_1]))) ? (max(var_14, (arr_2 [1] [i_2]))) : 1109152879)))));
                }
            }
        }
    }
    #pragma endscop
}
