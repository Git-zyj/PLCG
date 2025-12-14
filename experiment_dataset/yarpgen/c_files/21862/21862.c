/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((((min((7 + -1), var_4))) ? (~var_7) : var_9));
    var_13 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [17] [i_1] [i_4] = (((arr_10 [i_0] [i_1 - 3] [i_2] [i_2] [i_0] [i_4]) ? (arr_5 [i_2] [10] [i_2]) : ((((250 == var_9) | ((2749533529 ? 53442 : 53442)))))));
                                var_14 = ((7 ? 1159644467 : -1));
                                arr_14 [i_0] [i_0] [1] [i_1] [i_3] [i_4] [i_4] = ((~(((arr_7 [i_1 + 1] [i_2] [i_2 + 2] [i_1]) ? (arr_7 [i_1 - 3] [8] [i_2 - 2] [i_1]) : (arr_7 [i_1 - 3] [i_2 - 1] [i_2 - 1] [i_1])))));
                                var_15 = (arr_7 [i_2 - 3] [i_2 - 3] [i_3 - 1] [i_1]);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        var_16 = (arr_3 [i_0] [i_2]);
                        arr_18 [i_0] [i_1] [i_2] [i_5] = (((arr_11 [i_1] [i_2 - 2] [i_2 - 3] [i_2]) <= (arr_16 [i_5 - 2])));
                    }
                    var_17 = 53442;
                }
            }
        }
    }
    var_18 = (var_9 - var_5);
    #pragma endscop
}
