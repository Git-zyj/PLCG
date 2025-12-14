/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_4 ? 6832873748175461891 : var_15))) ? 96 : ((~(min(var_10, 9223372036854775807))))));
    var_18 = 32596;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [19] = ((~(((!(arr_0 [i_0]))))));
        var_19 = ((var_5 || ((min((arr_1 [i_0]), (arr_1 [i_0]))))));
        arr_3 [i_0] [23] = (min((((~(arr_1 [i_0])))), (max((((-127 ? var_1 : var_11))), (~var_12)))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((arr_0 [i_1]) >> (((arr_1 [i_1]) >> (((arr_5 [i_1]) - 29162))))));
        var_20 = (max(var_20, (((((-7393281480398368042 ? -7393281480398368033 : 7393281480398368041))) ? ((((-(arr_1 [i_1]))))) : (((arr_5 [i_1]) ? (arr_0 [i_1]) : (((var_11 ? (arr_4 [i_1]) : (arr_4 [i_1]))))))))));
        arr_7 [i_1] = (((arr_0 [i_1]) ? (!var_6) : var_5));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_11 [5] [6] = ((+((max((arr_5 [11]), (arr_5 [i_1]))))));
            arr_12 [i_2] = (min((((((var_11 ? var_5 : (arr_5 [i_1])))) ? (arr_1 [i_1]) : ((101 ? var_14 : (arr_8 [i_2] [i_2] [6]))))), ((max(var_16, var_1)))));
            var_21 = (min((max(((3072 ? var_1 : (arr_4 [i_2]))), var_6)), ((((arr_5 [i_1]) ? var_3 : 254)))));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_16 [0] = (((var_8 + 2147483647) >> (((((0 ? (-9223372036854775807 - 1) : 1)) != (arr_13 [i_3] [i_3]))))));
            var_22 = ((!((min(-4, 32621)))));
        }
    }
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        arr_19 [i_4] = ((((min((min((arr_18 [i_4]), var_4)), (arr_1 [i_4 - 2])))) ? ((((var_1 ? var_6 : var_12)) / (((var_3 ? (arr_18 [i_4 - 1]) : var_15))))) : ((((((arr_1 [i_4]) - 1)))))));
        var_23 = (min(var_23, ((max((((arr_17 [i_4 + 1]) / (~var_2))), (((-57 ? 32621 : 9188))))))));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        var_24 = (max(var_24, -258));
                        var_25 = (min(var_25, -var_0));

                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            arr_33 [i_7] [i_6] [i_7] [i_6] [i_5] = (~var_4);
                            var_26 = (min(var_26, ((((arr_24 [i_9]) > (arr_24 [i_5]))))));
                            arr_34 [i_5] [i_6] [i_5] [i_5] [i_5] = ((-127 ^ 7393281480398368018) ? var_15 : (arr_25 [i_6] [i_7] [i_7] [i_7]));
                            var_27 = ((!(arr_28 [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1] [i_8 + 1])));
                            arr_35 [i_6] [i_8] [i_6] [i_6] = (((arr_25 [i_6] [i_6] [21] [i_6]) ? (arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) : -52651));
                        }
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        var_28 = ((((((((var_1 ? (arr_20 [i_6] [i_7]) : var_8))) ? var_4 : (arr_21 [i_5] [i_6])))) ? (((~(arr_21 [i_6] [i_10])))) : ((~(min((arr_29 [10] [i_6] [i_6] [i_6] [24] [i_6]), var_15))))));
                        var_29 = (max(-259, 57491));
                    }
                    var_30 = 6196618731927827890;
                }
            }
        }
    }
    var_31 = (((min(((var_5 ? var_10 : 15268)), ((min(var_11, -21209))))) != ((min((var_9 != var_15), var_10)))));
    #pragma endscop
}
