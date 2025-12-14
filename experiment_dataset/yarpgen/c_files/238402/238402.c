/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = var_7;
                var_12 -= ((max((min(-51, -1051952891), 51))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_8 [i_2] = ((-(((arr_5 [i_2] [i_2]) + var_0))));
        var_13 = var_4;
        var_14 = var_4;
        arr_9 [i_2] [i_2] = ((50 == (arr_6 [i_2])));
        var_15 = (arr_6 [i_2]);
    }
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        var_16 -= (50 == -5004478628243473285);
        var_17 ^= (max((((arr_0 [i_3] [i_3 + 2]) ? (max(var_6, var_9)) : -1599854289)), 3842495853));
        arr_12 [i_3] = (max(((var_4 ? ((((var_3 || (arr_1 [i_3]))))) : (((arr_7 [i_3] [i_3]) ? var_4 : var_10)))), ((max((arr_0 [i_3 + 1] [i_3 + 1]), ((0 ? 20 : (arr_11 [i_3]))))))));
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_23 [i_6] [3] [i_6] [i_6] = (min(var_2, (max(var_1, 0))));
                        var_18 &= (max((((~-2760886437460164308) ? -51 : 5004478628243473285)), ((-(arr_17 [i_5 - 1] [i_5 - 1] [i_4 - 2])))));

                        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            var_19 = ((((max(((-(arr_20 [i_3] [i_4] [i_6] [i_7]))), (max(var_1, (arr_20 [i_3 - 1] [i_3] [i_3] [i_3])))))) ? ((-(max(var_5, var_3)))) : (((max(50, 67))))));
                            arr_26 [i_3] [i_6] = ((((!(arr_0 [i_3] [i_4]))) ? (max((arr_18 [i_4] [i_6]), (min(1775246210758893806, var_0)))) : (((((arr_0 [i_3 - 1] [6]) < var_4))))));
                            arr_27 [i_3] [i_4] [i_5] [i_6] [i_6] [12] [i_7] = -68;
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            var_20 = ((~(arr_14 [i_3] [i_5] [i_8])));
                            var_21 = (1599854289 >= 3842495853);
                            var_22 = (min(var_22, 1535556654677913808));
                            var_23 = (arr_21 [i_3] [i_3] [i_3] [i_3]);
                        }
                        arr_30 [i_3] [i_4] [i_4] [i_6] = (max(264241152, var_9));
                    }
                }
            }
        }
    }
    #pragma endscop
}
