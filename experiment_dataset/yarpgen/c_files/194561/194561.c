/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_18 = ((!((((arr_1 [i_0 + 2]) ? (arr_1 [i_0]) : var_12)))));
        var_19 &= ((((1 ? 1 : 1)) > (1 / 1)));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 = 0;
            var_21 = (max(17, 25200));
        }
        var_22 = (((arr_4 [i_1] [i_1]) <= ((~(var_11 % var_17)))));

        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            var_23 = 0;
            var_24 = ((var_3 ? (2039163835 | -6948891554224502967) : (((min(((!(arr_9 [i_1 - 1] [i_3] [i_1 - 1]))), ((!(arr_10 [i_1] [i_3] [i_1])))))))));

            for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    var_25 = ((!(arr_15 [i_1])));
                    var_26 = (max(((max(var_12, ((max((arr_3 [i_1 + 1]), (arr_3 [11]))))))), (((arr_18 [i_1 + 1] [i_1 + 1]) ? (arr_9 [i_3 + 1] [i_3] [i_1 - 1]) : (arr_12 [15])))));
                    var_27 = ((1 ? 3694063448 : 1));
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                {
                    var_28 = ((-var_15 ? (arr_22 [i_3 + 1] [1] [i_6] [i_6] [i_1 - 1] [4]) : ((max((arr_22 [i_3 - 1] [i_3] [i_4] [i_6] [i_1 + 2] [i_1]), (arr_22 [i_3 - 1] [i_3] [i_4] [0] [i_1 + 1] [2]))))));
                    var_29 = -96288688933228621;
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                {
                    var_30 = (arr_13 [i_3] [5] [i_3] [5]);
                    var_31 = var_8;
                }
                var_32 = (max((min(3, 1)), (((!(arr_15 [i_1 + 1]))))));
                var_33 = 45;
                var_34 = ((arr_13 [14] [12] [i_3] [i_4]) >> (((max((((var_5 ? (arr_10 [i_1] [13] [i_1]) : -25203))), (arr_14 [i_1 + 1] [i_1] [i_1] [12]))) - 4229706610)));
            }
            for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
            {
                var_35 = (max(((((((arr_6 [i_3] [i_3]) ? var_8 : var_17))) ? 0 : 3810156940)), (((var_1 / (arr_21 [i_1 - 1] [i_3 + 1] [i_8] [5]))))));
                var_36 = (((-32767 - 1) % 1));
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                var_37 = var_11;
                var_38 = (((arr_28 [i_3 - 1] [i_1 + 2] [8]) == (((arr_14 [i_1] [i_3 - 1] [i_1] [i_1 + 1]) ? var_13 : (arr_14 [i_1] [i_3 - 1] [i_3 - 1] [i_1 + 1])))));
            }
        }
        var_39 = (min((min(56358, var_6)), ((max((((arr_10 [i_1] [10] [3]) ^ var_11)), (min(var_11, 0)))))));
        var_40 &= (((((var_16 / (arr_26 [i_1 - 1] [i_1] [i_1 + 2] [i_1 - 1])))) ? (((var_4 ? var_5 : (arr_28 [i_1 + 2] [i_1 + 2] [i_1])))) : (arr_28 [i_1] [i_1 - 1] [i_1 + 2])));
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 21;i_10 += 1)
    {
        var_41 = (arr_31 [i_10 - 1] [i_10 + 2]);
        var_42 = (((var_11 ? (arr_32 [i_10]) : var_12)));
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        var_43 = ((max(var_9, (arr_5 [i_11]))));
        var_44 = 16;
    }
    var_45 = (min(var_45, var_15));
    #pragma endscop
}
