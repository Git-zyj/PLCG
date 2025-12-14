/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_8 ? var_3 : (16979 != 44237))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_15 = (arr_2 [i_0 + 1]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_2 - 1] = (min((((((max(4223082492, (arr_2 [i_0])))) ? (arr_8 [i_0] [i_2 + 4] [i_2] [i_0 - 1]) : -var_7))), var_6));
                    var_16 = ((-(min((((var_2 ? var_6 : 44237))), ((1048575 ? var_1 : var_12))))));
                    arr_10 [i_2] [i_1] = ((((((-(arr_1 [i_0]))))) ? ((((((arr_6 [i_1]) && var_5))) << ((((var_2 ? var_11 : var_3)) - 8641515741944823623)))) : ((~(arr_8 [8] [8] [i_2] [i_2])))));
                    var_17 |= (((arr_7 [i_0 - 1] [i_1] [i_2 + 2]) & (((1 - (arr_5 [i_0 + 1] [i_0 + 1] [0] [6]))))));
                    arr_11 [i_2] = ((~(((arr_1 [i_1]) | (arr_7 [i_0 - 2] [i_0] [i_0 - 2])))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_14 [i_3] [i_3] = (((((((((arr_4 [i_0 - 1]) ? (arr_13 [i_3] [i_3]) : (arr_6 [9])))) ? 1073741823 : (arr_13 [i_3] [i_3])))) || var_4));
            var_18 *= (max(((((min(var_0, 2047))) ? (((arr_0 [i_0 - 1]) ? var_12 : var_6)) : ((max((arr_6 [i_0]), var_0))))), ((8191 ? 0 : 134217727))));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_19 = (max(var_19, ((((((var_5 ^ (arr_15 [i_0 + 1] [i_4] [6])))) ? 52574 : (((arr_4 [i_0 + 1]) ? (((arr_12 [i_0 - 1] [i_4]) ? (arr_8 [i_5] [i_0] [4] [i_0]) : (arr_6 [i_0 - 2]))) : ((3 % (arr_15 [i_5] [3] [i_5]))))))))));
                arr_21 [i_0] [i_0] [i_4] [i_5] = (!44237);
                var_20 += (((arr_4 [1]) ? (max(((-(arr_1 [i_5]))), ((max(var_9, 31999))))) : ((var_9 ? -var_7 : (((15919966755678593731 >= (arr_6 [i_0]))))))));
                arr_22 [i_5] [2] [i_5] = (((((((arr_4 [1]) + 2147483647)) << (((arr_17 [i_4] [i_0 - 1]) - 214)))) + (((arr_4 [6]) % var_4))));
            }
            var_21 = (max(var_21, (((8191 ? (min(var_8, ((max(-524211537, var_10))))) : var_2)))));
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 7;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 10;i_7 += 1)
                {
                    {
                        var_22 = ((-15919966755678593731 ? var_3 : ((min((arr_5 [i_0] [i_6] [i_4] [i_0]), -var_0)))));
                        arr_29 [i_0] [i_4] [i_0] [i_7] [i_7] [i_7 - 2] = (54 >= var_8);
                    }
                }
            }
        }
        var_23 = (min(var_23, ((max(((-(arr_24 [i_0 + 1]))), -var_13)))));

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_24 *= ((((((arr_17 [i_0 - 1] [i_8]) - var_1))) ? (((arr_17 [i_0 + 1] [i_0 + 1]) ? (arr_17 [i_0 - 2] [i_0]) : (arr_17 [i_0 - 2] [i_8]))) : (arr_17 [i_0 - 1] [9])));
            var_25 *= ((((max(((var_3 ? var_7 : var_0)), ((var_9 ? var_0 : (arr_28 [i_0] [8] [i_0] [i_0] [6] [i_8])))))) ? ((~(!var_2))) : (var_4 || var_5)));
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
        {
            var_26 = ((((max(-var_9, (((arr_28 [6] [i_9] [i_0] [i_0] [i_9] [i_0]) ? 248 : (arr_34 [i_9] [6])))))) ? (max((arr_27 [i_0] [i_9] [10] [i_0 - 2] [i_0]), (arr_24 [i_0 - 2]))) : (((((var_8 ? (arr_23 [i_9] [i_9] [i_0]) : (arr_2 [i_0]))))))));
            var_27 = 1984;
            arr_36 [i_0] [10] [i_9] = max((arr_35 [i_9]), (max(((52574 * (arr_7 [i_0] [i_9] [i_9]))), (arr_0 [i_0]))));
        }
        for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
        {
            var_28 += (((((-(((!(arr_13 [1] [1]))))))) ? (arr_35 [10]) : (arr_33 [4])));
            var_29 = (min(var_29, ((((min((min((arr_7 [0] [10] [10]), 192)), 54)) > ((max((arr_20 [i_0] [i_0]), (arr_20 [i_0 - 1] [i_10])))))))));
        }
    }
    var_30 = (13303957032975705611 * var_4);
    #pragma endscop
}
