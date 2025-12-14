/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((((-960284975 % 174) ? ((-492269546 ? 45449 : 100)) : (arr_5 [i_0] [i_0]))))));
                var_13 = (max(var_13, ((max((arr_2 [i_0]), ((~(arr_2 [i_0]))))))));
                var_14 |= (min(((~(arr_2 [i_0]))), ((min((arr_0 [i_1]), (arr_0 [i_1]))))));
                var_15 = ((((((var_4 ? 55354 : var_9)))) || (arr_2 [i_1])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_16 += ((var_8 ? (150 >= 784559650) : 105));
                    var_17 = 112;
                    var_18 = ((((var_10 ? 16 : 105)) & -111));
                    arr_9 [i_0] [i_1] = ((187 ? 128 : var_5));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [8] [i_2] [i_2] [8] = (arr_0 [i_0]);
                                var_19 = (max(var_19, 72));
                                arr_19 [i_0] [i_1] [i_0] [i_3] [i_4] [6] [i_0] = ((86 ? 150 : (~140)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((((var_5 ? var_6 : var_11)) ? 96 : var_8))));
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            {
                arr_28 [i_5] [i_6] = (~(min(((67 ? var_5 : var_9)), 377706928)));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_21 = 150;
                            arr_33 [i_5] [i_6] [i_6] [i_7] [i_8] = 138;
                            var_22 = (min(((min((arr_22 [i_5 - 3]), 103))), ((var_7 << (((arr_32 [1] [i_6 + 2] [i_8] [i_8] [i_8] [i_8]) + 1961561046))))));
                            arr_34 [i_8] [i_7] [16] [i_5] [i_5] = (((-(!199))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    var_23 = (max(var_23, ((~(arr_30 [i_9] [i_6 + 1] [i_5 - 1] [i_5 - 1])))));
                    arr_37 [i_5] [i_6 + 2] [i_9] [i_9] = (arr_30 [i_5] [i_5] [i_5] [i_6 + 2]);
                }
                for (int i_10 = 2; i_10 < 14;i_10 += 1)
                {
                    var_24 = -var_11;

                    for (int i_11 = 2; i_11 < 14;i_11 += 1)
                    {
                        var_25 = var_4;
                        arr_43 [i_5] [4] |= (((536866816 & 3951) ? (((3951 / 255) ? var_1 : (min((arr_21 [i_5]), var_11)))) : 34));
                        arr_44 [16] [i_6] [i_10 - 1] [i_11] = ((!75) ? var_0 : (((97 > ((74 ? 118 : 148))))));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        var_26 -= 32768;

                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            var_27 = (min(var_27, (((2147483647 || var_2) | (((arr_35 [i_6] [i_6] [i_12]) ? 3954 : var_11))))));
                            var_28 += (((arr_40 [i_10] [i_13]) ? (arr_40 [i_5] [i_6 + 1]) : 112));
                            var_29 += (((arr_32 [i_5] [i_6 + 2] [i_10] [i_10 - 1] [i_12] [i_6]) > (arr_25 [1] [i_6] [i_10])));
                            var_30 = (61582 & (arr_22 [i_10 + 1]));
                        }
                    }
                }
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    var_31 &= (((((arr_38 [i_5]) ? (arr_39 [i_6 - 2] [i_5 - 3] [i_5]) : (max((arr_21 [i_5]), var_4)))) >> (((((((118 ? var_2 : var_2))) ? (arr_49 [i_5] [i_5 + 3] [i_14] [i_6 - 1] [i_14] [i_6 - 1]) : (129 + 174))) - 2119490798))));
                    var_32 = (max(var_32, (((8064 > 3959) ? (((61594 - 8067) ? ((var_11 ? var_3 : var_9)) : 8064)) : var_9))));
                }
            }
        }
    }
    #pragma endscop
}
