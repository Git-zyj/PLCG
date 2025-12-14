/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_15, var_15));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = (max((((((max((arr_4 [i_0] [i_0] [i_0]), (arr_0 [i_2])))) ? (((max(-8485, (arr_2 [i_0]))))) : (arr_5 [i_0] [i_1] [i_2])))), (arr_4 [i_0] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 ^= (~(min((arr_8 [4] [i_4] [i_4] [2] [i_4 + 1] [i_4 - 1]), (arr_9 [i_1] [i_1] [i_1] [i_2] [i_4 + 4] [i_4 - 1] [i_4 - 2]))));
                                var_19 += -9101727433985303744;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (((((-((var_6 ? var_4 : var_5))))) - (min(var_10, 0))));
    var_21 = var_5;
    #pragma endscop
}
