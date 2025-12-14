/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = ((!((!(arr_5 [i_1 + 2])))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_12 *= ((((min(59901, 1)))) | (min((arr_1 [i_1 - 2] [i_1 + 4]), ((~(arr_1 [i_0] [8]))))));
                        arr_8 [i_3] [i_3] [i_3] [i_3] = 1;
                    }

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_13 = ((+(((arr_9 [i_1 + 2] [i_1 + 2]) ? 6846453149318534154 : (arr_9 [i_0] [6])))));
                        var_14 -= (min(((11600290924391017462 * (((33175 ? (arr_3 [i_1] [i_4]) : (arr_6 [i_4] [i_4] [i_4] [i_4])))))), (((!(arr_3 [i_1] [i_4]))))));
                        var_15 = ((max(29782, 514497856)) / (arr_0 [i_2] [i_4]));
                    }
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        var_16 = (max(var_16, (((!((max((min((arr_11 [i_2]), (arr_7 [i_2] [i_5]))), (arr_5 [0])))))))));

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            var_17 = 1330550406;
                            arr_15 [i_0] [i_1] [i_0] [i_5] [i_6 + 1] = -25;
                        }
                        for (int i_7 = 3; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            arr_18 [i_7] = (min((((((var_1 ? (arr_17 [i_0] [i_0] [i_0] [i_0] [7] [i_0]) : (arr_13 [i_0] [i_0] [i_0] [i_5] [i_5] [i_7])))) ? (((arr_11 [i_0]) ? 6846453149318534157 : var_2)) : 6)), ((var_6 ? 6846453149318534154 : (((((arr_16 [i_7]) || (arr_5 [i_0])))))))));
                            var_18 = (min(75, ((((arr_13 [i_0] [i_5 + 1] [i_5 + 1] [i_7 - 1] [i_1 + 4] [i_1]) && ((!(arr_10 [i_0] [i_7] [i_7] [i_2] [i_5 - 1] [i_7]))))))));
                        }
                        for (int i_8 = 3; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            var_19 = (max(var_19, ((max(var_9, (arr_0 [i_0] [i_5 - 3]))))));
                            arr_22 [i_1] [2] [i_2] [i_2] [i_8] |= ((((!(arr_1 [i_5 - 3] [i_5 - 3]))) ? ((((((arr_1 [i_1] [i_2]) ? (arr_7 [i_1] [i_1]) : var_0))) ? (var_5 | 1) : 1)) : (!var_3)));
                            var_20 = ((829806764 ? 27653 : ((min(-115, 1)))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 15;i_10 += 1)
                        {
                            {
                                arr_29 [i_0] = (((max(((min(-33, 10304))), 0)) > -1));
                                arr_30 [i_10] [0] [i_2] [i_0] [i_0] = ((-3056 ? (arr_13 [i_0] [i_1] [i_2] [i_9] [i_9] [i_10 - 1]) : (min(11600290924391017482, 1))));
                                var_21 = (!65535);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 16;i_12 += 1)
        {
            {
                arr_35 [16] [i_11] [i_11] = ((((var_3 <= ((((!(arr_17 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12] [i_12] [i_12 - 1]))))))) ? (max((arr_20 [i_11] [i_11] [i_12 - 1]), ((-32751 ? -1572836161 : (arr_27 [i_11] [i_11] [i_11] [i_11] [i_12 + 1] [i_12] [8]))))) : (min(45365, (((arr_28 [i_11] [i_11] [i_11] [i_12] [i_12] [i_12 - 1] [i_12]) ? 6186 : (arr_0 [i_11] [i_11])))))));
                var_22 = ((!(arr_1 [i_12 + 1] [i_12])));
            }
        }
    }
    var_23 = (((((var_5 ? var_7 : var_9))) * var_3));
    var_24 = ((var_4 ? var_7 : (((((min(24395, 1)))) ^ ((8905560694273727626 << (var_2 - 120)))))));
    #pragma endscop
}
