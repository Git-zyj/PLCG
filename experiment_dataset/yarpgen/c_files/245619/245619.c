/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_19 = var_1;
                                var_20 = var_13;
                                arr_18 [i_0] [i_1] [i_0] [i_1] [i_4] = ((!((min(0, (arr_6 [i_1 + 1] [i_1 + 2]))))));
                            }
                        }
                    }
                }
                arr_19 [i_1] = (((((+-32888420) + 2147483647)) << (((((min((~16384), ((max((arr_3 [11] [i_1 + 2]), 1))))) + 16390)) - 5))));
                arr_20 [i_1] = (max((((!(arr_4 [i_1 + 2])))), (max((arr_4 [i_1 + 1]), var_6))));
                arr_21 [i_1] = (~-7932079528299519931);
            }
        }
    }
    var_21 = (!var_15);
    var_22 = (((!var_3) ? var_15 : (!var_15)));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 12;i_6 += 1)
        {
            {
                arr_28 [i_6] [i_6] [i_6 + 3] = ((+((((arr_22 [i_5]) || ((min((arr_24 [i_5] [i_5]), var_4))))))));
                var_23 = (arr_26 [i_5] [i_6] [10]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {

                            for (int i_9 = 0; i_9 < 15;i_9 += 1)
                            {
                                arr_39 [i_9] [i_8] [i_7] [i_5] [i_7] [i_5] [i_5] = (((max(((min(var_10, var_10))), (max(var_11, (arr_36 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))) ^ 67));
                                arr_40 [1] [i_7] [i_7] = (max(var_12, ((~(arr_22 [i_7])))));
                            }
                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 15;i_10 += 1)
                            {
                                var_24 = var_15;
                                arr_44 [i_10] [i_8] [i_7] [i_7] [4] [i_5] = var_4;
                                arr_45 [i_7] [i_5] [5] [5] [i_5] [i_5] = (arr_38 [9] [i_10] [i_10] [i_10] [i_10] [i_6 + 2]);
                            }
                            /* vectorizable */
                            for (int i_11 = 0; i_11 < 15;i_11 += 1)
                            {
                                var_25 = var_16;
                                var_26 = var_6;
                                arr_48 [i_8] [i_7] [i_7] [i_5] = ((0 && (!var_18)));
                                arr_49 [i_7] [i_6 + 2] [i_6 + 2] [i_7] [i_7] [i_6] [i_6 - 4] = ((var_11 ? 18446744073709551613 : (((arr_46 [1] [i_6] [1] [1] [i_7]) ^ var_12))));
                            }
                            /* vectorizable */
                            for (int i_12 = 0; i_12 < 15;i_12 += 1)
                            {
                                var_27 = (max(var_27, var_11));
                                var_28 = (arr_47 [i_7] [i_6 - 4] [i_6 - 2] [i_6 - 2] [i_6 - 4] [i_7]);
                                var_29 = var_12;
                                var_30 = (min(var_30, (arr_51 [4] [i_6] [i_12] [i_6] [i_12])));
                                arr_52 [i_12] [i_7] [8] [i_7] [i_5] [i_7] [i_5] = (((arr_24 [i_6 - 2] [i_6 - 1]) ? var_1 : (((arr_30 [i_6] [i_12] [i_7]) ? 0 : 56))));
                            }
                            arr_53 [i_7] [i_7] = ((+(((arr_51 [i_6 + 3] [i_6 - 1] [i_7] [i_6] [i_6 - 1]) | var_11))));
                        }
                    }
                }
            }
        }
    }
    var_31 = (min(var_31, ((max(((((11864881545595970914 << var_8) == ((max(var_15, var_4)))))), (((max(var_4, var_14)) / (var_3 >= var_17))))))));
    #pragma endscop
}
