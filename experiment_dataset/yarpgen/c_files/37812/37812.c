/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (min(var_14, var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    var_21 = ((~(((min((arr_8 [i_0] [i_1] [i_2 - 1]), (-2147483647 - 1))) & var_17))));
                    var_22 = 2147483647;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_23 = (((arr_9 [5] [13] [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1]) ? (((arr_9 [i_2 - 2] [i_2 - 2] [3] [i_2 + 1] [i_2] [i_2 - 1]) * 1667356864)) : (arr_9 [i_2] [i_2 - 2] [14] [i_2 + 1] [14] [i_2 - 1])));
                                var_24 = (((73789963 & 0) ? (var_13 | var_10) : ((max((arr_10 [i_2 + 1] [i_2] [1] [i_2 + 1] [i_3 - 1]), var_8)))));
                            }
                        }
                    }
                }
                arr_14 [i_0] = (468343394 | -2147483645);
            }
        }
    }
    #pragma endscop
}
