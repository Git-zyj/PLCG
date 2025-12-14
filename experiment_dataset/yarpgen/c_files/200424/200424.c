/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [4] [4] = (((((((((arr_0 [i_0] [i_1 + 3]) ? 14707497673408871825 : var_14))) ? (((arr_1 [i_1 - 3] [i_1 - 3]) ? (arr_1 [i_1] [i_0]) : var_17)) : ((min(240, 10)))))) && 0));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_20 += (((arr_8 [i_0] [i_1] [i_2] [i_3]) & (((arr_8 [i_0] [i_0] [i_2] [i_3]) | (arr_8 [i_3] [i_1] [i_2] [i_3])))));

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_21 += (min((max((((2147483647 < (arr_7 [i_2] [i_3] [i_2] [1])))), (max(var_2, (arr_5 [i_0] [i_1] [i_4]))))), (((((min(var_15, (arr_13 [i_0] [i_1] [i_2] [i_2] [i_1] [i_4] [i_2])))) ? (arr_8 [i_3] [1] [i_2] [i_2]) : (((arr_13 [i_0] [i_0] [i_1] [i_2] [i_2] [18] [i_4]) ? var_0 : (arr_0 [i_0] [i_0]))))))));
                                var_22 = -var_2;
                            }

                            for (int i_5 = 0; i_5 < 19;i_5 += 1)
                            {
                                var_23 = 222;
                                var_24 = ((~((((((arr_14 [i_0] [1] [i_2] [i_2] [i_2] [18]) ? var_0 : 2147483629))) ? var_2 : 5990740447404560404))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((var_9 ? var_5 : (((max(1815865788249480051, 57219)) ^ (max(var_10, -120))))));
    var_26 = var_18;
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 10;i_7 += 1)
        {
            {
                var_27 = (min((!var_18), (max((arr_8 [i_6 - 1] [i_6 + 1] [i_7 - 2] [i_7 - 2]), (arr_18 [i_6 - 1] [i_7 + 1])))));
                /* LoopNest 3 */
                for (int i_8 = 3; i_8 < 8;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_28 = ((((((arr_5 [i_7] [i_8 + 2] [i_9 + 1]) ? var_10 : (arr_16 [i_10] [i_9] [i_8 + 2] [i_7 - 2] [i_6])))) && 1815865788249480049));
                                var_29 += (((arr_22 [i_7] [i_7] [i_7] [i_7]) / var_13));
                                var_30 += (((arr_31 [10] [i_7] [i_9] [i_6 - 1] [i_7] [i_6 - 1]) > (((max(1, 1)) ? (((arr_25 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_8 - 1] [i_9 + 2] [i_10]) ^ var_11)) : (((arr_9 [i_7]) ? (arr_7 [i_6] [i_6] [i_6 + 1] [i_6 - 1]) : (arr_10 [i_7 - 1] [i_8] [i_9] [i_10])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
