/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 += (arr_2 [i_0] [i_1]);
                    var_18 -= -32858;

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_19 = (min(var_19, ((((31 + 35) ? -10387 : ((32692 ? -121 : -4619781924979733416)))))));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_20 = var_9;
                            var_21 = (min(var_21, (((((max((((arr_10 [i_3] [i_3] [i_3] [i_3]) ? 0 : (arr_12 [i_4]))), (arr_11 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0] [i_0])))) + ((~(arr_8 [i_4] [i_3] [i_1] [i_1] [i_1] [i_0]))))))));
                        }
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        var_22 *= (121 * 4294967295);
                        var_23 = (min(var_23, (((-((-((var_0 ? (arr_4 [i_0] [i_1]) : (arr_7 [i_5] [i_2] [i_1] [i_0]))))))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] = (min(((min((arr_10 [i_0] [4] [i_0] [i_0]), -122))), (arr_0 [i_5])));
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_21 [i_2] [i_2] [i_2] [i_0] |= (arr_12 [i_1]);
                            var_24 = (max(var_24, (((-36 + 2147483647) << (((-4619781924979733424 + 4619781924979733455) - 31))))));
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_25 += ((((min(-36, ((var_10 ? 32695 : -1))))) ? (((-((var_7 | (arr_11 [i_8] [i_8] [i_8] [5] [9] [i_1] [i_0])))))) : (((arr_12 [i_8]) ? ((((arr_7 [i_0] [i_1] [i_6] [i_8]) ? (arr_14 [i_2] [i_2] [i_2]) : (arr_13 [i_0])))) : -4619781924979733416))));
                            arr_24 [i_1] [i_6] [i_2] [i_2] [i_8] = var_4;
                            arr_25 [i_6] [i_6] [i_2] [i_2] [i_1] [i_6] = -4619781924979733389;
                            arr_26 [i_6] [i_1] [i_6] = var_5;
                            arr_27 [i_0] [i_6] [i_6] [i_0] = (((-var_11 ? (min(7675185095115008043, -122) : (arr_16 [i_0] [i_0] [i_0] [i_0])))));
                        }
                        var_26 = (max(var_26, (((~((var_0 << ((((((1 ? var_3 : (arr_20 [i_2] [i_6] [i_6] [6] [i_6]))) + 52)) - 29)))))))));
                    }

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            var_27 += -1;
                            var_28 = (arr_28 [i_0] [i_0] [i_2] [i_9]);
                        }
                        var_29 = ((~(arr_10 [i_0] [i_0] [i_0] [i_0])));
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        var_30 -= (min((((arr_4 [i_2] [i_0]) ? ((((arr_13 [i_2]) ? 6310082765892942952 : var_3))) : var_15)), (min((var_16 - var_15), ((((arr_5 [i_11] [i_2] [i_1] [i_0]) + var_1)))))));

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            arr_38 [i_11] = 65535;
                            arr_39 [10] [i_11] [i_11] [i_2] [i_1] [i_0] [i_0] |= (((var_10 ^ var_9) ? 31 : (((arr_16 [i_1] [i_2] [i_1] [11]) ? (arr_16 [9] [i_2] [9] [i_2]) : -1042074338))));
                            arr_40 [i_12] [i_0] [i_2] [i_0] [i_0] = 8;
                        }
                    }
                    /* vectorizable */
                    for (int i_13 = 2; i_13 < 11;i_13 += 1) /* same iter space */
                    {
                        var_31 = (min(var_31, ((~(~var_15)))));
                        var_32 = (max(var_32, 4294967295));
                        var_33 &= -4294967291;
                        var_34 = arr_13 [i_13 - 2];
                        var_35 -= ((-(~7675185095115008053)));
                    }
                    for (int i_14 = 2; i_14 < 11;i_14 += 1) /* same iter space */
                    {
                        var_36 = ((~((max(10771558978594543573, 804947517)))));
                        arr_47 [i_0] [i_1] [i_2] [i_14] = (((((-(var_0 | 0)))) ? ((32695 ? -122 : 4)) : (((~(arr_30 [i_1] [i_14 + 2] [i_14]))))));
                    }
                    var_37 |= (((2147483647 * 17613323473523536101) <= (arr_41 [i_2])));
                }
            }
        }
    }
    var_38 &= (65535 ? ((var_15 ? -32699 : 0)) : ((31281 ? -var_12 : var_16)));
    var_39 = 0;
    #pragma endscop
}
