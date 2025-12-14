/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-((min(var_5, (min(var_6, var_15)))))));

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                var_21 = ((min((arr_6 [i_0] [i_2 - 3] [i_2] [i_0 - 2]), (arr_6 [i_0] [i_2 - 2] [1] [i_0 - 4]))));
                var_22 = ((~(((arr_8 [i_0] [i_0] [i_0] [i_2]) ? (((!(arr_3 [i_1])))) : (arr_1 [i_0 - 1])))));
                var_23 = (max(var_23, (((max((arr_7 [i_0 + 2] [i_0 - 4] [i_2 - 3]), (arr_5 [i_0 - 2] [i_2 - 2] [i_1])))))));
                var_24 = min((max(((~(arr_3 [i_0]))), ((max((arr_4 [i_1] [i_1] [i_2]), (arr_1 [12])))))), (arr_3 [0]));
                arr_9 [i_2] [i_1] [i_2] = ((arr_8 [i_2] [i_2 - 4] [i_2 + 1] [i_2 - 4]) ? (((arr_4 [i_2] [i_2 - 4] [i_2 - 4]) * (arr_5 [i_2] [i_2 - 1] [i_2]))) : (arr_6 [5] [i_2 - 4] [i_2 - 4] [i_2]));
            }
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_25 &= (arr_3 [i_0]);

                /* vectorizable */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_26 = ((((((arr_0 [i_0]) >> (((arr_8 [i_4] [i_3] [i_1] [i_0]) - 156))))) / (arr_11 [4] [i_0 + 2] [12] [i_4])));
                    arr_14 [0] [0] [i_3] [i_4] = (arr_1 [i_3]);
                    var_27 = ((~(arr_11 [i_0] [i_0] [i_0] [i_4])));
                    var_28 = (min(var_28, (((((-(arr_2 [i_0 - 4]))) % (((((arr_10 [i_4]) < (arr_13 [5] [i_1]))))))))));
                }
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 4; i_6 < 11;i_6 += 1)
                {
                    arr_22 [i_6] [i_5] [i_1] = min((min((arr_19 [i_0] [i_0]), (arr_19 [1] [i_5]))), (arr_0 [i_0 - 4]));
                    var_29 = (min(var_11, (((((var_15 >> (((arr_10 [i_0]) + 91256650))))) + (((arr_18 [i_5] [i_5] [i_5]) ? (arr_16 [i_0] [i_5] [i_6]) : var_9))))));
                }
                var_30 &= ((!((min(((((arr_2 [i_0]) || (arr_15 [7] [i_1] [i_1] [i_1])))), (max((arr_0 [i_1]), (arr_3 [i_0 - 3]))))))));
                arr_23 [i_1] [i_0] [i_1] = (min(var_1, ((min((min((arr_19 [i_0] [i_1]), var_14)), (((var_11 == (arr_8 [i_0] [i_1] [i_5] [6])))))))));
                var_31 = ((+((~(min((arr_13 [i_5] [i_5]), (arr_20 [9] [i_1] [i_1] [i_1] [i_0] [9])))))));
            }
            for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
            {
                var_32 = ((~(arr_10 [i_0 - 2])));
                var_33 = ((var_14 && (((+((min((arr_13 [i_7] [6]), var_3))))))));
            }
            var_34 &= (min((~var_5), ((min(((~(arr_10 [i_1]))), (arr_15 [i_0 - 3] [i_0] [i_0] [i_1]))))));
            var_35 = ((((~(arr_7 [i_1] [i_0] [i_1]))) ^ ((((max((arr_25 [i_1] [i_1] [i_0]), (arr_19 [i_0] [1])))) ? -var_10 : ((var_9 & (arr_10 [0])))))));
        }
        var_36 = ((~(min((arr_7 [i_0] [i_0 - 2] [i_0 - 3]), (arr_7 [i_0] [i_0 + 1] [i_0 + 1])))));

        for (int i_8 = 2; i_8 < 10;i_8 += 1) /* same iter space */
        {
            var_37 = ((((((arr_26 [i_0] [i_8]) || ((min(var_17, (arr_27 [i_8 - 1] [i_8] [i_8]))))))) < (min((arr_24 [i_0 - 1] [i_0 - 3] [i_8 + 2] [i_8 + 1]), ((-(arr_1 [i_8])))))));
            var_38 = (((arr_15 [i_0] [i_8] [i_0] [9]) ? (min(((-(arr_4 [i_8] [i_0 - 3] [i_0 - 3]))), ((((arr_5 [i_0] [i_0] [i_8]) == (arr_15 [i_0] [i_8] [i_8] [i_8])))))) : (((((arr_15 [i_0] [i_8 + 3] [i_8] [i_8]) - var_7)) + -var_6))));
            arr_28 [i_8] [i_8] [i_8] = ((-(min((((arr_7 [i_0] [i_0] [i_8]) ? var_11 : (arr_0 [i_0]))), (((arr_12 [i_0 - 1] [i_0] [i_0] [i_8]) / var_6))))));
            var_39 = min((((((arr_5 [i_8] [i_0] [i_8]) & var_11)))), ((~(arr_21 [i_0 + 2] [i_8] [i_8 + 2] [i_8 + 2]))));
        }
        for (int i_9 = 2; i_9 < 10;i_9 += 1) /* same iter space */
        {
            var_40 *= (-(((!((((arr_7 [i_0 - 4] [i_0] [i_9]) ? (arr_20 [i_9] [10] [i_9] [i_0] [i_0] [i_0 + 1]) : var_17)))))));
            var_41 = (min(var_9, ((((!(arr_29 [i_0] [i_0]))) ? (min(var_7, var_0)) : ((((arr_16 [9] [i_9 - 1] [8]) ? (arr_2 [i_0]) : var_1)))))));
            arr_33 [i_0] |= (((((arr_7 [i_0 + 2] [i_0] [i_0 - 3]) == (arr_3 [i_0 + 1]))) ? (((arr_7 [i_0 + 2] [10] [i_0 + 2]) % (arr_7 [i_0 - 2] [i_0 + 2] [i_0 + 2]))) : (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 2])));
            var_42 ^= (((((arr_13 [1] [i_0]) ? (arr_32 [i_9]) : var_10))));
        }
    }
    var_43 = (((((max(var_19, var_12)) ? (!var_5) : var_18))));
    #pragma endscop
}
