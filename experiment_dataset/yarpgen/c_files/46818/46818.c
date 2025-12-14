/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = (var_4 % 1594047796);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_3] [i_2] = arr_0 [i_0];
                            arr_13 [i_0] [i_1] [i_2] [i_2] = (max(((-((max(var_8, var_5))))), ((-(!var_5)))));
                        }
                    }
                }
            }
        }
    }
    var_11 = ((((~((min(var_6, var_8))))) + ((-(1 | 22664)))));
    var_12 = 7122;
    var_13 = (max(var_13, ((((0 + -150) ? var_8 : ((1 ? 22 : 79)))))));
    #pragma endscop
}
