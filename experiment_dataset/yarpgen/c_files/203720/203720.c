/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_10 |= (((((-(var_0 <= var_4)))) ? (max((4294967295 - 37672), (1122657069 + var_8))) : ((((!(!var_1)))))));
                                var_11 = ((var_7 ? (min((((arr_1 [i_2]) ? var_7 : var_4)), (((32 ? 55 : -1094041872363323105))))) : ((((max(var_1, (arr_7 [i_0] [i_2] [i_1] [7])))) ? (((arr_5 [i_0] [i_1] [i_0] [i_0]) ? var_1 : (arr_5 [i_0] [i_1] [i_1] [i_0]))) : ((min((arr_6 [i_0]), (arr_11 [1] [1] [i_2]))))))));
                                arr_13 [i_0] [i_0] [16] [i_0] [i_0] [i_0] [i_2] |= (var_7 < -1);
                                var_12 = ((!(max((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1])))));
                            }
                        }
                    }
                    var_13 = (min(var_13, (!var_2)));

                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        arr_16 [i_0] [i_1 - 1] [i_2 - 2] [17] [i_1] [i_5] = ((((max(var_0, (arr_6 [i_2 - 1])))) ? 1722305015 : ((((arr_15 [i_1]) ? -1122657069 : var_4)))));
                        var_14 = (max(var_14, var_2));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_15 = (((((max(-47, 8123)))) != ((0 << ((((1 ? (arr_11 [i_0] [i_1 + 1] [i_2]) : 262142)) - 3021776251))))));
                        arr_19 [i_0] [i_2] [i_2] [i_6] |= ((855324798 ? -12418 : 96));
                        var_16 = max(((((arr_18 [i_0] [i_0] [i_1] [i_1 + 1]) ? (arr_18 [i_0] [2] [i_1] [i_1 - 1]) : (arr_18 [i_0] [i_0] [i_1] [i_1 - 1])))), (((arr_18 [i_0] [i_2] [i_1] [i_1 - 1]) ? (arr_18 [i_0] [i_1 - 1] [i_1] [i_1 + 1]) : var_6)));
                        arr_20 [i_0] [i_0] [i_1 + 1] [i_2] [i_2] [i_6] |= ((max((8476 > 8459392479416626484), 9022926489046678204)));
                    }
                    arr_21 [i_1] = (((-var_8 ^ var_8) ? ((var_9 ? ((((var_5 == (arr_4 [i_2 - 1]))))) : (arr_1 [i_0]))) : ((((min(511, -913537222))) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) : 21))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {

                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    arr_32 [i_7 - 1] [i_7 - 1] [i_7 - 1] = -1;
                    var_17 = (max(var_17, ((-((1 * (arr_29 [i_7 - 1] [i_8])))))));
                    arr_33 [i_7] [i_7] [i_7] = (max((arr_12 [i_7] [4] [1] [4] [4]), (((!(arr_8 [i_7 - 3] [4] [i_7 - 2] [i_7 - 1] [i_8]))))));
                    var_18 = (~(arr_24 [i_7 - 3] [i_7 - 3]));
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    arr_38 [i_7] [15] = (arr_0 [i_7]);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_45 [i_7] [i_8] [i_10] [i_11] [i_7] = var_1;
                                arr_46 [i_7] [2] [2] [i_7] [10] = ((-47 || (((var_5 ? ((511 ? 7168 : (arr_35 [i_12]))) : var_3)))));
                            }
                        }
                    }
                }
                for (int i_13 = 4; i_13 < 18;i_13 += 1)
                {
                    arr_49 [i_8] = (min(var_1, 43481));
                    var_19 = (min(var_19, (((-(((arr_42 [i_7 - 3] [i_7 - 2] [i_7 + 1]) ? 1 : (arr_42 [i_7 - 3] [i_7 - 3] [i_7 - 3]))))))));
                }
                arr_50 [i_7] = (((!var_7) + (arr_15 [8])));
            }
        }
    }
    #pragma endscop
}
