/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] [1] [i_3] [i_3] [i_1] = (arr_4 [i_2] [i_2]);
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [1] [i_3] = (arr_10 [i_4] [i_3] [0]);
                        }
                        arr_14 [i_0] [i_0] [i_0] [i_3] = -var_5;
                    }
                    var_12 = var_1;
                    arr_15 [i_0] [i_0] [i_2] = (((arr_10 [i_2 - 3] [i_2 + 2] [i_2 - 2]) ? ((-0 ? ((min((arr_3 [i_0] [9]), var_2))) : (((arr_2 [i_0] [i_1] [i_2 + 2]) & (-127 - 1))))) : (arr_1 [i_0] [i_0])));
                    var_13 |= ((~(((((140 ? (arr_1 [i_1] [i_0]) : var_7))) ? 114 : 372067514))));
                }
            }
        }
    }
    var_14 = ((var_4 ? var_9 : 0));
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_15 |= (min(1, (min((arr_18 [11]), (var_11 && 65535)))));

                            for (int i_9 = 0; i_9 < 12;i_9 += 1)
                            {
                                var_16 = 1;
                                var_17 = (min(((((min((arr_6 [i_5] [i_5 - 4] [i_5]), 1))) ? (~var_0) : ((1 ? 59 : (arr_10 [i_5 - 4] [i_5 - 4] [i_7]))))), (!var_9)));
                                var_18 -= (((((!(arr_0 [i_6])))) - (arr_18 [1])));
                            }
                            arr_30 [i_5] [1] [i_7] = 508;

                            for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                            {
                                arr_34 [i_5 - 4] [i_6] [i_7] [i_8] [i_10] = (min(((min((arr_25 [i_5 + 1]), (arr_25 [i_5 - 3])))), -5419853717289624499));
                                var_19 = (arr_3 [i_5] [i_5]);
                            }
                            for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                            {
                                arr_38 [i_11] [i_8] [i_7] [i_7] [i_6] [i_6] [i_11] = var_3;
                                var_20 = ((var_11 - 0) ? (var_3 && var_1) : 127);
                                arr_39 [i_11] [i_11] = -119;
                            }
                            arr_40 [i_5] [11] [i_5] [11] [5] = (min((((arr_1 [i_5 - 3] [i_7]) ? var_6 : (arr_1 [i_5 - 3] [i_5]))), 0));
                        }
                    }
                }
                var_21 = 114;
            }
        }
    }
    var_22 = (((!var_5) / var_7));
    #pragma endscop
}
