/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_0] [i_1] [i_0] = ((1 ? (arr_1 [i_2] [i_1]) : (min(((1 ? var_6 : (arr_4 [i_0] [3] [i_2] [i_2]))), ((min((arr_1 [5] [10]), 1)))))));
                    var_12 = (max(var_12, ((((min((arr_3 [8] [4]), (arr_3 [i_0 - 1] [i_1]))) == (!-709757063))))));
                    var_13 = (min((arr_4 [i_0] [i_1] [i_1] [0]), (1 <= 1)));
                }
            }
        }
        arr_7 [12] [8] = var_5;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                {
                    var_14 -= (((-(max(1071601424, -44)))) > (arr_0 [i_0]));
                    var_15 = arr_10 [4] [1] [16] [i_0];

                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        var_16 = (min((((~((var_2 ? (arr_14 [i_0] [5] [i_3] [i_4]) : 1071601431))))), (max((arr_11 [i_0] [i_4] [1]), 1))));
                        var_17 = var_1;
                        var_18 = (arr_14 [i_4] [i_5] [i_0] [i_4]);
                    }

                    for (int i_6 = 4; i_6 < 16;i_6 += 1)
                    {
                        arr_17 [i_4] [i_3] [i_4] = (arr_0 [i_3]);
                        var_19 = (arr_14 [i_0 - 1] [i_3] [i_4 - 1] [i_4]);

                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_20 -= (arr_21 [i_0 - 1] [10] [i_0 - 1] [1] [i_7]);
                            var_21 = ((arr_9 [i_0 - 1] [i_6 - 3]) == var_9);
                        }
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            arr_24 [i_0 - 1] [i_4] [2] [i_8] = (((((~(var_9 / 114)))) || var_9));
                            var_22 = (arr_9 [i_4] [i_4]);
                            arr_25 [i_0 - 1] [i_0 - 1] [i_4] [i_6 - 2] [i_6] [i_4] = (arr_19 [i_0] [i_3] [i_4 + 2] [0] [i_8]);
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_23 = (arr_5 [11] [i_6 + 1] [i_9]);
                            arr_30 [3] [3] [9] [i_4] [i_4] [i_6] [1] = var_9;
                        }
                        arr_31 [3] [16] [i_3] [5] [i_4] [1] = (1071601438 ? (arr_0 [6]) : -48);
                        arr_32 [i_4] [i_4] [0] [7] [5] = arr_21 [i_0] [i_0] [1] [i_4 + 2] [1];
                    }
                }
            }
        }
        var_24 = ((((var_5 >= (1 >= var_4))) ? (((arr_16 [12]) * ((min((arr_18 [i_0] [i_0] [i_0] [i_0 - 1] [3]), 2761225609824476926))))) : 1));
        var_25 = (min(var_25, (arr_0 [i_0])));
    }

    for (int i_10 = 1; i_10 < 18;i_10 += 1)
    {
        arr_36 [i_10] = ((min(((arr_35 [i_10 + 1]), (((arr_34 [i_10]) ? var_4 : (arr_35 [1])))))));
        arr_37 [i_10] = ((min((arr_33 [1] [i_10 + 1]), 1)) ? (arr_33 [i_10 - 1] [i_10 - 1]) : ((~(arr_33 [i_10 - 1] [i_10 + 1]))));
    }
    for (int i_11 = 4; i_11 < 20;i_11 += 1)
    {
        var_26 = min(-98, (arr_38 [i_11]));
        var_27 += ((14 >> (-1796680675 + 1796680678)));
    }
    var_28 = ((((min((min(var_9, var_3)), var_5))) ? var_2 : (((-var_2 == ((max(var_8, var_6))))))));
    #pragma endscop
}
