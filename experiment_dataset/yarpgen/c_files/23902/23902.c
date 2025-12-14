/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, -var_14));
    var_17 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [10] = 4029542799;
                var_18 = ((265424496 || ((((arr_0 [i_0]) & (((arr_0 [i_0]) + var_7)))))));
                arr_6 [i_1] [i_1] [i_0] = (arr_1 [i_0] [i_1]);
                var_19 = ((arr_1 [i_0] [i_1]) && (arr_1 [i_0] [i_1]));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_20 = (min(var_20, (((var_11 + 2147483647) >> (arr_7 [i_0] [i_1])))));
                    arr_9 [i_1] [i_2] = 927978308669159999;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [i_2] [i_0] [i_1] [i_2] [8] [i_3] = (arr_3 [i_0] [i_3]);
                        arr_13 [i_0] [i_1] [i_2] [i_3] = (min(var_5, var_8));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_16 [i_0] [i_2] = (((arr_3 [i_0] [i_0]) - (arr_11 [i_1] [1] [i_1] [8] [i_1] [10])));
                            var_21 = ((var_9 && (3005666472 != 265424490)));
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [i_0] = ((9750116601351923316 | ((-(min(17518765765040391617, (arr_11 [3] [i_2] [i_2] [10] [i_4] [i_4])))))));
                            var_22 = (max(var_22, ((max(((min((arr_2 [i_1]), var_15))), 4194303)))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_23 = 1;
                            arr_20 [i_2] = (arr_10 [i_2] [i_1] [0] [i_3] [i_5]);
                            var_24 -= (arr_1 [i_0] [i_1]);
                        }
                    }
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        arr_23 [i_0] [i_1] [6] [i_2] = 1820814024;
                        var_25 = (min(var_1, 927978308669159999));
                        var_26 = (min(var_26, (arr_1 [i_0] [i_1])));
                    }
                    for (int i_7 = 4; i_7 < 14;i_7 += 1)
                    {
                        var_27 = max(1, 3209817479);
                        var_28 = (max(var_28, (((!(((~(arr_8 [i_0])))))))));
                    }
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_29 &= ((~(arr_19 [i_0] [i_1] [i_8] [i_10] [i_10])));
                                arr_33 [i_0] [i_1] [i_8] [i_8] [i_9 + 1] [i_9 + 1] [i_10] = 5;
                            }
                        }
                    }
                    arr_34 [i_0] [i_1] [i_8] [i_1] = (max(var_14, (arr_24 [i_0] [9] [i_8] [i_0])));
                    var_30 = 14516241972185668240;
                    arr_35 [i_8] = (arr_21 [i_0] [i_1] [i_8] [i_0] [i_0] [1]);
                }
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    arr_39 [i_0] [i_1] [1] [i_1] = ((((((arr_10 [i_0] [14] [i_11] [i_1] [i_11]) || ((min((arr_26 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_0]))))))) <= (((!(((var_12 >> (((arr_8 [i_1]) - 4801052805487982192))))))))));
                    arr_40 [i_0] [i_1] [i_1] = (min(((((arr_37 [i_0] [i_1] [i_1] [i_11]) >= (arr_4 [i_11])))), var_6));
                    var_31 = (min(var_31, (arr_2 [i_0])));
                    arr_41 [i_0] [i_11] = (((((arr_18 [3] [i_11] [i_1] [i_1] [i_0] [i_0] [i_0]) | 1)) != (max((arr_18 [i_0] [i_1] [i_1] [i_1] [i_1] [i_11] [i_11]), var_7))));
                }
            }
        }
    }
    #pragma endscop
}
