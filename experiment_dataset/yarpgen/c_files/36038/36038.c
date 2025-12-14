/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = var_7;
    var_14 = ((((((var_6 ^ var_3) ? ((var_7 ? var_4 : 17238)) : ((min(var_3, var_0)))))) && ((!(!var_5)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = (min(var_15, (min(((min(15244, (arr_1 [i_0] [i_0])))), (max((arr_0 [i_0]), (arr_0 [i_0])))))));
        arr_2 [i_0] &= (!18610);

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            var_16 += ((+(((arr_4 [i_0]) / 1))));
            var_17 = -818261966;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_18 = ((((max(4006453910, (((-(arr_3 [i_0] [i_1] [22]))))))) ? (max((arr_7 [i_0]), ((50292 ? (arr_5 [i_2] [i_1] [4]) : (arr_8 [11] [11] [i_2 - 1]))))) : (arr_10 [17] [8] [8] [i_3])));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_19 = (max((max(((8605 / (arr_11 [1] [i_1] [i_2] [i_3] [i_4]))), ((max(1, (arr_5 [i_0] [i_3] [i_0])))))), (arr_10 [13] [i_2] [13] [i_4])));
                            arr_14 [i_4] [i_3] [i_2 + 1] [i_1] [i_0] = (((((~(arr_3 [1] [i_1] [i_2 + 1])))) ? (arr_13 [6] [16]) : (arr_8 [i_1] [4] [i_4])));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_17 [13] [i_0] [i_1] [i_2] [i_3] [9] = (max(27, (((!((!(arr_4 [i_1]))))))));
                            arr_18 [i_5] [i_1] [i_2] [i_0] [i_5] [i_3] [i_2] = (max((max((arr_16 [i_1] [i_1] [i_1] [i_3] [i_5] [8] [i_2 - 1]), ((min((arr_10 [i_5] [i_2 - 1] [i_2 - 1] [i_1]), (arr_11 [i_0] [i_1] [i_2] [i_3] [i_0])))))), (((!(!4))))));
                        }
                        arr_19 [i_0] [i_1] [i_0] [i_2] [i_0] = (((~(arr_6 [i_0] [i_0]))));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
        {
            arr_22 [i_0] [i_6] [i_0] = (!((((arr_0 [i_0]) ? 1 : ((1 >> (arr_21 [1] [i_6] [1])))))));
            var_20 = ((~((((min((arr_6 [12] [12]), (arr_1 [i_0] [i_0])))) ? ((min((arr_20 [i_0] [i_6]), (arr_10 [i_0] [i_0] [i_0] [i_0])))) : (arr_13 [i_6] [i_0])))));
        }
        for (int i_7 = 1; i_7 < 24;i_7 += 1)
        {
            arr_25 [i_7] [i_0] &= (arr_13 [21] [21]);
            arr_26 [i_7] [16] [i_7] = ((max(18615, 1)));
            var_21 = (arr_15 [2] [i_7 - 1]);
        }

        for (int i_8 = 3; i_8 < 22;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                arr_32 [i_9] [i_8] &= ((!((min(-46926, (((!(arr_15 [i_0] [i_0])))))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        {
                            var_22 = (max(var_22, ((max(((~(arr_16 [17] [17] [i_8 - 2] [i_8 + 2] [i_8] [i_8] [i_8 + 1]))), (min((min((arr_28 [i_0]), 1)), (arr_9 [i_0] [i_0] [i_0] [i_0]))))))));
                            var_23 = (max(((min((min((arr_0 [i_0]), (arr_33 [i_0] [i_8] [i_8] [i_10]))), (((arr_3 [i_0] [i_0] [i_10]) << (((arr_16 [i_9] [i_10] [i_0] [i_10] [i_9] [i_8] [i_0]) - 5744494063300188704))))))), ((((((arr_9 [i_9] [3] [3] [3]) ? 68169720922112 : (arr_10 [i_11] [i_8] [i_8 + 1] [i_10])))) ? (max((arr_6 [i_9] [i_9]), (arr_0 [i_10]))) : ((max((arr_1 [i_8] [7]), (arr_3 [i_8] [i_9] [i_8]))))))));
                            var_24 = (min(var_24, (((~(((~50292) ? (arr_12 [i_0] [1] [1] [10] [i_11] [i_11] [i_9]) : (((15244 ? (arr_12 [i_11] [2] [i_11] [i_11] [7] [i_11] [i_11]) : (arr_23 [i_0] [i_0])))))))))));
                            var_25 = (min(var_25, (((-(arr_31 [i_0] [i_8 - 2] [i_10] [i_11]))))));
                            arr_37 [i_11] [i_11] [i_11] = ((~((-((-(arr_35 [i_0] [i_8] [i_9] [i_0] [i_11])))))));
                        }
                    }
                }
            }
            arr_38 [i_8] [1] &= ((141 ? (min((arr_15 [i_0] [i_0]), 78816260)) : (arr_1 [i_8 - 1] [1])));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
        {
            var_26 = (min(var_26, (arr_30 [13] [1] [i_0])));
            var_27 = (arr_21 [1] [1] [i_12]);
            arr_43 [i_12] [i_12] [i_12] = ((!((!(arr_15 [i_12] [i_12])))));
            var_28 = ((-(arr_27 [i_0])));
        }
        for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
        {
            var_29 = ((((arr_7 [i_13]) ? (arr_7 [i_0]) : (arr_7 [i_13]))));
            var_30 = ((~((((~(arr_11 [i_0] [i_13] [i_0] [i_13] [i_13])))))));
        }
        arr_48 [i_0] = (max(((((arr_31 [8] [i_0] [13] [i_0]) ? (arr_44 [i_0] [i_0]) : (arr_39 [i_0] [i_0])))), ((+(min((arr_27 [i_0]), (arr_6 [i_0] [i_0])))))));
    }
    #pragma endscop
}
