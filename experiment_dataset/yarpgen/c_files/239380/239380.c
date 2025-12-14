/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] = -var_4;

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_15 = (arr_3 [17] [i_2] [13]);

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_16 = ((arr_4 [i_3 + 1]) - ((((arr_6 [i_3] [i_3]) ? 4294967295 : 1017176485))));
                        var_17 = (arr_2 [i_3 - 1]);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                arr_17 [i_1] [i_2] [i_5] = (arr_8 [i_1] [i_0] [i_2] [8] [i_5]);
                                arr_18 [i_5] [i_0] [i_2] [i_2] [i_2] [i_0] [i_0] = ((!(arr_9 [i_1] [i_4 + 1] [i_2])));
                                arr_19 [i_0] [i_0] [i_2] [i_0] [i_0] = (((((-(((((arr_7 [16] [i_1] [16] [16]) + 2147483647)) >> (((arr_14 [8] [8] [i_2] [i_2] [i_2]) - 4717222956352449464))))))) ? ((((arr_16 [i_4 - 2] [i_4 - 2] [i_4] [i_4 - 1] [1] [i_4 - 1]) - (!var_0)))) : ((var_3 ? (arr_15 [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 2] [i_2] [i_4]) : (arr_12 [i_4 - 2] [i_2])))));
                            }
                        }
                    }
                    var_18 = (min(var_18, (!var_7)));
                    var_19 = (((!1017176485) == (max(var_8, -1017176485))));
                }
                var_20 = ((!(((1 ^ (arr_12 [i_0] [i_0]))))));
                var_21 += ((1 ? 1 : 529907736));
            }
        }
    }
    #pragma endscop
}
