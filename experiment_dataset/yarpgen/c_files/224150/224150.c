/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = ((((85618421 ? (arr_0 [i_0]) : var_13)) % 85618423));
        var_19 = (min(var_19, var_13));
        arr_2 [i_0] [i_0] = (((242 | 4209348902) ? (arr_1 [i_0]) : var_13));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_20 *= (arr_0 [i_2]);
                arr_7 [i_1] = ((!(arr_0 [i_1])));
                var_21 = 4209348863;
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_10 [i_0] [i_0] [i_1] = ((-(arr_5 [i_1] [i_1] [i_3])));
                arr_11 [i_1] [i_1] [i_3] [i_3] = ((var_13 ? var_1 : (arr_9 [i_1] [i_0])));
                arr_12 [i_1] [i_1] [i_1] = ((-64 ? 98 : 35451));
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
            {
                var_22 = (((arr_9 [i_1] [i_4]) ? (arr_0 [i_0]) : 53));
                arr_15 [i_1] [i_1] [i_4] = (arr_4 [i_1]);

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
                    {
                        var_23 = (!var_6);
                        var_24 = (((((-(arr_4 [i_1])))) >= ((85618421 ? var_0 : -110))));
                    }
                    for (int i_7 = 1; i_7 < 9;i_7 += 1) /* same iter space */
                    {
                        var_25 = var_17;
                        arr_23 [i_1] [i_1] [i_4] [i_5] [i_5] = (((((-67 ? 0 : -55))) ? (arr_22 [i_0] [i_1] [i_4] [i_5] [i_7] [i_7]) : (arr_20 [i_7 + 1] [i_1] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_1] [i_7 - 1])));
                        arr_24 [i_1] [i_5] [i_4] [i_1] [i_1] [i_1] = var_17;
                    }
                    arr_25 [i_1] [i_0] [i_4] [i_5] = (((arr_18 [i_0] [i_1] [i_4] [i_5] [i_5]) > (arr_18 [i_4] [i_1] [i_4] [i_1] [i_5])));
                }
                for (int i_8 = 1; i_8 < 8;i_8 += 1)
                {
                    var_26 += ((((((arr_22 [i_0] [i_1] [i_1] [i_0] [i_4] [i_0]) / (arr_6 [i_0] [i_1] [i_4] [i_0])))) ? 4209348860 : var_7));
                    var_27 = var_14;
                    var_28 ^= ((-(arr_6 [i_0] [i_8 + 1] [i_8 - 1] [i_0])));
                    arr_28 [i_0] [i_1] [i_0] [i_0] = (arr_8 [i_0] [i_1] [i_4] [i_8]);
                }
            }
            for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
            {
                var_29 += (~var_7);
                arr_31 [i_0] [i_1] [i_1] = (((arr_0 [i_0]) ? 97 : (arr_20 [i_9] [i_1] [i_1] [i_1] [i_1] [i_1] [i_0])));
                arr_32 [i_9] [i_1] [i_0] = (6447047826222578529 ? 85618432 : 18446744073709551615);
            }
            var_30 = ((var_14 ? (arr_13 [i_1] [i_1] [i_0] [i_0]) : var_3));
            var_31 = (((arr_4 [i_1]) ? -var_5 : -0));
        }
        arr_33 [i_0] = 436875022;
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        arr_36 [i_10] = (max((max(((var_15 ? 3762420087 : var_9)), (((var_2 ? var_5 : var_3))))), ((((arr_34 [i_10]) <= (((var_10 ? (arr_35 [i_10]) : 98))))))));
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 14;i_12 += 1)
            {
                {
                    arr_44 [i_12] [i_11] [i_10] = (((!-27) ? (((((min((arr_39 [i_10] [i_12]), var_6)) > (((var_4 ? (arr_42 [i_11 - 2] [i_12 - 4] [i_12]) : 4209348876))))))) : (min(var_0, (85618444 % var_11)))));
                    arr_45 [i_12 + 1] [i_11] [i_10] = (85618420 | 1398088755);
                    arr_46 [i_12 - 3] = (((arr_42 [i_12 + 1] [i_11 - 2] [i_12 - 4]) ? (max(-116, ((var_6 ? (arr_40 [i_12] [i_11 - 1]) : 4209348874)))) : ((((max(var_0, (arr_40 [i_12] [i_12 - 2]))))))));
                }
            }
        }
    }
    var_32 = (-(((var_12 >= var_6) ? var_7 : var_10)));
    #pragma endscop
}
