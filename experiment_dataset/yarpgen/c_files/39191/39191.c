/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_10 = (arr_1 [i_0]);
        var_11 = -1818224624;
        var_12 = (arr_1 [i_0]);
        var_13 = (min((((((arr_1 [i_0]) & var_5)) / -1071917677)), (((((var_6 - (arr_0 [i_0] [i_0])))) ? (arr_1 [i_0 - 2]) : 24))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_14 = (arr_3 [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [4] [i_1] [i_3] = 8296356940633767761;
                        arr_10 [i_0] [i_1] [i_2] [i_1] = (((min(1323391154, 147)) > 147));
                        arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = 147;
                    }
                }
            }
        }
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            var_15 = ((((max((arr_5 [i_0] [i_4 - 1] [i_0 - 1]), (var_7 > 218)))) <= ((((var_6 % (arr_5 [9] [9] [i_0 + 1])))))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 8;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_16 = (arr_1 [i_0]);
                            arr_23 [7] [7] [i_4] [i_5] [i_4] [i_6] [i_4] = (((((arr_4 [i_0] [i_0 + 2]) > (arr_7 [i_4 + 1] [i_4] [i_6 + 2] [i_6]))) ? var_5 : ((~((~(arr_5 [i_5] [i_5] [i_4])))))));
                            arr_24 [i_4] [i_7] = (arr_6 [i_0]);
                        }
                    }
                }
            }
            arr_25 [i_4] = (((22 - 156) == 37));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_17 = var_1;
                            var_18 = (min(22349, 229));
                            arr_36 [i_4] = (i_4 % 2 == 0) ? (((201 ? ((57 << (((arr_19 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4]) - 14744067783535796059)))) : -109))) : (((201 ? ((57 << (((((arr_19 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4]) - 14744067783535796059)) - 8727506418820569959)))) : -109)));
                        }
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            var_19 = -218;
            var_20 = (((-(200 - 26))));
            arr_40 [i_0 - 2] = ((-(218 + 54662)));
            var_21 &= ((94 >= (min(218, 54662))));
            arr_41 [i_0] = (arr_4 [i_0] [i_11]);
        }
    }
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        arr_45 [i_12] = arr_43 [i_12];

        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            var_22 = ((((min((arr_43 [i_12]), var_0))) ? ((-1704355982 + (var_2 + var_6))) : 15161823330662484564));
            var_23 = -161;
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                {
                    arr_54 [i_12] [i_12] [i_12] = ((((max((arr_44 [i_12]), (arr_44 [i_12])))) ? ((min((arr_44 [i_12]), (arr_44 [i_12])))) : ((((arr_44 [i_15]) == (arr_44 [i_12]))))));
                    var_24 *= ((((!(arr_52 [i_12] [i_14] [11] [i_15]))) ? (arr_50 [i_14]) : (arr_53 [i_15] [5] [i_15] [i_14])));
                    arr_55 [i_14] [i_14] = max((arr_49 [i_15]), (((((var_7 != (arr_47 [i_12] [i_12])))) * (!var_2))));
                }
            }
        }
        var_25 = min(-1320756281, (((arr_52 [i_12] [i_12] [i_12] [i_12]) + (arr_48 [i_12] [i_12] [i_12]))));
        var_26 = (min(var_26, (((2848109358684528901 - (218 == 109))))));
    }
    var_27 = (((min(var_9, (min(59424, var_9)))) % (min((var_4 / var_8), var_9))));
    var_28 = (6095076457396444471 << (1502668026 - 1502667992));
    #pragma endscop
}
