/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = (((var_4 ? var_5 : (!var_5))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (((arr_1 [18] [i_0 + 3]) ? (arr_1 [i_0 + 3] [i_0 + 1]) : (arr_1 [i_0] [i_0 - 1])));
            arr_5 [i_0] [5] [i_1] = ((var_1 ? (((!(arr_3 [i_0] [i_0])))) : ((var_2 - (arr_1 [i_1] [i_0 + 3])))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_12 = (~var_8);
                            var_13 = (arr_13 [i_0] [i_3] [i_0]);
                            arr_15 [i_0] [i_3] [14] [i_4] [i_5] = (((((((((arr_0 [i_5] [11]) ? 32 : (arr_12 [i_0] [i_2] [i_3])))) ? 1 : (~var_5)))) ? ((var_8 ? (arr_3 [i_0] [i_0]) : var_0)) : 3398550247));
                        }
                    }
                }
            }
            var_14 = (max(var_14, (((-32767 - 1) | 1))));
            var_15 += ((+((var_5 ? ((max((arr_3 [i_2] [i_2]), (arr_14 [i_0] [i_2] [i_0] [i_2] [i_2] [i_0])))) : ((~(arr_0 [i_0 + 1] [i_0])))))));
            var_16 = (max(var_16, (min(((max((min((arr_7 [i_0] [i_2]), (arr_7 [i_2] [i_2]))), (min(64634, (arr_2 [i_0] [i_2] [i_2])))))), ((+((var_8 ? (arr_14 [i_0] [i_0] [i_0 + 1] [12] [i_2] [i_0 + 1]) : (arr_13 [i_2] [14] [i_2])))))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    arr_24 [i_6] [i_0] [15] [i_0] = ((((((arr_13 [i_0] [i_7] [i_8]) ? -34 : var_4))) <= ((4002286639 >> (((arr_22 [i_0] [i_6] [i_8]) + 790579302))))));
                    var_17 = (max(var_17, (arr_0 [i_0 + 1] [i_0])));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_28 [i_9] [i_9] [i_0] [i_9] = (arr_0 [i_6] [i_7]);
                    arr_29 [i_0] [6] [13] [i_6] [i_0] [i_0] = (((!var_4) << (((arr_9 [i_0 + 1] [i_0 + 3]) + 21))));
                    var_18 &= ((var_2 >> (((arr_9 [i_0 - 1] [i_0 + 2]) + 3))));
                    arr_30 [16] [i_6] [i_6] [i_0 + 2] &= (arr_23 [i_0 - 1] [i_6] [i_0 - 1] [i_9] [i_0] [i_6]);
                    var_19 = (min(var_19, (((((arr_12 [i_6] [2] [i_9]) && 1))))));
                }
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    var_20 = (max(var_20, -30399));

                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        arr_36 [6] [i_0] = ((~(arr_6 [i_0] [i_0] [i_0])));
                        arr_37 [i_11] [i_10] [i_0] [i_6] [i_0 + 3] = (!var_3);
                    }
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        arr_40 [i_0] [17] [i_0] [i_0] = ((2107561561 ? 4048291235 : (arr_9 [i_7] [11])));
                        var_21 = (min(var_21, 54133));
                        arr_41 [i_0] [i_6] [16] [i_7] [i_10] [i_0] = ((-(arr_6 [i_0] [0] [i_0])));
                    }
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        var_22 = (min(var_22, (((~(~3117467421))))));
                        var_23 = (max(var_23, (((-var_6 ? ((((arr_6 [10] [i_6] [i_6]) >= (arr_0 [i_10] [i_10])))) : (arr_0 [i_0] [i_6]))))));
                    }
                }
                var_24 = (-(arr_32 [i_0 + 1] [i_0 + 3] [i_0 + 1] [12] [i_0 + 1] [i_0 + 1]));
                var_25 = ((((arr_25 [i_0 + 3] [19] [i_0] [15] [i_7]) ? (-9223372036854775807 - 1) : -30405)));
            }
            for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
            {
                var_26 = (var_8 ? (((arr_19 [i_0] [i_6] [i_0] [i_0]) ? 9223372036854775807 : var_4)) : 9223372036854775796);
                var_27 -= (arr_38 [0] [0]);
            }
            for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
            {
                arr_50 [i_0] [i_6] [i_15] [i_0] = (((((arr_0 [i_6] [i_0]) >> (((arr_42 [i_15] [i_15] [7] [i_6] [10] [10]) - 3837106683)))) < var_2));

                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    var_28 = (arr_42 [18] [i_15] [i_15] [i_15] [i_15] [3]);
                    var_29 = ((((((!(arr_19 [i_0] [0] [i_15] [i_16]))))) <= ((-(arr_45 [i_0] [1] [i_0] [i_0])))));
                }
                var_30 = ((!(arr_26 [i_0] [13] [i_0 + 2] [i_0] [i_0])));
                var_31 += ((!(arr_19 [i_6] [i_6] [i_15] [i_0 + 2])));
                var_32 ^= ((-(arr_0 [i_6] [i_6])));
            }
            var_33 ^= var_5;
            var_34 &= (arr_1 [i_0 + 2] [10]);
            var_35 = (((arr_27 [i_0] [i_0 + 3] [i_6] [i_6]) ? var_2 : (arr_0 [i_0] [i_6])));
        }
        arr_53 [i_0] [8] = var_5;
        var_36 = (min((--2), (((-var_2 >= ((var_0 + (arr_26 [i_0] [i_0] [i_0 - 1] [i_0] [i_0]))))))));
    }
    for (int i_17 = 0; i_17 < 11;i_17 += 1)
    {
        var_37 = (min(var_37, (arr_54 [i_17])));
        var_38 = (min((((min(var_7, 458320387)))), (~var_7)));
        var_39 = (max(var_39, (((var_3 << (arr_38 [10] [i_17]))))));
    }
    var_40 = (max(var_40, (((((max((2180817994 < var_9), (max(8937828176793771649, 28610))))) ? (((175 ? var_3 : var_9))) : (((((min(var_1, var_1))) >= ((((-32767 - 1) != var_6)))))))))));
    var_41 = 86;
    #pragma endscop
}
