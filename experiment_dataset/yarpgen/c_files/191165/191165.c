/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_2] = ((~(min(var_3, var_10))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_10 [i_0] [i_2] [17] [i_3] = ((var_8 * (arr_0 [i_0])));
                        arr_11 [i_3] [1] [i_1] = (arr_4 [i_0] [i_1] [i_2]);
                    }

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_2] [13] = ((2147483647 && ((((arr_2 [i_4]) ? (arr_6 [i_2] [i_1] [i_2]) : ((-5 ? (arr_12 [i_0] [i_1] [15] [i_4] [i_0] [i_4]) : (arr_4 [i_0] [18] [18]))))))));

                        for (int i_5 = 3; i_5 < 18;i_5 += 1)
                        {
                            arr_17 [i_5] [i_5] [i_5] [i_4] [i_4] [i_4] [i_4] |= (min((min((min((arr_13 [i_2] [i_4]), var_3)), (arr_8 [i_0] [i_0] [i_5 - 1] [i_4] [i_4] [i_0]))), ((min(((min(var_10, 10183))), ((var_3 << (var_5 - 1))))))));
                            arr_18 [i_0] [i_0] [i_2] [i_4] [i_4] [i_5 - 1] = (arr_16 [i_0] [i_1] [i_2] [i_4] [i_2]);
                        }
                        arr_19 [i_4] [i_0] [i_0] [i_0] = (arr_0 [i_0]);
                        arr_20 [i_1] [i_1] [i_2] [9] [15] [i_0] = (arr_2 [i_0]);
                        arr_21 [i_4] [i_0] [i_0] [i_0] = (arr_15 [i_0] [i_1] [i_0] [i_4] [i_4]);
                    }
                    arr_22 [i_0] [i_0] = (min((min((arr_0 [18]), (arr_0 [i_0]))), ((max(var_8, (arr_9 [i_0] [i_0] [i_2] [i_1]))))));
                }
            }
        }
    }
    var_11 = (((min(var_8, var_2))) * ((var_2 >> (((min(var_7, var_3)) + 8195141242281667491)))));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 8;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        arr_32 [i_6] [i_7] [i_8 - 1] [i_7 - 2] [i_7] = ((var_4 ? var_10 : ((max(((((arr_3 [i_7] [1]) < var_0))), (arr_1 [i_7 + 2]))))));
                        arr_33 [4] [6] [i_7] [i_6] [4] = ((var_1 ? (!var_7) : (max((((arr_4 [i_7] [i_8] [i_9]) | (arr_8 [i_6] [i_7 + 1] [i_7 + 1] [i_8] [i_9] [6]))), (((var_5 ? var_0 : (arr_16 [i_6] [i_8] [i_8] [i_9] [i_7 - 2]))))))));
                    }
                    for (int i_10 = 3; i_10 < 9;i_10 += 1)
                    {
                        arr_36 [i_6] [i_6] [i_8] [i_6] = ((((min((arr_8 [i_8 - 1] [i_8 - 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_8 - 1]), (arr_13 [i_6] [i_7 + 2])))) ? (arr_23 [i_8 - 1] [i_10 - 2]) : (((var_8 >> (((((arr_16 [i_6] [1] [i_6] [1] [i_7]) ? (arr_29 [i_6] [i_7] [i_8]) : var_2)) - 60033)))))));
                        arr_37 [i_6] [i_7] [i_10 - 1] [i_10] |= (max((max((((arr_0 [11]) >= (arr_16 [i_10] [i_10] [i_10] [i_8] [i_10]))), (arr_35 [i_7] [i_7] [i_10 + 1] [i_6]))), (!1)));
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        arr_41 [i_6] [i_7 - 1] [i_7 - 1] [i_7] [i_11] = (max(((var_2 + (arr_2 [i_7 - 1]))), ((((max((arr_13 [i_6] [9]), var_0)) == ((max(var_8, (arr_23 [4] [4])))))))));
                        arr_42 [i_6] [i_7] [i_7] [i_6] = (max(var_6, ((((arr_29 [7] [i_7] [i_8]) ? 9223372036854775807 : 12435965175883058537)))));
                        arr_43 [0] [i_7] [0] [i_11] [i_6] = (((((min((arr_39 [i_6] [2] [2] [i_6]), (arr_30 [i_6] [i_7] [i_7] [i_11] [i_7] [9]))))) ? (min(18446744073709551615, ((min(var_1, (-2147483647 - 1)))))) : ((min(((max((arr_27 [i_6] [1] [i_11]), var_5))), (max((arr_5 [i_6] [i_7] [i_7] [i_11]), 2147483647)))))));
                    }

                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        arr_47 [i_7] = (min((min(1553460671502185227, 8500)), (arr_12 [i_6] [i_7 + 2] [i_8 - 1] [i_7 + 2] [i_12] [18])));
                        arr_48 [i_6] = 7;
                        arr_49 [i_6] [i_7 + 1] [i_6] [i_6] = (max((((!(arr_6 [i_7 - 2] [i_8 - 1] [i_8])))), (arr_16 [i_7] [1] [i_8] [i_7 - 2] [i_6])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
