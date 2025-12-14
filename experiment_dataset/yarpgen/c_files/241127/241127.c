/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] [i_0] = (((((1 ? (arr_0 [i_0] [i_0]) : (arr_3 [i_1] [i_1]))) != (((var_1 <= (arr_6 [i_0])))))));
                    arr_11 [i_2] = (arr_0 [i_2] [i_2]);
                }
            }
        }
    }
    var_19 = ((((var_16 ? -2 : var_9))));
    var_20 = ((var_1 ? ((((min(var_11, var_17))) ? var_5 : var_2)) : 240));

    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {

        for (int i_4 = 3; i_4 < 21;i_4 += 1)
        {
            arr_16 [i_3] [i_4] [i_4] = ((((max(8677922352932077670, 240))) ? (((-((-(arr_13 [17])))))) : (var_11 * 96)));
            var_21 += 6745201157048487619;
            arr_17 [i_4] [0] = ((((((arr_15 [13] [i_4] [13]) - (arr_15 [i_3 + 2] [i_4] [i_4]))) / var_1)));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 20;i_6 += 1)
                {
                    {
                        var_22 = ((((((arr_18 [18] [i_4] [i_5]) % (arr_19 [i_3])))) - (max((((arr_22 [i_3] [i_4] [i_5] [i_6] [i_5] [i_4]) << (240 - 240))), (arr_21 [i_3] [i_4] [3] [i_4])))));
                        var_23 -= (((arr_23 [18] [i_4] [1] [i_4]) ? -var_7 : (arr_12 [i_3 - 1] [i_4])));
                        var_24 *= (min((arr_12 [6] [3]), (((((-(arr_20 [16] [16] [20])))) - (max((arr_13 [i_3]), (arr_23 [i_3] [i_5] [i_3] [i_3])))))));
                        arr_24 [i_3 + 1] [i_3 + 1] [i_4] = (((arr_12 [i_3 + 2] [18]) ^ var_8));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
        {
            arr_28 [i_3] [i_3 - 1] [i_7 + 1] = ((((((arr_13 [i_7]) ? 1325582484 : (arr_12 [i_3] [i_3])))) ? 6745201157048487619 : (((-(arr_22 [i_3 + 1] [i_3 + 1] [i_7] [i_7 + 1] [i_7] [i_7]))))));
            var_25 = (((arr_13 [10]) & (arr_19 [i_3])));
            arr_29 [i_3] [i_3] [i_3] = (arr_18 [i_3] [16] [i_3]);
        }
        for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
        {
            var_26 = (min((((arr_27 [i_3]) ? (arr_22 [i_3] [i_3] [i_3] [i_3] [13] [i_8]) : 11701542916661063997)), (arr_21 [i_3] [3] [i_3] [i_3])));
            var_27 = (max(var_27, ((((-(!3221739711)))))));
            var_28 = ((((((min(6745201157048487618, (arr_26 [i_3]))) / var_5))) ? (((((arr_32 [i_3] [i_3] [i_8 + 1]) > (arr_26 [i_3]))))) : (max((arr_26 [i_8]), (((arr_18 [i_3] [i_8] [i_3 - 1]) % (arr_19 [i_3])))))));
        }
        arr_34 [i_3] = 470611034759921200;
        var_29 = var_4;
        var_30 = (arr_25 [i_3] [i_3] [i_3]);
    }
    for (int i_9 = 3; i_9 < 9;i_9 += 1) /* same iter space */
    {

        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            var_31 = min(var_6, (((((arr_1 [i_10]) == (arr_33 [i_9 - 2] [i_9 - 2]))) ? (max((arr_15 [i_10] [i_10] [i_9 + 4]), var_3)) : var_5)));
            var_32 = (max(var_32, ((((arr_33 [i_9] [i_9]) ? (arr_8 [1]) : (((((var_5 ? (arr_7 [i_9] [i_10] [i_10]) : 65530))) ? (max(var_14, (arr_8 [10]))) : ((((!(arr_12 [i_9] [i_9]))))))))))));

            for (int i_11 = 2; i_11 < 10;i_11 += 1)
            {
                arr_44 [i_11] &= (((11701542916661064003 && (arr_15 [i_9] [i_11] [i_11]))));
                var_33 = (((+(((arr_1 [i_9]) + 0)))));
                var_34 = (arr_19 [i_9]);
            }
        }
        arr_45 [i_9] = var_3;
        var_35 = (((-(arr_40 [i_9] [6] [i_9]))));
    }
    for (int i_12 = 3; i_12 < 9;i_12 += 1) /* same iter space */
    {
        var_36 = (min(var_36, (arr_32 [i_12 - 3] [i_12 - 3] [i_12 - 3])));
        arr_48 [i_12] = (((((!(arr_32 [19] [19] [19])))) & ((((arr_7 [i_12] [4] [i_12 + 2]) <= (arr_46 [i_12] [i_12]))))));
    }
    /* vectorizable */
    for (int i_13 = 4; i_13 < 16;i_13 += 1)
    {
        var_37 = (max(var_37, (((var_7 ? (1 || 223) : (arr_27 [i_13]))))));
        var_38 = (max(var_38, ((((arr_8 [i_13]) ? (arr_8 [i_13]) : (arr_8 [i_13]))))));
    }
    #pragma endscop
}
