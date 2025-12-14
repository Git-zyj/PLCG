/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    var_21 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_22 ^= (arr_3 [i_0] [i_0] [i_0]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    var_23 = (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_2]);
                    var_24 = -11933278610710150935;

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        arr_10 [i_0 - 1] [i_1] [4] [i_3] = 36155;
                        var_25 ^= ((var_15 ? var_12 : (arr_0 [i_0 + 1] [i_1])));
                        var_26 ^= arr_1 [i_0];
                        arr_11 [i_0] [i_1] [i_3] [i_0] = 29381;
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_27 *= (--29366);
                            arr_19 [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_0 - 2] = 5699798996928688883;
                            var_28 = ((-(arr_7 [i_0] [4] [i_0 - 1] [i_1])));
                            var_29 = 36139;
                        }
                        for (int i_6 = 3; i_6 < 10;i_6 += 1)
                        {
                            arr_24 [i_0 + 1] [4] [i_6] = (((arr_0 [i_0 - 1] [i_1]) ? (arr_4 [i_0 - 1]) : ((-9 ? var_18 : 2047))));
                            var_30 = (((((arr_22 [i_0] [i_1] [i_2] [i_4] [i_6 + 2]) ? var_18 : (arr_14 [i_4] [11] [i_6 + 1] [i_4] [0] [i_0]))) / (((var_5 ^ (arr_14 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1]))))));
                        }
                        arr_25 [i_0 - 1] [i_0] [i_1] [i_2] [i_4] [i_4] = 29389;
                    }
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    var_31 = (((((-(63361 & var_9)))) ? ((max(var_7, (arr_20 [i_0] [i_0 - 2] [i_0] [i_0] [2] [i_0 - 2] [1])))) : ((1 >> (1092348807 - 1092348780)))));
                    arr_28 [i_0] [i_0] = (((((-11 ? (arr_18 [i_0] [i_1] [i_0] [i_0 - 2] [i_1]) : (arr_18 [i_0] [i_7] [i_0] [i_0 - 2] [i_7])))) ? var_19 : 2334224156));
                    var_32 *= -var_3;
                    var_33 = (min(var_33, (((((((36147 ? -17 : 36155)))) ? ((((min(var_18, 64954))) ? (arr_8 [i_0 - 2] [i_0 - 2] [i_1] [i_7]) : (((arr_16 [i_7] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]) ? 5 : (arr_12 [i_0] [i_0] [i_7] [i_1]))))) : ((((var_19 || ((min(29389, 22))))))))))));
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    var_34 = -582;
                    var_35 = var_19;
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                {
                    var_36 += (arr_33 [i_0] [i_0] [i_9]);
                    var_37 = (-((((((arr_18 [i_9] [i_1] [i_9] [i_9] [i_9]) ? 1268359279 : (arr_18 [i_0] [i_0] [i_0] [11] [i_0 - 2])))) ? (7761 * 254) : -var_10)));
                    var_38 = (min(var_38, ((max(((min((arr_2 [i_0 + 1] [i_0 - 1]), (arr_2 [i_0 - 2] [i_0 + 1])))), ((-(arr_2 [i_0 - 2] [i_0 - 2]))))))));
                    var_39 = var_3;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            {
                arr_38 [i_10] = (((((((arr_34 [i_10] [i_11]) ? var_1 : var_10)) - var_10)) << (((arr_35 [i_11]) ? (((17487164539830783615 < (arr_36 [i_10])))) : (arr_34 [i_10] [i_11])))));
                var_40 = ((((max((arr_35 [i_10]), -var_7))) ? (((arr_35 [i_10]) ? -251 : (arr_35 [i_11]))) : (min(var_3, var_5))));
                var_41 = ((((((~596) ? 166 : (min(var_9, 3))))) ? (((5208151342548797620 ? -5 : 65533))) : (((((arr_36 [i_10]) > 63360)) ? (arr_35 [i_11]) : -var_11))));
                arr_39 [i_10] [i_10] [i_10] = arr_36 [i_11];
            }
        }
    }
    #pragma endscop
}
