/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(29040, 13468222627616899506));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = (arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = ((((min(var_1, 1))) % 853583381));
                                arr_12 [i_3] = ((min(var_0, var_11)));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_2] [i_1] = (9223372036854775807 < (min((var_9 ^ 1), -590339974442780513)));
                }
            }
        }
    }
    var_15 = ((min(var_11, var_10)));
    var_16 = var_10;
    #pragma endscop
}
