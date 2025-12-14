/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240559
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
                    var_19 = (arr_6 [3] [3] [i_1]);
                    var_20 |= (arr_4 [i_0]);
                    var_21 = (min(var_21, (~14)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_22 = ((((~57625) ? (arr_2 [i_0] [i_1]) : 0)));
                                var_23 = (max(((max((~var_5), (arr_5 [i_4 + 3] [i_4 - 4] [i_4 + 4])))), (((((57625 ? (arr_9 [i_0] [14] [3] [i_2] [15] [i_3]) : (arr_6 [7] [16] [14])))) ? (((48 * (arr_10 [i_3] [i_3] [i_3] [i_3] [6])))) : 0))));
                                var_24 = ((((~(arr_2 [i_4 + 2] [i_4 - 2]))) <= 0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (14 + 4467570830351532032);
    var_26 = var_0;
    #pragma endscop
}
