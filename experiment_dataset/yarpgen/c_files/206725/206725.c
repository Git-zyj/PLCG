/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2 - 1] = (((arr_4 [i_1]) ? var_6 : (arr_7 [i_2] [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [6] [5] [i_3] [i_4] = (max((min((((arr_12 [i_0] [i_1] [i_2 - 1] [i_3] [i_3]) ? 65535 : (arr_0 [i_4]))), (1 * var_8))), (((-(max(1, 2147483636)))))));
                                var_15 = (((arr_6 [i_1] [i_2 + 1] [i_2 - 2] [i_3]) && ((((arr_2 [i_1] [i_2] [i_2]) ? (arr_2 [i_1] [i_3] [i_4]) : (min(2147483627, 520093696)))))));
                                var_16 = (max(var_16, ((((((arr_9 [i_0] [i_2 - 2] [i_2] [i_2 + 1] [i_3] [i_4]) <= (arr_2 [i_2 - 2] [i_2 - 2] [i_2]))) ? (((arr_6 [i_0] [i_0] [i_3] [i_2 + 1]) - (arr_7 [i_2 - 2] [i_2 + 1] [i_2 - 1]))) : 2)))));
                                var_17 = (min(var_17, (arr_7 [i_1] [i_1] [11])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 += 2147483636;
    #pragma endscop
}
