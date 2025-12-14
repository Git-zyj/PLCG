/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = ((((((arr_7 [i_1 - 1]) ? (arr_11 [i_1] [i_1 - 1] [i_1]) : (arr_11 [i_1] [i_1 + 1] [i_1])))) ? ((min(10, (arr_7 [i_1 - 1])))) : ((min((arr_11 [i_1] [i_1 - 2] [i_1]), (arr_11 [i_1] [i_1 + 1] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_21 = max((arr_9 [i_1 + 1] [i_1 + 1]), (max(0, (arr_9 [i_1 + 1] [i_1 - 2]))));
                                var_22 = (((max((max((arr_10 [i_0] [i_0] [i_0]), -1119967056)), var_2))) ? (arr_1 [i_1]) : (arr_6 [i_3 - 2] [i_1 + 1]));
                                var_23 = (min((((arr_9 [i_3 + 2] [i_1 - 2]) | ((20768 ? 105559299 : 2196527)))), (--65526)));
                            }
                        }
                    }
                    var_24 = (min(var_24, (((~((((((arr_0 [i_0] [i_0]) ? (arr_12 [9] [i_1] [i_0] [i_0]) : 1119967058))) - (var_16 - 29402))))))));
                }
            }
        }
    }
    var_25 = var_7;
    #pragma endscop
}
