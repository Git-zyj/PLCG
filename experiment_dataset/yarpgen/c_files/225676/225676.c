/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [0] = ((~(arr_1 [i_1] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] = (i_2 % 2 == 0) ? ((((arr_7 [i_0] [i_0] [i_0] [i_0]) << (((arr_10 [i_2]) - 11737544333321519638))))) : ((((arr_7 [i_0] [i_0] [i_0] [i_0]) << (((((arr_10 [i_2]) - 11737544333321519638)) - 6735453178411523660)))));
                            var_20 = ((((((arr_0 [i_2]) ? (arr_3 [i_3]) : -3817351622))) ? (arr_10 [i_2]) : ((((((var_2 + 2147483647) << (262143 - 262143))) & (~var_14))))));
                            arr_12 [i_3] [i_2] [i_1] [i_2] [i_0] = -262143;
                            var_21 = 1;
                        }
                    }
                }
                var_22 = ((var_7 ? (arr_5 [i_1]) : ((~((var_1 ? (arr_3 [i_1]) : -1595856443))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] [18] [i_4] [i_1] [i_0] = (min(262143, 32767));
                                var_23 = (min(262156, ((((arr_14 [i_0] [i_6 + 3] [i_6] [i_5 - 1]) < (arr_9 [i_5 + 3] [i_5 + 3] [i_5 - 1] [i_6 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_7;
    #pragma endscop
}
