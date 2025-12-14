/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((var_4 + var_2), ((-((min(var_1, var_7)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = ((108 < ((max(-127, 0)))));
                arr_4 [i_0] = (arr_3 [i_0] [i_1] [i_1]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] [i_5] [i_5] [i_2] [7] [i_2] = ((63049 ? (arr_2 [i_2] [i_3] [i_4]) : 63032));
                                arr_20 [9] [i_2] [i_4] [i_4] [i_4] [7] [i_4] = 8536610783041854287;
                            }
                        }
                    }
                    var_16 = (max(((~(arr_3 [i_2] [i_3] [i_4]))), var_7));
                }
            }
        }
    }
    #pragma endscop
}
