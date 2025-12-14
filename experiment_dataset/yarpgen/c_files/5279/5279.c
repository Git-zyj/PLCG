/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [9] = ((((min((arr_2 [i_0] [i_1]), 483699292))) ? ((((((arr_0 [i_0 - 1] [i_0 - 1]) % (arr_2 [i_0] [i_1])))) ? (arr_3 [i_0 - 1] [i_0 - 1]) : (arr_2 [i_0] [i_1]))) : (((((arr_1 [0]) * 483699278))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [8] [i_1] [i_2] [i_2] [i_2] |= ((!(((((var_10 ? -65 : var_9))) || -1984609346))));
                                var_16 = (min(var_16, ((((((7 ? (7 - 0) : (((arr_6 [i_0] [i_1] [i_3] [i_1]) ? (arr_10 [i_4] [i_1] [i_2 + 1] [i_1] [6]) : var_6))))) && 483699290)))));
                                var_17 = (((((var_14 ? (1 && var_13) : 29))) % ((var_6 ? 5485120774302270543 : 1))));
                                var_18 &= (((((-92 ? -1197193060 : 483699292)) <= -32755)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
