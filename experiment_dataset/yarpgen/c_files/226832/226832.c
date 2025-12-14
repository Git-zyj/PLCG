/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_10 | (min(var_18, var_10)))) / ((((max(123, 13557))) - var_9)));
    var_21 = min(16957235564138808820, 16957235564138808815);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_22 |= (min((arr_0 [i_1]), 62573));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_0] [i_3] [16] [i_1] [i_0] [i_3] = ((0 >= (min(-6520405699515095004, 16957235564138808829))));
                                var_23 = ((!(((-(((arr_9 [i_0] [i_1] [i_2] [i_2] [i_4]) - 50)))))));
                                var_24 = (arr_6 [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
                var_25 += (-83 | 29);
            }
        }
    }
    var_26 = (max(var_26, -40));
    #pragma endscop
}
