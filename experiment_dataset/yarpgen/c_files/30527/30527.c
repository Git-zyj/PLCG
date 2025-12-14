/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((((!(arr_1 [i_0] [i_0]))) ? (((arr_1 [i_0] [i_0]) ^ var_9)) : (arr_0 [i_0])));
        var_13 = ((max(((min(1, 1))), (arr_1 [19] [i_0]))));
    }
    var_14 |= var_1;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_15 = min(((-var_11 ? 1 : var_7)), (max((~var_5), (1 % 1))));
                                var_16 |= 1373648686;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        arr_19 [i_1] [i_1] [6] [i_3] [i_6] = var_1;
                        arr_20 [i_1] [i_2] [i_3] [i_6] = ((~(arr_7 [i_6 + 1] [i_3 + 3])));
                        arr_21 [i_1] [i_2] [i_3] [10] [i_6] [i_6] = -1424906148;
                        arr_22 [10] [i_2] [8] [i_6] = ((!(var_1 > var_10)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
