/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= 1576624759;
    var_18 = (-1448480969 % 244);
    var_19 = (max(var_19, (((765054370882236935 ? 3227493563 : -16742)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = -233469707;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 7;i_3 += 1)
                {
                    {
                        var_20 = ((!(arr_6 [i_0] [i_0] [i_0] [i_0])));
                        arr_10 [i_3] [i_2] [i_0] [i_1] [i_1] [i_0] = (((min(((1431316772 | (arr_7 [i_0] [i_1] [i_3]))), ((~(arr_6 [i_0] [i_1] [8] [i_3])))))) ? (((arr_6 [i_0] [i_2 + 2] [5] [i_3]) ? (arr_6 [i_0] [i_2 + 2] [5] [i_0]) : (arr_8 [i_0] [i_2 + 2] [i_2]))) : ((~((max((arr_3 [i_2 - 1]), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [8])))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_21 = (min(var_21, (arr_11 [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    var_22 = (max(var_22, 1067473726));
                    var_23 ^= ((((((arr_16 [i_6] [i_5] [i_4]) ? (arr_16 [i_4] [i_5] [i_6]) : var_4))) ? (((arr_19 [i_6]) ? (arr_11 [i_4]) : (arr_14 [i_4] [i_4] [i_6]))) : var_16));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_24 ^= (+-7553);
                                var_25 += -var_10;
                            }
                        }
                    }
                    var_26 ^= ((-125231291 ? 1067473733 : 1));
                    var_27 = (min(var_27, (((((max(((-24606 ? var_3 : -125231281)), -1544009919))) ? -31961 : -59)))));
                }
            }
        }
        var_28 = (!((((51504 ? 1 : 989712871)))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        arr_29 [i_9] [i_9] = (((arr_27 [i_9]) % (arr_26 [i_9])));
        var_29 = (((arr_25 [i_9]) >> (arr_28 [i_9])));
        arr_30 [i_9] = (((!var_0) ? (arr_27 [i_9]) : ((0 ? 1 : 13453))));
        arr_31 [i_9] = (~-1157564496);
    }

    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    {
                        arr_45 [i_13] [i_12] [6] &= (((arr_17 [i_12] [i_12] [i_12]) ? ((-(arr_39 [i_12]))) : ((1 ? -125231295 : 106))));
                        var_30 = ((var_16 * (-92 / 95)));
                        arr_46 [i_10] [i_11] [i_10] [i_13] = (arr_11 [i_11]);

                        for (int i_14 = 1; i_14 < 10;i_14 += 1)
                        {
                            arr_49 [i_10] [i_11] [i_10] [i_13] [i_14 + 2] = var_0;
                            var_31 = (max(var_31, ((((113 >= 34) + (min(1, -785529096)))))));
                        }
                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            var_32 = (1 <= var_4);
                            arr_54 [i_10] [i_10] = ((arr_41 [i_10] [i_11] [i_12] [i_10] [i_12]) & 785529078);
                            var_33 = ((((0 ? (!179) : (~30855))) > 1827061674));
                            var_34 = -1;
                        }
                    }
                }
            }
        }
        arr_55 [i_10] = 52082;
    }
    #pragma endscop
}
