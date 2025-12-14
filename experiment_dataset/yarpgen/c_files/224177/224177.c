/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        arr_14 [i_3] = (((((((min(1, var_4))) - var_8))) ? (((arr_8 [i_0] [i_2 - 1] [i_0] [i_3 - 2]) ? (arr_8 [i_3] [i_2 - 2] [i_2 - 2] [i_3 + 2]) : (arr_8 [i_0] [i_2 + 1] [i_2] [i_3 + 1]))) : (arr_1 [i_3])));

                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            arr_17 [i_4] [i_4] [i_3 - 1] [i_2 - 2] [i_1] [i_0] |= ((((((arr_6 [i_3 - 1] [i_2 - 1] [i_2]) & var_4))) ? 1 : ((var_11 | ((max(-14, 1)))))));
                            var_13 = (1 > 1);
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_20 [i_0] [i_2] [i_5] = -0;
                        arr_21 [i_5] [i_2] [i_2 + 2] [i_2] [i_0] [i_0] = ((~(arr_9 [i_2 + 2] [i_2] [i_2 - 2] [i_2 - 1])));
                    }
                }
            }
        }
    }
    var_14 |= (6780479847075056251 ? ((((var_3 + 2147483647) >> (1 != 1)))) : (min(var_9, (-21 >= 1))));
    #pragma endscop
}
