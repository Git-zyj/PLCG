/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_13 = ((max((min(var_11, (arr_11 [i_0] [i_1] [i_0] [i_2] [i_3])), var_8))));
                            arr_12 [i_0] [i_2] [i_1] [i_0] = ((arr_6 [i_1 + 2] [i_1 - 1]) * (min((arr_6 [i_1 + 2] [i_1 + 2]), (arr_6 [i_1 + 1] [i_1 + 1]))));
                            var_14 = (0 || 87);
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_15 = ((-272641766 ^ (arr_8 [i_0] [i_0])));
                                var_16 = (!542831009620914917);
                                arr_23 [i_6] [i_6] [i_0] = ((max(-1, (arr_2 [i_0]))));
                            }
                        }
                    }
                    arr_24 [i_0] [i_4] = ((-(((((arr_17 [i_4] [i_1] [i_0] [i_0]) ? var_2 : (arr_6 [i_0] [i_1]))) ^ (((~(arr_18 [i_0] [i_1 + 2] [i_0] [i_0]))))))));
                    arr_25 [i_0] = arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                    var_17 = (min(var_17, ((((max(((-(arr_3 [10]))), ((154 ? 66 : 57655)))) - var_1)))));
                    var_18 = (min(var_18, ((max(((((arr_2 [2]) < (arr_11 [i_0] [i_0] [4] [i_0] [6])))), (arr_5 [i_1 + 2] [i_1 + 2]))))));
                }
                var_19 = (max(var_19, (((+(max((arr_14 [8]), (arr_20 [i_0] [i_1] [i_1 - 1] [i_1]))))))));

                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    arr_28 [i_0] [i_0] [i_0] = max(17903913064088636698, 21);
                    arr_29 [6] [4] [i_0] |= min(((min((arr_18 [i_0] [i_0] [i_7] [i_0]), ((-6937320425526125773 ? -26084 : 26585))))), (max((arr_9 [i_1 + 2] [i_1 + 1]), 17291683055480345777)));
                    var_20 = ((~((1775686908 ? (arr_0 [i_0]) : (((!(arr_22 [i_0] [i_0] [i_0] [i_1 + 1] [i_0] [i_7] [i_7]))))))));
                    var_21 *= 17903913064088636698;
                    arr_30 [i_0] [i_1] [i_0] [i_7] = (max((arr_5 [i_1] [i_1]), 253));
                }
                arr_31 [i_0] = (!-84);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    var_22 |= (arr_32 [i_9]);

                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        arr_43 [i_9] [i_11] = ((+(((arr_34 [i_8 + 1]) ? (arr_34 [i_8 - 1]) : (arr_34 [i_8 + 2])))));

                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            var_23 = ((((min((arr_42 [i_9]), (((var_5 ? (arr_37 [i_10] [i_10]) : (arr_32 [i_8 + 2]))))))) ? ((-8193 ? (arr_41 [i_8 + 1] [i_12] [i_8] [i_9] [i_12] [i_11]) : 26077)) : (arr_44 [i_9] [i_10] [i_12] [i_11] [i_9])));
                            arr_46 [i_9] [i_9] [i_10] [i_9] [i_9] = (arr_34 [i_10]);
                            var_24 -= (arr_34 [i_11]);
                        }

                        for (int i_13 = 1; i_13 < 18;i_13 += 1)
                        {
                            arr_49 [i_8] [i_9] [i_10] [i_11] [i_9] = ((((arr_41 [i_13 - 1] [i_11] [i_9] [i_9] [i_9] [i_8]) ? (arr_34 [i_8 + 2]) : (arr_34 [i_13 + 1]))));
                            var_25 = (~(arr_44 [i_9] [i_9] [i_9] [i_9] [i_9]));
                        }
                    }

                    for (int i_14 = 1; i_14 < 18;i_14 += 1)
                    {
                        arr_54 [i_9] = (((max((((arr_48 [i_8] [i_8]) ? 4294967295 : (arr_44 [i_9] [i_9] [i_9] [i_9] [7]))), (((var_9 ? (arr_38 [i_9]) : var_12)))))) ? (arr_52 [i_9] [i_9] [i_10] [i_14] [i_9]) : (((max(var_4, (arr_40 [i_8] [10] [i_9]))))));
                        arr_55 [i_14 - 1] [i_9] [i_9] [i_8] = var_11;
                        var_26 *= (max((((~(arr_42 [14])))), ((((arr_51 [i_8 + 1] [i_14 - 1] [i_14 - 1] [i_14]) <= (arr_51 [i_8] [i_14 - 1] [i_14 - 1] [i_14]))))));
                    }
                }
            }
        }
    }
    var_27 = var_2;
    var_28 = (max(4220043431, -78));
    #pragma endscop
}
