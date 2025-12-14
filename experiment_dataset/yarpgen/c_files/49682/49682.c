/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [12] [i_1] [12] [i_3] [i_3] [i_3] = ((((!(arr_10 [i_0 - 2] [i_1 + 1]))) ? (max(var_6, (arr_6 [i_1] [i_1] [i_1 + 1]))) : (var_5 < 1556492317)));
                                var_13 ^= ((((arr_10 [i_0 - 3] [i_1 + 1]) ? (arr_10 [i_0 - 1] [i_1 - 1]) : (arr_10 [i_0 + 1] [i_1 - 1]))) >> (((((arr_10 [i_0 - 1] [i_1 - 1]) << (((arr_10 [i_0 + 1] [i_1 + 1]) - 1349704250)))) - 1349704247)));
                            }
                        }
                    }
                }
                var_14 = (max((((((var_12 ? (-2147483647 - 1) : 802367985))) ? var_8 : ((255 ? var_12 : var_7)))), (((arr_9 [i_1] [i_0 - 1] [i_1] [i_0 - 1]) ? -var_1 : 0))));
            }
        }
    }
    var_15 = max(var_3, ((((max(243, (-32767 - 1)))) & -1778256579)));
    var_16 = (min(var_4, -1778256579));
    #pragma endscop
}
