/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (((var_0 ? var_13 : 8023530498352457770)))));
                arr_5 [i_0] [i_1] = (arr_4 [i_1]);
                var_16 = (min(var_16, var_14));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] = 524287;
                            arr_12 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] = ((var_12 ? 0 : 0));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_17 = ((var_9 ? (arr_10 [i_0] [i_1] [i_0] [i_1]) : ((((10616 < var_9) ? ((1 ? (arr_1 [i_0]) : 2147483647)) : ((((arr_13 [i_1]) <= (arr_0 [i_0])))))))));
                            arr_17 [i_1] [i_1] [i_1] [i_5] = (max((((max(4942, (arr_16 [i_0] [i_0] [i_0] [i_0] [i_1]))))), ((33 << (((arr_4 [i_1]) ? 1 : (arr_16 [i_0] [i_0] [1] [i_4] [i_1])))))));
                            arr_18 [i_0] [i_1] [i_1] [i_4] [i_4] [i_5] = (arr_6 [i_1] [i_4] [i_1]);
                            var_18 = ((!(~-32406)));

                            for (int i_6 = 0; i_6 < 15;i_6 += 1)
                            {
                                var_19 = (arr_8 [i_0] [i_5] [i_1] [i_1]);
                                var_20 = 39;
                                arr_22 [i_1] [i_1] [i_4] [i_1] [i_5] = ((~((18446744073709551609 + (arr_21 [i_0] [i_1 + 1] [i_1 - 1])))));
                                arr_23 [i_0] [i_0] [i_1] [i_5] [i_6] = (arr_21 [i_6] [i_6] [i_4]);
                            }
                            /* vectorizable */
                            for (int i_7 = 4; i_7 < 13;i_7 += 1)
                            {
                                arr_26 [i_0] [i_0] [i_1] [i_0] [i_0] = var_2;
                                var_21 = ((arr_15 [7] [i_1] [i_4]) + (arr_1 [i_7 - 4]));
                                arr_27 [i_0] [i_0] [i_0] [i_1] [i_0] = ((var_10 ? -32407 : (arr_25 [i_0] [i_4] [i_1])));
                                arr_28 [i_1] [i_5] [i_4] [i_4] [i_1 + 2] [i_1] = (arr_1 [i_0]);
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 15;i_8 += 1)
                            {
                                arr_32 [i_0] [i_1 + 1] [i_1 + 1] [i_0] [i_5] [i_1] = (arr_30 [i_0] [i_5] [i_0]);
                                arr_33 [i_1] = ((+(((-9223372036854775807 - 1) ? 1 : 15))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_13;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 4; i_10 < 23;i_10 += 1)
        {
            {
                arr_41 [i_9] [i_9] [i_10] = (min((25 & 9245216777172860427), 1561246267));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_23 = (((arr_34 [i_10 - 4]) ? (arr_38 [i_9] [i_9] [i_11]) : var_6));
                            arr_46 [i_11] [i_10] = 3047925699096170851;
                            var_24 = ((!(arr_38 [i_9] [i_10 - 1] [i_9])));
                        }
                    }
                }
                arr_47 [i_9] = 252;
                var_25 = arr_37 [i_9];
            }
        }
    }
    var_26 = (min((((!(~var_6)))), (((((var_9 ? 502589155302808877 : var_4))) ? 4294967295 : ((var_3 << (var_10 + 1773621587)))))));
    #pragma endscop
}
