/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (min(((max(var_8, var_16))), ((((min(-1137474265, -1137474265))) ? (-1137474279 / 30721) : (max(30438, 10))))));
    var_18 = (((~83) ? var_0 : ((((min(var_9, var_13))) ? (18446744073709551606 + var_11) : (min(var_0, 16383))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_19 *= (min((max((((arr_1 [i_0]) ? (arr_1 [i_0]) : 16377)), (min(var_6, 115085642)))), ((min((var_9 > 173), (30721 || 18446744073709551606))))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_20 = 0;
                    arr_11 [i_1] = ((max(0, (max(var_3, var_10)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_21 = (max(var_21, (((!(arr_0 [i_1 - 1] [i_1 - 1]))))));

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_16 [i_0] [i_4] |= ((30428 ? ((((arr_3 [3] [1]) ? (arr_9 [i_0] [i_0] [i_3] [i_4]) : (arr_10 [i_4] [12] [12])))) : var_16));
                        var_22 = (max(var_22, (((((-(arr_9 [i_1] [i_1] [i_1] [i_1]))) + (arr_15 [1] [i_1] [i_1 - 1] [i_1] [i_1]))))));
                        var_23 = (-13346 + 4095);
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_21 [i_0] [i_1] = ((2405162007 | (arr_17 [i_1] [i_1 + 1])));
                        var_24 = (((arr_4 [i_3] [i_1 + 1] [i_1 + 1]) <= 19162));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_25 -= (((arr_6 [i_1] [i_1 - 1]) ^ (arr_6 [i_1] [i_1 - 1])));
                        var_26 *= ((arr_23 [i_6] [i_6]) >> (16383 - 16355));
                    }

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_27 = ((15492888871790336214 | (arr_5 [13] [i_1 - 1])));
                        arr_29 [i_1] = (((var_12 ? var_0 : (arr_6 [2] [i_1]))));
                        var_28 += (((arr_24 [i_1 - 1] [12] [i_1 - 1]) >= (arr_24 [i_1 + 1] [1] [i_1 - 1])));
                    }
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        var_29 *= ((16313417738499277336 ? (arr_24 [i_1 - 1] [12] [i_8 + 4]) : var_10));
                        arr_34 [i_0] [i_0] [i_0] [i_1] [i_3] [i_3] = var_7;
                        var_30 = (10821859410151513690 - 6093399889520086144);
                        var_31 = -4095;
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_32 = (arr_31 [1] [i_0] [i_3] [i_1 + 1]);
                        var_33 = (arr_0 [17] [17]);
                    }
                }
                arr_37 [i_1] = (arr_8 [i_1] [i_1 - 1]);
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 18;i_11 += 1)
                    {
                        {
                            arr_42 [i_0] [4] [i_0] [i_1] = 147;
                            var_34 = ((155031050 ? (((11154 || ((max((arr_24 [i_0] [i_1] [i_10]), -7497747438133374116)))))) : (min(var_12, ((1 ? -14167 : (arr_25 [i_1] [12] [i_1])))))));
                        }
                    }
                }
            }
        }
    }
    var_35 = -5859227110672096237;
    #pragma endscop
}
