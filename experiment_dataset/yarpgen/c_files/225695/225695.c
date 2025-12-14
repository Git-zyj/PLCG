/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_12));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = 1;
        var_18 = (min(var_18, (arr_2 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] = (arr_0 [i_1] [4]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                {
                    var_19 = (arr_8 [i_1] [i_2] [6]);
                    var_20 = (arr_8 [i_1] [i_2] [i_3]);
                }
            }
        }

        for (int i_4 = 4; i_4 < 11;i_4 += 1)
        {
            var_21 = (max(var_21, (arr_0 [i_4 + 3] [i_4 - 4])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_22 = (max(var_22, 1073741824));
                        var_23 = ((536870904 ^ (arr_9 [i_4 + 2] [i_1] [i_1])));

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_24 *= (((arr_17 [i_4] [i_4] [13]) * (arr_17 [11] [11] [11])));
                            var_25 -= (arr_3 [i_1]);
                            var_26 += (arr_12 [i_4] [0]);
                            var_27 = (((arr_9 [2] [i_1] [i_4 - 3]) ? (arr_16 [i_1] [i_4] [i_4 + 1] [i_5]) : (arr_16 [i_4] [i_4 - 1] [i_4 + 3] [i_4])));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_27 [i_1] [i_1] [i_1] = (((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1])));
            arr_28 [5] [i_1] [i_8] = -82;
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_28 = (max(var_28, (!34454)));
            arr_32 [i_9] &= (arr_14 [1] [i_9] [i_9] [i_1]);
            var_29 = (max(var_29, (!0)));
        }
        for (int i_10 = 3; i_10 < 13;i_10 += 1)
        {
            var_30 *= var_2;
            var_31 = (((arr_5 [i_1] [i_1]) * (arr_5 [i_1] [i_1])));
            var_32 = (1 + 1);
            arr_35 [2] [10] [i_1] = ((!(arr_2 [i_1] [i_10 - 2])));
            var_33 = (max(var_33, (arr_12 [2] [4])));
        }
        var_34 = (((arr_11 [i_1]) ? (arr_19 [0] [i_1] [i_1] [i_1]) : ((((arr_26 [i_1] [2] [1]) > var_14)))));
    }
    #pragma endscop
}
