/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_7;
    var_13 |= -var_9;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, (!-6497739768897940783)));
                                arr_12 [i_2] [i_2] [i_2] [i_3] [8] [i_3] = (min((((((!(arr_9 [i_0] [i_1]))) || var_4))), (arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 2])));
                                var_15 = (arr_5 [i_0] [11] [10] [11]);
                            }
                        }
                    }
                    arr_13 [i_0] [i_2] [i_1] |= (min((arr_2 [i_0] [i_2]), -264943023));
                    var_16 = (max((!-36), (arr_5 [i_0 - 1] [i_0] [2] [i_0])));
                    var_17 = var_6;
                }
            }
        }
    }
    #pragma endscop
}
