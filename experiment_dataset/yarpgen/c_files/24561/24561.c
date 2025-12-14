/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_3));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0]) < (min((arr_1 [i_0]), -6496))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_0] = var_10;
                    arr_10 [i_0] [i_0] = (-754557148 ? ((113 ? (((97 ? 65535 : 8610))) : ((-8635314532326205682 / (arr_6 [i_0] [i_0] [3]))))) : (((((28121 && (arr_7 [i_0] [16] [i_0]))) ? 64 : -1))));
                    arr_11 [i_0] = ((((((arr_8 [2] [i_1] [i_0] [18]) ? (arr_0 [i_1]) : (arr_0 [i_0 - 1])))) ? (max((arr_0 [i_0 - 3]), 0)) : ((max((arr_0 [i_2]), (arr_0 [i_0 + 2]))))));
                }
            }
        }
        arr_12 [i_0] [16] |= var_2;
        arr_13 [8] &= (((+-1) ? (((((min((arr_1 [14]), (arr_7 [i_0] [6] [16])))) ? 1952229091 : ((((arr_8 [i_0] [i_0] [2] [i_0]) > (arr_0 [i_0]))))))) : 3465386956007388452));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_17 [8] = (((-9223372036854775807 - 1) ? 2136151347 : 0));
        var_12 += 8165;
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_13 = (min(var_13, ((((arr_1 [i_4]) ? (((((-183311605 ? (arr_8 [i_4] [i_4] [i_4] [i_4]) : 9787))) ? 1099511365632 : var_1)) : (arr_5 [i_4] [i_4] [16]))))));
        arr_20 [i_4] |= ((((((arr_8 [i_4] [i_4] [i_4] [i_4]) ? (var_5 || var_3) : 13810))) ? (arr_2 [i_4]) : 4260527736312210061));
    }
    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {

            for (int i_7 = 4; i_7 < 11;i_7 += 1)
            {
                arr_27 [i_5] [i_6] [i_5] [i_5] = ((-(arr_18 [i_6] [i_6])));
                var_14 = (min(var_14, ((((arr_5 [17] [i_6] [17]) / (arr_18 [i_6] [i_6]))))));
            }
            for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
            {

                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    arr_32 [i_9] [i_9] [i_9] [i_5] = ((var_3 ? ((((var_1 || (arr_30 [i_5]))))) : (arr_19 [i_5])));
                    var_15 -= ((arr_0 [i_5 - 1]) > (arr_26 [i_5] [i_6] [i_5 - 2] [i_9]));
                    arr_33 [i_5] [i_5] [i_5] [i_5] = (arr_24 [1] [i_5]);
                }
                var_16 = (arr_15 [i_5 - 1]);
            }
            for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
            {
                var_17 = (max(var_17, 722224260));
                var_18 = (((((-(arr_22 [i_5])))) > (arr_1 [i_6])));
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    {
                        arr_42 [i_5] [i_5] [i_5] [i_5] [i_5] [7] = (arr_7 [i_5] [i_5 - 1] [i_5]);
                        arr_43 [i_5] [13] [i_5] [13] = ((!(arr_4 [i_5 - 1] [i_5 - 1])));
                        var_19 = (min(var_19, ((((((var_5 ? (arr_22 [i_11]) : (arr_21 [i_11])))) ? (arr_39 [i_5] [i_5] [i_11] [i_12] [i_12] [i_12]) : (arr_0 [i_5 - 1]))))));
                        arr_44 [5] [i_6] [1] [12] [i_5] = 58400;
                    }
                }
            }
            var_20 = (arr_34 [10]);
            arr_45 [i_5] [i_5] [1] = (arr_1 [i_5]);
            arr_46 [i_6] |= (((arr_14 [i_5]) ? (arr_29 [12] [12] [i_6] [i_5 + 1]) : (arr_2 [i_5])));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            var_21 = ((35 ? (arr_18 [i_5 - 2] [i_13]) : (arr_8 [i_5] [1] [i_5] [i_5 - 1])));
            arr_51 [i_13] [i_5] = ((arr_35 [i_13] [i_5]) >= 0);
        }
        var_22 &= (arr_30 [i_5]);
        arr_52 [i_5] = (min((((!(arr_31 [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_5])))), (max(var_4, (arr_31 [i_5 - 2] [i_5 - 1] [i_5 + 1] [i_5])))));
    }
    var_23 = var_9;
    #pragma endscop
}
