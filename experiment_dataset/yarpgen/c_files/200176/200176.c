/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_11 [i_1] [i_1] = (arr_2 [i_1]);

                    for (int i_3 = 3; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_12 *= (arr_8 [i_0] [i_3 - 2] [i_1 + 1]);
                        arr_15 [i_3] [i_1] [i_2] [i_3] = (((arr_1 [i_1 + 1]) ? (arr_2 [i_2]) : (arr_3 [i_1 - 1])));
                    }
                    for (int i_4 = 3; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_13 = var_8;
                        var_14 = (1 ? ((1 ? 1 : 3693179004800409077)) : (arr_2 [i_4]));

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_22 [i_5] [i_1] = (((arr_19 [i_4 - 2] [i_5] [i_4 - 2] [i_4 - 1] [i_4 + 1]) < 12626));
                            var_15 &= ((var_6 ? 127 : (arr_4 [i_4 - 1] [i_4 - 3] [i_4 - 3])));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_16 = ((1 ? -629387697 : (arr_8 [i_0] [i_1] [i_6])));
                            var_17 = (((arr_19 [i_0] [i_2] [i_2] [i_4] [i_6]) ? (arr_6 [i_1 + 1] [i_1 + 2] [i_4 - 3]) : -3932160));
                        }
                    }
                    for (int i_7 = 3; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_18 = (((arr_18 [i_7 - 1] [i_1 + 1]) ? (arr_18 [i_7 - 1] [i_1 + 1]) : (arr_18 [i_7 - 1] [i_1 + 1])));

                        for (int i_8 = 4; i_8 < 9;i_8 += 1)
                        {
                            var_19 = (arr_23 [i_2] [i_2] [i_2] [i_7 - 3] [i_8 - 4] [i_7 - 3] [i_0]);
                            var_20 = 6;
                        }
                    }
                    var_21 = (((arr_2 [i_1 + 2]) ? (1 * 942019526841342417) : (((1082426828 ? (arr_5 [i_0] [i_1] [i_1]) : 131)))));
                    var_22 = 1399805307328673914;
                    var_23 += ((1 & ((1 ^ (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_2])))));
                }
                for (int i_9 = 1; i_9 < 10;i_9 += 1)
                {
                    var_24 = 942019526841342432;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_25 = (max(var_25, ((max((max(245, ((37 >> (var_0 - 1263652927))))), 1)))));
                                arr_38 [i_0] [i_9 + 1] [i_10] [i_9 + 1] = -1657101287519397568;
                                arr_39 [i_0] [i_1 - 1] [i_9] [i_10] [i_10] = (((max((max((arr_3 [i_11]), 4650636519990963211)), (arr_5 [i_11] [i_10] [i_0]))) / (arr_9 [i_0] [i_1] [i_9] [i_10])));
                                var_26 = (((((14984922855406310331 ? (arr_1 [i_0]) : (1 & 1)))) ? -21 : 63891));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_27 = ((((max(65522, (arr_24 [i_9 + 1])))) + (arr_2 [i_1 - 1])));
                                var_28 = (((arr_14 [8] [8] [8]) > (max((arr_34 [i_0] [i_0] [i_0] [i_0]), 1610612736))));
                            }
                        }
                    }
                }
                arr_45 [i_0] = ((((min((((arr_3 [i_0]) >> (((arr_8 [i_0] [i_1 + 1] [i_1]) - 5884127405268123929)))), var_4))) ? (arr_13 [i_0] [i_0] [i_1 - 1] [i_0] [i_0] [i_0]) : 1));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        {
                            var_29 = (min(var_29, (arr_16 [i_1] [i_1])));
                            arr_53 [i_1] &= min(((1 ? 63891 : (arr_34 [i_1 + 1] [i_1] [i_1] [i_1]))), var_7);
                            var_30 = (min((arr_51 [i_0] [i_1 + 1] [i_15] [i_14]), (arr_34 [i_0] [i_1 + 2] [i_1 + 2] [i_1 - 1])));
                        }
                    }
                }
                var_31 = (((1 >= 37) ? (((~(1 < 3)))) : ((1 ? (arr_29 [i_0] [i_1] [i_1 + 2] [i_0] [i_0] [i_0]) : (((arr_26 [i_1 - 1] [i_1] [i_1 - 1] [i_0] [i_0]) ? (arr_30 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]) : 1))))));
            }
        }
    }
    var_32 = var_1;
    #pragma endscop
}
