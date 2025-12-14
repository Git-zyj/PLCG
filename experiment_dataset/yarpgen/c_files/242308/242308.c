/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = var_1;

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_19 = (((max(var_11, 64))) && 16777088);

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_2] = ((min(((min(var_5, 4332))), 16777102)));
                        var_20 = (min(var_20, ((max(-4278190208, (arr_11 [8] [i_2 - 1] [i_2] [i_2]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_21 -= ((~(arr_1 [i_0] [i_1 - 2])));
                        var_22 -= (arr_5 [i_2 - 1]);
                    }
                    for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_2] [i_1] [i_0] [i_2] [i_2] = ((-4278190207 ? (arr_7 [i_0] [i_1] [i_2] [i_5]) : (((((max((arr_4 [i_0] [i_0]), 4))) ? var_9 : (arr_1 [i_2 + 2] [i_1 - 1]))))));
                        var_23 = ((715601878 ? (((arr_18 [15] [15] [1] [i_1 + 2] [i_2] [6]) ^ (min(35138, 4278190208)))) : (arr_0 [i_1] [15])));
                        arr_20 [i_0] [i_0] [i_0] [i_2] = ((((((max(var_1, (arr_9 [i_5] [i_2] [i_1 + 1] [i_0])))))) ? (((((-24 && (arr_8 [i_2] [i_2 + 1] [15] [i_5]))) ? (arr_12 [i_2] [i_5] [i_2] [i_0] [i_2]) : (arr_10 [i_0] [4] [4] [i_0] [i_0] [1])))) : (arr_7 [i_5] [i_2] [i_2] [i_0])));
                        var_24 += 16777079;
                        var_25 = (max(var_25, (arr_8 [10] [i_1] [6] [i_0])));
                    }
                    var_26 = (min(var_26, (arr_16 [i_0] [i_0] [i_2] [i_0] [2] [i_2])));
                }
                arr_21 [8] = ((((((arr_9 [1] [i_1] [i_1 - 1] [i_1 + 1]) ? (arr_9 [i_0] [i_1] [i_1 - 3] [i_1 - 2]) : (arr_9 [i_0] [i_0] [i_1 - 2] [i_1 + 1])))) % (min((((4278190232 != (arr_10 [3] [i_1] [i_1] [13] [i_0] [i_1])))), (min(16777089, (arr_12 [i_0] [i_1] [i_1 - 1] [i_0] [16])))))));
            }
        }
    }
    var_27 = (max(var_27, ((max(var_13, -var_2)))));

    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_28 = (((arr_23 [i_6] [i_6]) || ((max(20911, 4278190207)))));
        var_29 ^= ((((min(27953, (arr_23 [i_6] [i_6])))) ? ((min((((arr_22 [i_6] [i_6]) <= var_4)), (((arr_22 [i_6] [i_6]) || (arr_23 [i_6] [20])))))) : var_9));
    }

    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_30 = (min(((max((arr_4 [i_7] [i_7]), 187))), ((var_3 ? var_10 : ((3584 ? -27953 : 10866463011070334439))))));

        for (int i_8 = 3; i_8 < 9;i_8 += 1)
        {
            var_31 = (arr_4 [i_7] [i_7]);
            arr_30 [i_7] [11] = 15190;
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            arr_34 [i_9] = max((!-27954), (arr_32 [i_7] [i_9]));
            var_32 = ((-(max((arr_23 [i_7] [i_9]), 55394))));
        }
        arr_35 [i_7] &= var_2;
    }

    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
    {
        arr_39 [i_10] [i_10] = (arr_16 [i_10] [i_10] [i_10] [1] [i_10] [i_10]);
        arr_40 [i_10] = (min((((-31 && ((((-27953 + 2147483647) >> (10130 - 10130))))))), (((arr_37 [i_10] [i_10]) / var_6))));

        for (int i_11 = 3; i_11 < 9;i_11 += 1)
        {
            var_33 = (max(((~((max(var_0, var_5))))), (var_3 + var_5)));
            arr_45 [8] [i_10] = (arr_22 [i_10] [i_11 - 3]);
            var_34 = 0;

            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                var_35 -= var_7;
                var_36 |= ((min((max(11537984769147617750, 112), ((min(14661, var_10)))))));
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 9;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        {
                            var_37 = (-17 * 65);
                            arr_54 [i_12] [i_12] &= (((((max((arr_25 [i_12]), 0)))) ^ 128));
                            var_38 = (max(var_38, (((+((max(((((arr_9 [i_10] [i_11] [i_10] [i_12]) <= var_7))), 9470))))))));
                            arr_55 [i_10] [i_11] [i_11] [i_13 + 1] [i_11] = (arr_3 [i_11 - 2]);
                        }
                    }
                }
            }
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                var_39 = (13673 ? var_17 : 1);
                var_40 = (min(var_40, (((((((max((arr_28 [i_10] [i_11]), (arr_13 [i_11 - 2] [i_10])))) ? 0 : var_5)) - 1)))));
                arr_59 [i_10] [i_11] [i_10] = (((arr_9 [i_15] [i_11 - 3] [i_10] [i_10]) % ((max(((min((arr_4 [i_11] [i_10]), 119))), (arr_27 [i_10] [i_10]))))));
            }
        }
    }
    for (int i_16 = 0; i_16 < 10;i_16 += 1) /* same iter space */
    {
        var_41 *= ((((((((arr_57 [i_16] [2] [i_16]) / (arr_43 [2] [i_16])))) ? ((var_17 ? var_15 : (arr_10 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))) : (arr_26 [i_16] [i_16] [i_16]))) * (((4 ? ((max(-120, 0))) : 0)))));
        var_42 = (arr_31 [i_16] [i_16] [i_16]);
        arr_64 [i_16] = (arr_41 [i_16] [i_16]);
        var_43 = (max(var_12, (~23)));
        arr_65 [i_16] [i_16] = (((((max(1, 1)))) * (((arr_38 [4]) ? (var_18 * -20) : (var_13 / var_8)))));
    }
    #pragma endscop
}
