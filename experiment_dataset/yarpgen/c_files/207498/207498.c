/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_5;
    var_11 |= 54059;
    var_12 = (!var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_14 [i_2] [i_2] [i_2] [2] [i_2] [i_2] |= -3275750468;
                        arr_15 [i_0] [i_3] = var_7;
                        var_13 = -3275750476;
                    }
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        var_14 |= (max((((arr_7 [22]) ? 1068801846 : (~var_5))), (((min(var_2, (arr_10 [i_0] [4] [i_2] [i_4 + 2])))))));
                        arr_18 [i_0] [i_1] [i_2] [i_2] = (arr_16 [i_0] [i_1] [i_2] [i_2] [i_1]);
                        arr_19 [17] [14] [i_2] [17] [i_2] = (min(1, (((((0 ? var_6 : (arr_13 [i_4 + 1] [i_0] [i_2] [i_0] [i_0])))) ? (min(var_3, (arr_5 [i_0]))) : (~var_1)))));
                        var_15 = var_3;
                    }
                    arr_20 [i_0] = ((var_5 ? ((max(var_5, (arr_13 [i_0] [5] [i_0] [i_0] [i_0])))) : (arr_2 [10] [i_2])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_16 = ((!(((max((arr_22 [14] [i_1]), var_4))))));
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max(var_7, (arr_9 [i_0] [i_5] [12] [9])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
