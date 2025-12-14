/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (1 ? 1 : ((min((-78 || 1), 1))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 += ((((max((arr_1 [i_0] [i_0]), 101))) ? (arr_1 [i_0] [i_0]) : -78));
        arr_3 [i_0] = (((((((619034245 ? 1 : 1)) && (((1417775704 ? (arr_0 [1] [i_0]) : 1))))))));
    }

    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_13 *= ((max((((arr_5 [i_1]) / var_0)), ((max(var_5, (arr_7 [i_1])))))));
        arr_8 [i_1] [i_1] = (max((max(((4294967283 ? var_0 : -78)), (((arr_7 [1]) ? var_0 : 4294967288)))), var_5));
    }
    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_14 = (max(var_14, ((min((arr_10 [i_2]), (arr_10 [i_2]))))));
                                var_15 = (max(var_15, ((((((-(max(var_4, var_7))))) & (((1068860496 ^ -78) | ((1 ? var_9 : (arr_14 [i_4] [i_4] [i_3]))))))))));
                                var_16 = (((max(((((((arr_13 [14] [i_4] [i_5]) + 2147483647)) << (1 - 1)))), ((4294967261 | (arr_11 [5]))))) == (((((((((arr_9 [i_5]) == (arr_11 [i_6]))))) < var_0))))));
                                arr_21 [17] [i_3] [i_2] = ((~((1 ? -28 : ((min(-1, (arr_16 [11] [i_3] [i_3] [i_5]))))))));
                                arr_22 [i_2 - 1] [14] [i_4] [i_2] [i_2] = var_0;
                            }
                        }
                    }
                    arr_23 [12] [10] [i_3] [12] |= ((var_7 ? ((max((((33 ? (arr_11 [i_2]) : (arr_13 [i_2] [5] [i_2])))), (var_6 | var_2)))) : (max((var_8 * var_4), -1))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        var_17 -= var_10;
                        arr_35 [i_2] [i_2] [i_8] [i_8] [i_8] [0] &= var_10;
                    }
                }
            }
        }
    }
    #pragma endscop
}
