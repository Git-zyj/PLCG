/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_12 = ((~(((arr_8 [i_2 - 1] [i_3] [i_3]) ? (arr_8 [i_2 - 1] [1] [i_3]) : (arr_8 [i_2 - 1] [i_3] [i_3])))));
                            arr_11 [i_3] [i_1] [i_1] [i_1] = -var_10;
                        }
                    }
                }
                arr_12 [i_0] [i_0 - 1] = ((+(((arr_6 [i_0] [i_0 + 1]) & (arr_6 [i_0 + 2] [i_0 - 3])))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_19 [i_5] [i_4] [i_4 - 1] [i_1] [i_0] = var_3;
                            var_13 = -var_10;
                            arr_20 [i_4] [i_1] [i_0] [i_5] = (arr_14 [i_5] [i_4] [i_1] [i_0 - 2]);
                        }
                    }
                }
                arr_21 [i_0 + 1] [i_1] &= (((((-(953471440 / 5)))) ? ((((!(arr_9 [7] [i_1] [i_0] [i_0]))) ? 9166128769589542373 : ((-(arr_2 [i_1]))))) : ((((!(((-(arr_17 [i_0]))))))))));
            }
        }
    }
    #pragma endscop
}
