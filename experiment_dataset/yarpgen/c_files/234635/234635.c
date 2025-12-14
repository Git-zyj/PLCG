/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = ((~((16777215 ? 1023 : 8191))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_0] = var_3;
                    arr_8 [i_1] [i_0] = (arr_0 [i_0] [i_1]);
                    var_15 = var_11;
                }
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    arr_13 [i_0] = 10;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_16 = (arr_16 [i_3 + 2] [i_3] [i_3 + 1] [i_3 - 1]);
                                arr_21 [i_0] [i_0] [i_0] [i_4] [i_5] = ((min(-5132224891476562383, (arr_6 [i_3 - 2] [i_0] [i_3 - 2]))));
                            }
                        }
                    }
                    arr_22 [i_0] [1] [i_0] = 9;
                }
                for (int i_6 = 4; i_6 < 11;i_6 += 1)
                {
                    var_17 = ((((((arr_23 [i_0] [i_0] [i_0] [i_0]) ? var_8 : (arr_16 [i_0] [i_1] [i_6 - 2] [i_0])))) && (((4294967286 ^ (((var_5 ? -24521 : (arr_2 [i_1] [i_1])))))))));
                    arr_26 [i_0] [8] [i_1] [i_6 - 1] = ((min((arr_12 [i_0] [i_0] [i_0] [i_0]), (arr_12 [i_0] [i_1] [i_1] [i_1]))));
                    arr_27 [i_0] [i_0] = (min(((min((arr_6 [i_0] [i_0] [i_6 + 1]), (arr_6 [i_0] [i_0] [1])))), (arr_6 [i_6 - 4] [i_0] [i_0])));

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_18 = (((10 != var_1) ? (arr_3 [i_0] [i_0]) : ((max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))))));
                        arr_30 [i_7] [i_1] [i_0] [i_7] = (max((((~(arr_9 [i_1] [i_6 - 4] [i_1])))), ((var_4 ? var_2 : var_8))));
                        arr_31 [i_0] [5] [i_0] [i_7] = ((~(arr_29 [i_0] [i_0] [i_0] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        arr_34 [i_0] [i_0] [i_0] [i_0] = (arr_32 [i_0] [i_0] [i_6] [i_0] [i_8] [i_0]);

                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            arr_38 [i_0] [i_8] = ((~(2598580630 < var_8)));
                            var_19 = ((var_9 ? 21 : var_7));
                        }
                    }
                }
                var_20 *= ((((max(-96, var_7))) ? var_11 : (((var_5 << ((((4294967294 ? var_4 : 4294967286)) + 5698607734150768827)))))));
                var_21 = (min(var_21, var_1));
            }
        }
    }
    var_22 = var_10;
    #pragma endscop
}
