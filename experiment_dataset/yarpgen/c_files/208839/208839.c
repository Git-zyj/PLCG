/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((-var_6 + (min(4034324756, 30891))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        var_11 = var_4;
                        var_12 = ((!(((260642539 ? 1 : -1)))));
                        var_13 = (arr_5 [i_0] [i_1] [12]);
                        arr_9 [i_0] = (((((-10 ^ (arr_4 [i_3] [i_1])))) ? (260642545 > 72) : 10));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 2; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            arr_14 [i_1] [i_1] [i_1] [i_4] [i_1] [4] = (((arr_4 [i_5 + 1] [i_5 - 2]) && (arr_4 [i_5 + 3] [i_5 - 1])));
                            var_14 |= var_6;
                            var_15 -= (-26 && 268435456);
                            arr_15 [i_0] [i_1] [i_1] [i_0] [i_5 - 1] = ((var_9 ? (var_2 + var_5) : (((arr_13 [i_0] [i_1] [i_2] [i_5]) ^ (arr_2 [i_0] [i_1] [i_2])))));
                            var_16 |= ((-(~var_0)));
                        }
                        for (int i_6 = 2; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] = (((arr_12 [i_6 - 2] [i_6] [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6]) ? 4194303 : (arr_11 [i_6 - 2] [i_6] [i_6 - 2] [i_6] [i_6])));
                            arr_21 [i_0] [i_0] [i_2] [i_0] [i_6] [i_0] [i_2] = var_5;
                            arr_22 [i_6] [i_0] [i_2] [i_1] [i_0] = (((arr_8 [i_0] [i_0] [i_6 + 2] [i_6 + 2]) ? 30820 : (var_6 + -1204612662)));
                            var_17 = var_8;
                        }
                        var_18 = -1;
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_0] = (!(var_2 ^ var_6));
                        var_19 = (arr_2 [i_1] [i_2] [i_7]);
                        arr_27 [i_1] = 9489671017558665420;
                    }
                    arr_28 [i_0] [i_0] [6] = -var_2;
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_20 |= ((-((-((((arr_7 [i_8] [19] [i_1] [i_1] [i_0]) && 260642545)))))));

                    for (int i_9 = 1; i_9 < 21;i_9 += 1)
                    {
                        arr_36 [i_9] [i_1] [2] [i_1] [i_8] [i_9 + 3] = min(((((967687126 && (arr_23 [i_0] [i_0] [i_0] [i_1] [21] [i_0]))) ? (arr_33 [i_9 - 1] [i_9] [i_9 - 1]) : (48 ^ 34717))), -1);
                        arr_37 [i_8] [i_0] [i_0] [i_8] [i_0] [17] = arr_2 [i_1] [i_0] [i_0];
                        var_21 = 258048;
                    }
                    arr_38 [i_8] [i_8] [i_8] [i_0] = 1;
                }
                var_22 = 4290772993;
                var_23 = 24132;
            }
        }
    }

    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        arr_43 [i_10] = (max((!var_9), ((((199675889 ? 16854785589894420150 : 4034324756)) * (!-30891)))));
        var_24 = (arr_1 [i_10]);
        arr_44 [8] = (arr_8 [i_10] [i_10] [i_10] [i_10]);

        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            var_25 = (min(var_25, (((((min((!60), (~-40)))) ^ 1)))));
            arr_49 [i_10] [i_11] [i_10] = ((arr_46 [i_10] [i_10]) ? ((((var_3 || (arr_24 [19] [19] [i_11] [i_11]))))) : 2834799141);

            /* vectorizable */
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                var_26 = ((var_5 ? var_7 : (arr_2 [i_10] [i_11] [i_12])));

                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    arr_56 [i_10] [i_13] [i_12] = ((var_7 || (arr_46 [i_10] [i_12])));
                    arr_57 [i_13] [i_13] = var_3;
                }
                for (int i_14 = 1; i_14 < 9;i_14 += 1)
                {
                    arr_61 [i_10] [2] [i_10] [1] [i_14] [i_10] = 199675889;
                    arr_62 [i_14] = var_4;
                }
            }
            arr_63 [i_10] = ((~(var_4 + -91)));
        }
    }
    for (int i_15 = 0; i_15 < 19;i_15 += 1)
    {
        var_27 = ((!((min((arr_6 [i_15] [i_15] [i_15]), 199675880)))));
        var_28 = (arr_0 [i_15] [i_15]);
        var_29 &= (max((((-(arr_17 [i_15] [i_15] [i_15] [i_15])))), (((arr_0 [i_15] [i_15]) - (arr_25 [i_15] [i_15] [i_15] [i_15])))));
        arr_66 [i_15] [i_15] = (arr_35 [i_15]);
    }
    for (int i_16 = 2; i_16 < 19;i_16 += 1)
    {
        arr_70 [i_16] [i_16] = ((var_3 ? (((arr_35 [i_16]) ? (arr_33 [i_16] [i_16 - 2] [i_16 - 2]) : (((((arr_5 [i_16] [i_16] [i_16]) > var_4)))))) : (arr_5 [21] [21] [i_16])));
        var_30 = (min(var_30, (((((min(((-7799232377839287547 ? (arr_3 [i_16] [i_16] [i_16 + 1]) : 4290772984)), -25323))) ? 4290772974 : ((((!(arr_25 [22] [22] [i_16 - 2] [18]))))))))));
    }
    var_31 = (max(-7790639113291444461, 8957073056150886196));
    var_32 = ((!(~var_0)));
    #pragma endscop
}
