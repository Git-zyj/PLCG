/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((((((arr_0 [i_1 - 1] [i_1]) | 1))) ? 18405 : (!47131))))));
                arr_6 [4] [0] [4] |= ((((max((arr_5 [i_1 - 1]), (arr_4 [i_0] [14]))))) >= (((((var_4 ? var_10 : 47108))) ? (((var_4 ? 0 : 1))) : (((arr_5 [1]) ? var_9 : 14786639831148015946)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_2] [i_2] [i_3] [i_1] = (((((arr_10 [i_0] [i_1 - 1] [i_1 - 1] [i_3] [i_1 - 1]) ? 1 : 47103)) * (((arr_13 [i_0] [i_0] [i_1] [i_1 - 1] [i_2] [i_1 - 1] [i_1 - 1]) ? (arr_13 [2] [i_1] [i_2] [i_3] [10] [i_0] [i_1]) : 65535))));
                                var_14 = ((-0 ? ((30732 ? (arr_7 [i_0] [i_1 - 1] [6] [17]) : (((arr_14 [i_0] [i_1] [i_2] [8] [1] [1]) - 24455)))) : (max((var_7 - 24173), 4999))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
