/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (arr_6 [i_1] [i_1] [i_1 - 2] [i_0]);

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [1] [i_4] [i_4] [i_4] [i_3] = (((arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 - 1]) && (arr_11 [i_1] [i_4] [i_2] [0] [i_2] [i_4 + 4])));
                            arr_14 [i_3] [i_4] [i_2] [i_3] [i_4] [i_3] = arr_11 [i_0 + 4] [i_4] [i_2] [i_3] [i_4] [i_4];
                            var_17 = (max(var_17, (arr_7 [i_0 - 2] [i_0 - 1])));
                        }
                        var_18 = arr_3 [i_3] [i_1] [i_3];
                    }
                    var_19 = (min(var_19, ((((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : ((var_9 / (arr_7 [1] [i_1]))))))));
                }
            }
        }
    }
    var_20 = ((var_13 ? (((((17937752362218993486 ? -60 : 158))))) : (max(var_12, (max(15079291564808724349, 736145322))))));
    #pragma endscop
}
