/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_11 [6] [i_0] [i_0] |= (-((1321323388 ? 1603112915 : 1321323388)));
                    var_13 = (min(var_13, ((var_10 < (min(1321323388, 1))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_17 [i_2] [i_2] = (max((((arr_6 [i_0]) ? (arr_7 [i_0] [i_1] [i_2]) : var_6)), var_10));
                                arr_18 [1] [i_1] [8] [i_2] [i_1] = -1;
                            }
                        }
                    }
                    var_14 = (max(var_14, (arr_5 [i_0] [i_0] [i_2])));
                }
            }
        }
    }
    var_15 = (min(((var_4 ? (1 * 1321323388) : 1321323393)), (var_2 * var_9)));
    var_16 = ((((((var_1 ? var_9 : var_11))) ? 1 : ((var_0 ? var_12 : var_0)))));
    var_17 *= ((var_9 ? var_6 : (!0)));
    #pragma endscop
}
