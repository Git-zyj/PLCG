/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = (((min((arr_0 [i_0 + 3]), (arr_0 [i_0 + 2])))) ? ((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 3]) : var_7))) : (min(1, var_0)));
        var_12 = ((arr_0 [i_0 + 3]) ? (((arr_2 [i_0 + 3]) ? (arr_2 [i_0 + 3]) : (arr_3 [i_0 + 2]))) : ((min((arr_0 [i_0 - 2]), var_6))));
        arr_5 [i_0] = ((((!((!(arr_3 [i_0]))))) ? ((-(min(var_6, (arr_3 [i_0]))))) : ((min((arr_1 [i_0 + 2]), (arr_0 [i_0 + 2]))))));
        arr_6 [i_0] = (((arr_2 [i_0]) ? ((5633607986684191814 ? ((~(arr_1 [i_0]))) : var_2)) : ((max((min((arr_1 [3]), var_6)), ((((arr_0 [i_0 - 1]) == (arr_2 [i_0])))))))));
        arr_7 [i_0] [2] = ((var_0 < (arr_2 [i_0 + 1])));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    arr_14 [i_1 - 2] [i_1] [i_1 - 2] [i_2 - 2] = (min((min(((max(var_8, var_5))), (arr_13 [i_1] [i_2] [i_3]))), (((1 ? var_3 : (arr_12 [i_1] [i_1 + 1] [i_1 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_13 ^= min((max((arr_18 [i_5] [i_5 - 2] [i_5] [i_5] [i_5]), (arr_18 [i_5 + 1] [i_5 - 2] [i_5 + 1] [i_5 - 2] [19]))), (arr_18 [i_5 - 1] [i_5 + 1] [i_5] [i_5 - 1] [7]));
                                var_14 = ((-(min((arr_10 [i_2 + 2] [i_1]), (arr_10 [i_2 + 3] [i_2])))));
                                arr_19 [i_1] [i_1] [i_1 + 2] [i_1 - 2] [i_1] = ((~(~1)));
                                var_15 -= (arr_18 [i_1] [i_2 + 2] [5] [i_4] [1]);
                            }
                        }
                    }
                }
            }
        }
        arr_20 [16] |= (arr_13 [18] [i_1] [18]);
    }

    for (int i_6 = 2; i_6 < 9;i_6 += 1)
    {
        var_16 = (max((arr_21 [i_6] [i_6]), (arr_9 [i_6])));
        arr_23 [i_6] = (arr_2 [i_6]);
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        arr_28 [16] = ((((((arr_25 [i_7]) ? (arr_25 [i_7]) : 22))) || ((min((arr_25 [i_7]), (arr_25 [i_7]))))));
        var_17 -= (min((arr_27 [i_7]), (min((arr_27 [i_7]), (arr_27 [i_7])))));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_18 = (min(var_18, (((var_2 <= (((max((arr_31 [i_8 + 1] [i_10]), (arr_31 [i_8 + 1] [i_8]))))))))));
                        arr_37 [i_7] [i_7] [15] [i_10] = (var_9 || var_1);
                        arr_38 [i_7] = min((((arr_11 [i_7]) - (arr_16 [i_7] [1] [1] [i_10]))), 1);
                        var_19 = (max(var_19, (((((arr_33 [i_8 - 1]) | (arr_33 [i_8 - 1]))) + ((((arr_33 [i_8 + 1]) < var_9)))))));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_20 = (max(var_20, ((((arr_10 [i_7] [i_8]) ? (((((-(arr_35 [i_7] [i_8 - 1] [i_9] [i_9]))) != (arr_35 [i_8 + 1] [i_8] [i_8 + 1] [i_8 - 1])))) : 1)))));
                        var_21 = ((((max((((arr_34 [i_8]) - (arr_33 [i_11]))), (arr_10 [i_9] [i_11])))) ? ((min((arr_41 [i_8] [i_8 - 1] [i_8 - 1] [0] [i_11] [i_11]), (arr_41 [i_7] [i_8 - 1] [i_8 - 1] [1] [i_11] [11])))) : 0));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            arr_48 [2] [6] [0] [16] = (var_8 != 1);
                            arr_49 [i_13] [i_13] [i_12] [i_9] [i_8] [i_7] = 1;
                            arr_50 [3] [4] [i_9] [i_8] [i_7] = (((arr_9 [i_8 - 1]) >= (arr_9 [i_8 + 1])));
                            var_22 = (min(var_22, ((((var_9 * var_7) ? var_7 : (((arr_13 [i_13] [i_8] [i_9]) << (((arr_15 [i_7] [i_8]) - 111)))))))));
                        }
                        var_23 += (((((var_4 ? (arr_17 [i_7] [i_8] [14] [i_9]) : var_6))) ? ((((arr_17 [i_7] [i_7] [i_7] [i_12]) & var_8))) : (arr_18 [i_9] [i_8 + 1] [6] [3] [i_7])));
                        var_24 = var_2;
                    }
                    var_25 = ((((((arr_12 [i_8 + 1] [i_8 - 1] [i_8 + 1]) ? (arr_12 [i_8 + 1] [i_8 + 1] [i_8 + 1]) : (arr_12 [i_8 + 1] [i_8 + 1] [i_8 + 1])))) > ((((((arr_8 [i_9] [i_8 - 1]) ^ var_7))) ? ((min(var_7, var_1))) : ((var_5 ? var_9 : 8088274130787365495))))));
                    var_26 = (max(var_26, ((min((arr_41 [1] [17] [i_9] [i_7] [13] [i_7]), (((var_10 ? 0 : var_2))))))));
                }
            }
        }
    }
    for (int i_14 = 1; i_14 < 1;i_14 += 1)
    {
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 10;i_16 += 1)
            {
                for (int i_17 = 4; i_17 < 10;i_17 += 1)
                {
                    {
                        arr_61 [8] [i_14] [i_16 - 1] = ((((min((((arr_24 [i_14 - 1]) - var_1)), (arr_16 [8] [8] [8] [i_17])))) ? -var_1 : (((arr_13 [i_14] [i_15] [i_14 - 1]) - (arr_13 [i_14] [3] [3])))));
                        var_27 = ((((min((arr_27 [i_14 - 1]), (4120556580 ^ var_5)))) ? ((((22583 >= (((arr_17 [i_14] [i_16] [i_14] [i_14]) << (((arr_25 [i_14 - 1]) - 12944742096923710399)))))))) : -6463810275498149085));
                        arr_62 [i_14] [i_15] [i_14] = ((((var_7 <= (((arr_33 [i_14 - 1]) ? var_0 : (arr_45 [i_17 + 1] [i_16 + 1] [i_15] [18]))))) ? (max((arr_3 [i_14 - 1]), (arr_3 [i_14 - 1]))) : ((((arr_59 [i_16] [i_15] [i_16] [i_15] [i_15] [i_14 - 1]) >> (var_4 - 7590700276965464902))))));
                    }
                }
            }
        }
        var_28 = var_3;
    }
    var_29 = ((var_10 ? var_4 : (!var_9)));
    #pragma endscop
}
