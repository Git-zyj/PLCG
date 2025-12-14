/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= ((var_12 < (max((max(var_11, 11361024511368277920)), var_2))));
    var_16 = (min(var_16, 233));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    arr_8 [i_2] [i_1] [i_0] = ((!(((((((arr_5 [i_0] [i_1] [i_0] [i_1]) ? var_5 : var_3))) ? ((((arr_7 [i_1] [i_2]) * (arr_3 [i_2] [i_1] [i_0])))) : (max(7085719562341273696, var_8)))))));
                    arr_9 [i_1] |= (arr_1 [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = (((((max(var_12, (arr_0 [i_0]))))) ? ((((arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]) - ((0 ? (arr_12 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] [i_4]) : (arr_2 [i_0] [i_0] [i_0])))))) : (((((arr_1 [i_0] [i_4]) >= (arr_4 [i_4]))) ? (arr_3 [i_2] [i_1] [i_0]) : var_9))));
                                var_18 = 10;
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (!7085719562341273696);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    arr_18 [i_0] [i_1] [i_1] [i_5] = (((arr_11 [i_0] [i_0] [i_0] [i_1] [i_5]) ? (arr_11 [i_0] [i_1] [i_1] [i_1] [i_1]) : (arr_11 [i_0] [i_5] [i_5] [i_0] [i_1])));
                    arr_19 [i_0] [i_5] [i_1] [i_5] = (arr_7 [i_5] [i_0]);
                }

                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {

                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        var_19 = (max(var_19, ((((60 << (((arr_2 [i_1] [i_6] [i_7]) - 103))))))));
                        var_20 = (min(var_20, ((max(((!((((arr_3 [i_0] [i_6] [i_1]) ? (arr_0 [i_1]) : 0))))), ((((max(4294967295, 12))) || 1)))))));
                        var_21 = ((((max((arr_4 [i_0]), (arr_4 [i_0])))) ? (arr_4 [i_0]) : (((arr_4 [i_6]) ? (arr_4 [i_0]) : (arr_4 [i_1])))));
                        var_22 = (arr_10 [i_6] [i_7] [i_6] [i_7] [i_1] [i_6]);
                    }
                    arr_25 [i_0] [i_6] [i_6] = ((((min(((((arr_12 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_6]) == (arr_20 [i_0] [i_1] [i_6])))), 129))) ? (arr_16 [i_0] [i_1] [i_6]) : (((!(arr_2 [i_0] [i_1] [i_6]))))));
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 17;i_8 += 1)
                {
                    arr_28 [i_0] [i_8] = ((-(((arr_26 [i_0] [i_1] [i_8]) ? var_12 : 2714377298855464752))));
                    arr_29 [i_0] [i_0] [i_8] = (arr_5 [i_8 - 1] [i_8] [i_8] [i_8 + 1]);
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((((arr_30 [i_0] [i_1] [i_8] [i_8 - 1] [i_9 - 2] [i_1]) ? 65475 : (arr_30 [i_0] [i_10] [i_8] [i_8 - 1] [i_9 - 1] [i_0]))))));
                                var_24 = ((-(arr_6 [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_41 [i_0] [i_1] [i_8] [i_11] [i_12] = (((arr_5 [i_1] [i_8 + 1] [i_8 - 1] [i_11]) * (((!(arr_12 [i_0] [i_1] [i_8] [i_1] [i_8] [i_11] [i_8]))))));
                                var_25 = (((((arr_12 [i_0] [i_1] [i_8] [i_11] [i_0] [i_11] [i_1]) <= var_2)) ? (arr_5 [i_12] [i_1] [i_12] [i_11]) : (arr_21 [i_8] [i_8] [i_8 - 1] [i_8])));
                            }
                        }
                    }
                    var_26 = (((arr_1 [i_8] [i_0]) ? (arr_26 [i_0] [i_1] [i_0]) : 4294967286));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_13 = 0; i_13 < 15;i_13 += 1)
    {
        var_27 &= ((var_12 ? (arr_7 [i_13] [i_13]) : 1));
        var_28 += (((((arr_2 [i_13] [i_13] [i_13]) >= (arr_16 [i_13] [i_13] [6]))) ? (((arr_22 [i_13] [i_13]) + (arr_39 [i_13] [i_13] [i_13] [i_13] [i_13]))) : ((((!(arr_43 [i_13] [i_13])))))));
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        var_29 = (max((((arr_47 [i_14] [i_14]) ? 60 : -var_0)), ((max((((arr_46 [i_14] [i_14]) >> (((arr_46 [i_14] [i_14]) - 164)))), (arr_46 [i_14] [i_14]))))));
        var_30 = ((!(((((((arr_47 [i_14] [i_14]) ? (arr_45 [i_14] [i_14]) : (arr_46 [i_14] [i_14])))) ? (arr_46 [i_14] [i_14]) : -4294967295)))));
    }
    for (int i_15 = 1; i_15 < 24;i_15 += 1)
    {
        var_31 = (((((-(((!(arr_48 [i_15] [i_15]))))))) ? (arr_48 [i_15 + 1] [i_15 + 1]) : (((15 >> 1) & (arr_48 [i_15] [i_15])))));
        arr_50 [i_15] = (!3507387217543149782);
    }
    #pragma endscop
}
