/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    var_21 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = (arr_1 [i_0 - 3]);
                var_22 ^= ((((arr_3 [i_0 - 1] [i_0]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1]))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_23 = (arr_7 [i_0 - 2] [i_0 - 2] [i_2]);

                    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_13 [6] [i_1] [i_2] [i_3] [i_1] = (((arr_8 [i_4] [i_2] [i_1] [i_2] [i_0]) & (arr_8 [i_2] [i_2] [i_2] [i_2] [i_0])));
                            var_24 = var_2;
                            var_25 = var_9;
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_17 [i_2] [i_5] = (((arr_16 [i_5] [i_5] [i_2] [14] [i_2] [5] [i_0]) ? ((var_2 ? (arr_16 [i_0] [9] [5] [i_0 + 3] [i_0 + 3] [i_5] [i_5]) : var_14)) : ((~(arr_6 [i_1] [i_1] [4])))));
                            arr_18 [i_0] [i_2] = var_12;
                            var_26 ^= (((arr_15 [i_5] [i_1] [i_2] [i_3] [i_5]) != (arr_15 [7] [i_3] [i_2] [i_1] [i_0])));
                            arr_19 [i_2] [i_0 + 2] [10] = var_19;
                        }
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            arr_24 [i_2] [1] [i_2] [i_3] [i_6] = ((~(arr_9 [i_0 + 3])));
                            var_27 = (arr_12 [i_0] [i_1] [i_2] [i_6 + 2] [i_0 - 3]);
                            arr_25 [i_0] [i_1] [i_0] [i_3] [i_2] = (((arr_8 [i_6 - 1] [i_2] [i_0 - 2] [i_2] [i_0 - 1]) ? 7185780139428640029 : (~var_14)));
                        }
                        arr_26 [i_2] [i_1] [i_0 - 2] [i_3] [i_0] [1] = (arr_23 [i_0 - 3] [i_0] [i_0 + 1] [i_0 - 3] [i_2]);
                        var_28 ^= (!(arr_16 [7] [i_0] [i_0] [4] [i_0 - 2] [i_0] [i_0 - 3]));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        arr_29 [i_2] [i_2] [i_2] [i_7] = var_7;

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            arr_34 [i_0] [i_0] [i_0] [i_7] [i_8] [i_2] [4] = 20659;
                            var_29 = (arr_10 [i_0 + 3] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1] [16] [2]);
                            arr_35 [13] [i_2] [16] [i_2] [i_0] = 20649;
                            var_30 = (((arr_22 [i_2] [i_1] [i_2]) ? (arr_22 [i_0] [i_1] [i_2]) : var_10));
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    var_31 = (max(var_12, (arr_22 [i_0 - 1] [i_0 - 2] [i_9])));
                    var_32 = (min(var_32, ((((min((!20659), (max(2481326339, 4294967295)))) >= (((max((arr_3 [i_0] [i_9]), (arr_3 [11] [11]))))))))));
                }
                arr_39 [i_0] [i_0 + 2] [i_0 + 3] = ((~(arr_9 [i_0 + 1])));
            }
        }
    }
    #pragma endscop
}
