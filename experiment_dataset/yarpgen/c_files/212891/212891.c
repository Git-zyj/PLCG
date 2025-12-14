/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = min(1263142319, -13942);

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((min(((max(var_2, (arr_11 [i_0] [i_0] [9] [i_0] [i_0] [i_0])))), var_6)))));
                                arr_14 [i_0] [i_1] [i_2] = ((((min((arr_12 [i_3] [16] [16] [i_4 - 3] [i_4 - 3] [i_4]), (arr_12 [15] [i_2] [i_4 - 2] [i_4 - 4] [i_4 - 4] [0])))) == ((max((arr_12 [i_3] [i_3] [i_4] [i_4 + 1] [i_4 - 2] [i_4]), (arr_12 [i_1] [i_1] [20] [i_4 - 3] [i_4 - 3] [20]))))));
                                var_22 = (((arr_10 [5] [11] [i_4 - 3] [i_4 + 1] [i_4]) ? ((((arr_11 [i_0] [i_1] [i_1] [i_3] [i_3] [i_4]) >> (((min(7625215339515718212, 7625215339515718230)) - 7625215339515718181))))) : (arr_13 [i_2] [i_2] [i_2] [i_2] [8] [2])));
                            }
                        }
                    }
                    arr_15 [i_2] = (min((arr_7 [i_0] [i_1] [i_2] [i_2]), ((-((6264020193441583118 ? (arr_1 [17]) : (arr_8 [i_0] [15] [i_1] [i_1] [i_1] [i_2])))))));
                    var_23 ^= (((~(arr_4 [i_0]))));
                    arr_16 [i_0] [i_1] [i_2] = var_13;
                }
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    var_24 = ((!((((~var_3) ? var_17 : -719682068)))));
                    var_25 += (max(((((arr_6 [i_0] [i_1] [i_5] [i_5]) >= (max(944341209, var_14))))), var_19));

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_26 = ((!(arr_3 [i_0])));
                        var_27 = (max((arr_20 [i_5 + 2] [i_5] [i_5] [i_5] [i_5 - 1]), (((-((-944341210 / (arr_0 [7]))))))));
                        var_28 = (var_3 < (1 >= 7625215339515718220));
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        arr_24 [i_1] [i_1] [11] [i_7] = (arr_23 [i_0]);
                        var_29 = (max((min(var_0, var_17)), var_2));
                    }
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    var_30 = (((((arr_5 [i_1]) ? (arr_13 [i_0] [i_1] [7] [7] [i_1] [i_0]) : (arr_5 [i_8])))) ? ((~((var_7 ? (arr_12 [i_0] [i_0] [i_8] [i_8] [i_0] [13]) : var_14)))) : (((((((!(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) <= var_7)))));
                    arr_28 [16] [16] [9] = (min((min((18446744073709551615 * var_18), (arr_26 [i_0] [i_0] [i_8] [i_1]))), -1030475876));
                }
            }
        }
    }
    var_31 = (((var_16 == (!7625215339515718228))) ? var_8 : var_15);
    #pragma endscop
}
