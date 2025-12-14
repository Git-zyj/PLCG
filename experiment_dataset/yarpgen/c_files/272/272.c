/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((min((!var_8), ((var_18 ? var_17 : var_8))))), (min((max(18446744073709551593, 7936)), (~11495)))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((!(arr_0 [i_0 + 1]))) ? ((((arr_1 [i_0 - 2] [i_0 - 2]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 + 1])))) : (max(-104, -1586179976872736150)));
        arr_3 [i_0] = (((((min((arr_0 [i_0]), (arr_0 [i_0])))) ? (arr_0 [i_0]) : (arr_0 [i_0 - 1]))));
        var_21 += (~5088124686729773133);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_8 [i_1] [i_1] &= (((((35546 ? 18446744073709551573 : 0))) ? (((max((arr_5 [11]), (arr_7 [11]))))) : (max((arr_6 [i_1]), (arr_6 [i_1])))));
        var_22 = (min(((-(((arr_5 [i_1]) ? (arr_6 [i_1]) : (arr_7 [i_1]))))), ((-((max((arr_4 [i_1]), (arr_5 [i_1]))))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_23 -= ((128 ? 240 : 61120));
                var_24 = ((-(arr_12 [i_1] [i_1] [i_3])));
                arr_15 [i_1] [i_2] [i_3] = (~128);
            }
            var_25 = (arr_5 [i_1]);
            arr_16 [i_1] [i_2] [i_2] = ((((arr_7 [i_1]) ? (arr_4 [i_1]) : (arr_9 [i_2] [i_2] [i_1]))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_19 [i_4] [i_1] [i_4] = (max(((-(max((arr_13 [i_1] [9] [i_1] [i_1]), (arr_17 [i_1] [i_4]))))), (((max((arr_13 [i_1] [i_1] [13] [i_1]), (arr_7 [i_4])))))));
            arr_20 [i_4] = (arr_12 [5] [i_4] [8]);
            var_26 = (max(var_26, (((-25138 ? (min((arr_11 [i_4] [14] [i_1]), (arr_11 [i_1] [0] [i_4]))) : (arr_5 [i_1]))))));
        }
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            arr_23 [i_5] [i_5] = max(((((~(arr_9 [9] [i_5] [i_5]))))), (((arr_21 [i_5 + 1] [i_1]) ? (arr_5 [i_1]) : (arr_13 [i_1] [i_5] [i_5] [i_1]))));
            var_27 = (max((min((max((arr_11 [13] [i_5] [i_5 + 1]), (arr_10 [i_1] [i_5] [15]))), (((arr_13 [i_1] [i_1] [i_5] [i_5]) ? (arr_13 [i_1] [i_5] [i_1] [i_1]) : (arr_7 [i_5]))))), (arr_7 [i_5])));
            arr_24 [i_5] = ((((((min(10293, 30368))))) ? (arr_21 [i_1] [i_1]) : (arr_17 [i_1] [i_5 - 1])));
            var_28 = (min(var_28, (((max((((arr_6 [i_5]) ? (arr_5 [i_1]) : (arr_22 [i_1] [i_5 - 1] [0]))), (arr_17 [i_1] [i_5])))))));
        }
        arr_25 [0] [i_1] = (max((arr_7 [i_1]), (~4990)));
        arr_26 [14] = ((((max((arr_7 [i_1]), (arr_22 [i_1] [i_1] [8])))) ? ((max((arr_7 [i_1]), (arr_22 [i_1] [i_1] [14])))) : ((min((arr_7 [i_1]), (arr_22 [i_1] [i_1] [4]))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_29 = ((((((arr_28 [5]) ? (arr_27 [i_6] [i_6]) : (arr_27 [i_6] [i_6])))) ? ((((arr_28 [13]) ? (arr_30 [i_6]) : (arr_28 [i_6])))) : (((arr_28 [i_6]) ? (arr_28 [i_6]) : (arr_27 [1] [1])))));
        var_30 = (arr_29 [i_6]);
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_31 = ((min(97, -473528930)));
        var_32 -= max((arr_14 [i_7]), (((arr_14 [i_7]) ? (arr_14 [i_7]) : (arr_14 [i_7]))));
        arr_33 [i_7] = (((~(arr_7 [i_7]))));
    }
    var_33 &= var_9;
    #pragma endscop
}
