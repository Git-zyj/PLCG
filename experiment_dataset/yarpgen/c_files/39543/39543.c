/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1 + 2] = ((+(((((arr_1 [i_0 - 3] [i_0 - 3]) ? (arr_3 [i_1] [i_1]) : 1)) & var_9))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                var_15 = var_14;
                                var_16 = (max(var_16, (arr_1 [i_0] [i_0])));
                            }
                            for (int i_5 = 1; i_5 < 16;i_5 += 1)
                            {
                                var_17 |= (min((arr_3 [i_1 - 1] [i_1 - 1]), (((arr_0 [i_3]) * (arr_0 [i_3])))));
                                arr_18 [i_3] [i_1] [i_2] [i_0] [5] = 121;
                                var_18 = (max(var_18, (((((((var_3 / -121) - (((max(var_2, -121))))))) ? ((min((max(255, var_6)), (max(57, var_1))))) : 58757)))));
                                arr_19 [i_0] = (min((arr_12 [i_1 + 2] [i_0] [i_1 + 2]), (arr_12 [15] [i_0] [i_1])));
                                arr_20 [i_5] [i_0] [14] [14] [i_0] [i_0] = ((~(arr_3 [i_0 - 3] [i_3 - 1])));
                            }
                            var_19 = -22;
                            arr_21 [i_0] [i_1] [i_1] [i_3] = 51;
                            arr_22 [i_0] [i_3] [i_2] [i_0] = ((-((32771 % (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                    }
                }
                var_20 -= arr_10 [i_0 + 1] [i_0] [i_0 - 3] [8] [i_0];
                var_21 = ((-(arr_10 [i_0] [1] [1] [i_1] [i_1])));
            }
        }
    }
    var_22 = var_13;
    #pragma endscop
}
