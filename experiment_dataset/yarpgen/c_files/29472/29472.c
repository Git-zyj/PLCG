/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (max((arr_3 [i_2] [i_1]), (arr_4 [i_1 - 2] [i_1 - 3] [i_2 + 2] [i_2 + 1])));
                    var_14 = max(var_0, (((arr_1 [i_2 + 2]) ? (arr_1 [i_2 - 2]) : (arr_2 [i_2 - 1]))));
                    var_15 = (max(((min(var_3, var_1))), (max((arr_1 [i_2 - 2]), (min(var_4, 13510798882111488))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = ((max((arr_9 [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2]), (arr_9 [i_2] [i_2 - 2] [i_2] [i_2 - 2] [i_2]))));
                                var_17 = (max(var_17, (arr_6 [i_1] [i_2] [i_2])));
                                var_18 = (min(var_18, (((+(((arr_2 [i_3]) ? ((var_8 ? 17 : -2)) : (arr_7 [i_4] [i_4] [i_2] [i_4]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
