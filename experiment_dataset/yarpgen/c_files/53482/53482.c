/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((max(var_5, ((var_10 ? 1 : var_2)))), var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((((min(1, 17815783292282094361)))))));
                    var_13 = (arr_6 [i_0] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = (arr_10 [i_0]);
                                arr_13 [i_2] [i_1] [i_1] |= (((630960781427457255 * (((max(1, (arr_10 [i_1]))))))) * (((((arr_11 [i_0] [i_0] [i_0] [i_3] [i_0]) * 17815783292282094361)) + (((1 * (arr_5 [i_0] [i_1] [i_0] [i_0])))))));
                            }
                        }
                    }
                    var_15 = (arr_3 [i_2 - 1] [i_2 + 1]);
                    arr_14 [i_0] [i_2] [i_0] = (arr_1 [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
