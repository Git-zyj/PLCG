/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(4194303, 4194314));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_12 = (min(var_1, (!95)));
            var_13 = (min(var_13, (((((max((arr_1 [i_0]), (max((arr_2 [i_0 - 1] [10] [7]), var_7))))) ? (max((min((arr_1 [i_0]), var_0)), (!var_6))) : var_4)))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_14 -= (min((max(var_7, var_4)), (min(8, 1302001896883503236))));
            var_15 = (min(var_15, (((((max(17144742176826048379, ((min(1173680228, var_0)))))) ? (var_5 * var_6) : (arr_4 [19]))))));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_8 [19] [i_0] = (arr_0 [18] [18]);
            var_16 = max(((min((arr_4 [i_0 - 1]), (((var_8 && (arr_7 [i_0]))))))), (arr_4 [i_0 - 1]));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                {
                    arr_16 [i_0] [1] [1] [14] [19] [i_0] = (arr_12 [i_0]);
                    var_17 = (min(var_17, (~var_8)));
                    arr_17 [i_6] [i_6] [i_0] = (var_8 || -22);
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                {
                    var_18 *= ((var_5 * (arr_1 [i_0 - 1])));
                    var_19 = (arr_9 [i_0 - 1] [i_0] [i_0 - 1]);
                    arr_20 [i_4] [11] [i_0] [i_0] = ((((arr_12 [i_0]) ? (arr_10 [i_0] [i_0] [i_0 - 1]) : (arr_13 [i_0] [i_4] [10] [i_0]))));
                    arr_21 [16] [16] [i_4] [i_0] [i_0] [i_7] = (((var_7 ? (arr_13 [i_7] [i_7] [18] [i_0]) : (arr_1 [0]))) != ((((-2147483647 - 1) ^ var_10))));
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                {
                    arr_24 [i_0] [12] [i_0] [8] = var_9;

                    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                    {
                        var_20 = (min(var_20, -18446744073705357313));
                        var_21 -= (((arr_25 [i_0 - 1] [i_0] [i_0] [12] [10]) ? 4947 : (arr_15 [i_9] [i_0 - 1] [1] [i_8] [5] [i_9])));
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                    {
                        var_22 ^= (~var_2);
                        arr_30 [i_0] [11] [18] [i_0] = (((arr_7 [i_0]) ? var_2 : (~var_3)));
                    }
                    for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                    {
                        arr_34 [i_0] = (arr_6 [i_0 - 1]);
                        var_23 += (((arr_23 [20] [i_0 - 1] [20]) + var_4));
                        arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = var_7;
                    }
                    var_24 = ((var_6 - (arr_19 [i_0] [i_4] [i_5] [20])));
                }
                for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                {
                    arr_39 [i_0] [i_5] = (((((arr_0 [i_12] [i_12]) ? 24 : -538521647)) - var_1));

                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        arr_44 [i_0] [i_0] [i_0] [20] [i_13] = (((((arr_41 [12] [12] [12] [9] [i_0]) & 3364610805856428323)) - (arr_5 [i_0 - 1])));
                        var_25 += (((!var_7) ? -4087008266 : (arr_36 [i_0 - 1] [i_4] [i_5] [i_13])));
                    }
                }
                arr_45 [i_0] [22] [i_4] |= var_9;
                var_26 -= var_0;
            }
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                arr_48 [i_0] [i_0] [i_4] [i_0] = (arr_1 [i_0]);
                var_27 *= (((arr_5 [i_0 - 1]) ? (arr_5 [i_0 - 1]) : (arr_5 [i_0 - 1])));
            }
            arr_49 [8] [i_4] |= ((arr_38 [i_0] [6] [i_0]) / (arr_33 [i_0 - 1] [i_0] [i_0] [i_0] [i_4]));
        }
        var_28 = (((arr_25 [i_0] [14] [i_0] [i_0] [i_0]) || ((((((var_9 ? 1302001896883503213 : -2701372225297702020))) ? ((min(var_3, 0))) : ((var_8 ? 4194303 : (arr_4 [i_0]))))))));
    }
    #pragma endscop
}
