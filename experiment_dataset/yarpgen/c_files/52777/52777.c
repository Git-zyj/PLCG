/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 = (36144 & 19350);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0 - 2] = var_13;
        arr_4 [12] = var_7;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = ((60 * (((arr_9 [i_0] [10]) & (arr_9 [i_0 - 1] [i_0])))));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            var_20 = (((arr_9 [i_0 - 1] [i_4 + 3]) ? (arr_9 [i_0 - 2] [i_4 + 2]) : (arr_9 [i_0 + 1] [i_4 + 2])));
                            var_21 = (max(var_21, (!172)));
                        }
                        var_22 = -6344;

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_16 [i_0] [i_0] [i_2] [i_3] [i_5] [i_5] [i_2] = 2015589852;
                            arr_17 [8] [8] [i_0] [i_5] [i_5] = (166 == 1621853429);
                            var_23 = ((var_2 ? (arr_14 [i_3] [i_5] [i_5] [i_0]) : (arr_2 [i_0 + 1])));
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
    {
        arr_21 [i_6 - 1] = (((19334 ? 4294967295 : 255)));
        arr_22 [i_6] [i_6] = (((((arr_20 [i_6 - 1]) && 4)) ? ((((!(((17547495971922090975 ? var_8 : -26673))))))) : var_13));
    }
    for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    var_24 = (((((((((arr_26 [11] [i_8] [11]) ? 165 : 22277))) ? 149 : (arr_23 [i_7 + 2] [i_7 + 2])))) * (min(((-(arr_26 [i_7] [i_7] [i_9]))), 1511462346))));
                    arr_30 [i_7 + 1] [i_7] [i_8] [i_9] = (((((((var_7 ? 32767 : var_10)) & ((var_14 ? (arr_26 [i_7] [i_7] [i_7]) : (arr_28 [i_8])))))) ? ((((arr_28 [i_7 + 1]) ? (arr_25 [i_7]) : var_16))) : (10165679457632068709 | 2)));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                arr_35 [i_7 + 2] [i_8] [11] [i_10] [i_7] = (((!10208) + ((2094301052 ? 2 : -2129508823))));
                                arr_36 [i_7] [i_8] [i_9] [i_7] [1] [i_11] [i_11] = (((((9042 * (((arr_25 [i_7]) ? (arr_27 [i_7] [i_11] [i_11]) : 22275))))) - var_2));
                            }
                        }
                    }
                }
            }
        }
        var_25 = (245 == -1);
    }
    #pragma endscop
}
