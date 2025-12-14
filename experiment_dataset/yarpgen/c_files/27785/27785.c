/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (min((((!(var_6 || 41912)))), (min(66, var_14))));
    var_18 = (max(var_18, (var_2 - var_7)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [5] [i_0] = ((((((((0 << (57502 - 57489)))) && (((var_2 << (127 - 122))))))) != ((((arr_0 [i_0]) || (1 * 69))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [4] [i_0] [i_0] [4] [i_0] = (1 ? (~-1701843272) : (arr_13 [i_4] [i_4] [i_4] [i_4] [i_4]));
                            arr_15 [i_2] [i_2] = (((((21540 != (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) << (((arr_13 [8] [i_1] [i_1] [i_3] [i_4]) - 16023))));
                            arr_16 [i_0] [i_0] = ((-((1 ? (arr_0 [i_2]) : var_10))));
                            arr_17 [i_3] = (((-(arr_7 [12] [i_4] [i_4] [6]))) < (((arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]) | -536870912)));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_19 = (max(var_19, (((((((var_1 ? var_3 : 1)) <= (arr_11 [5] [i_1] [6] [i_1] [i_1] [i_1])))) << ((63 ? ((44 ? 1 : 0)) : ((1 ? var_11 : var_14))))))));
                            arr_21 [i_5] [i_5] [i_3] [i_3] [i_5] [i_3] = ((~((-(((arr_9 [i_3] [i_3] [6] [i_3] [i_3]) ? var_3 : var_13))))));
                        }
                        arr_22 [i_0] [i_1] [i_0] [i_1] [i_3] [i_3] = ((!((((arr_3 [i_0]) ? ((min(var_11, var_0))) : (~var_16))))));
                    }
                }
            }
        }
        arr_23 [i_0] = (((((1 & 0) ? -1440454623 : (~0))) != 56392));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_20 = (arr_18 [i_0] [5] [5]);
                    arr_29 [i_7] [i_6] [i_0] [i_0] = min((min((!1), ((!(arr_10 [i_7] [i_6] [i_7] [i_7]))))), ((!(((1 ? (arr_19 [0] [i_7] [i_0] [2]) : (arr_0 [1])))))));
                    arr_30 [i_0] [i_6] [i_7] = 30364;
                }
            }
        }
        var_21 -= ((33 * ((((((arr_6 [i_0]) / 56371))) ? ((1 ? (arr_3 [i_0]) : (arr_24 [i_0]))) : (((arr_28 [i_0] [i_0]) / (arr_18 [i_0] [i_0] [i_0])))))));
    }
    #pragma endscop
}
