/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max((~1), var_3))) ^ ((1148641332 % (min(1148641332, var_16))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_0] = (min(510743178909496625, (arr_3 [i_2 - 1] [i_2 + 1] [i_2 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_18 [i_3] [i_1] [i_2 - 2] [i_3] [i_4] = ((~(0 ^ 11937)));
                                arr_19 [i_0] [i_0] [i_3] [i_0] [i_0] = -1148641327;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 8;i_6 += 1)
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((1 ? 19170 : 1));
                            arr_28 [i_5] = ((+(((arr_13 [i_2]) ? 1148641349 : var_1))));
                            arr_29 [i_0] [i_1] [i_2] [i_1] = var_14;
                            var_20 = (max(var_20, (arr_15 [i_5] [i_5] [i_2 + 1] [i_1] [i_5])));
                        }
                        var_21 = ((!(arr_6 [i_2 - 2])));
                        var_22 = (~(arr_20 [10] [i_1] [i_2] [i_5]));
                    }
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_23 = (((!(var_10 ^ 18446744073709551608))));
                            var_24 -= (((((arr_2 [i_2 - 2] [i_7 + 1]) && (arr_4 [i_2 - 1] [i_2 - 1]))) ? ((((arr_2 [i_2 + 1] [i_7 - 1]) == (arr_4 [i_2 - 2] [i_2])))) : (arr_4 [i_2 - 2] [i_2])));
                            var_25 = ((!((min(((max(-1148641332, 1148641326))), (min((arr_1 [i_1]), (arr_8 [i_7] [6] [i_7] [6]))))))));
                            var_26 = 46372;
                        }
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_27 = (((min(19164, (arr_22 [i_7 + 2] [i_7] [i_7 + 2] [i_7 + 1] [i_7])))) - ((min((arr_39 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 2] [i_7]), (arr_22 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])))));
                            var_28 = (min(var_28, 12632991024983731109));
                        }
                        var_29 = (min(var_29, (!-43)));
                        arr_40 [i_7] [i_0] [i_1] [i_0] = 0;
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_30 = (min(var_30, ((((((((max(17071070205889058108, 36133))) ? ((1148641339 ^ (arr_20 [i_0] [i_0] [i_0] [10]))) : (arr_12 [i_10] [2] [2] [2])))) ? ((190494313 ? 19152 : 46366)) : (arr_31 [i_0] [i_1] [i_1] [i_10] [i_10]))))));
                        var_31 = (max(var_31, ((((((max((arr_43 [i_0] [i_0] [i_10]), 19170)))) && (((-1148641334 & (arr_39 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1])))))))));
                        arr_45 [3] [i_1] [i_2] [i_2 - 2] [3] [i_10] = (!var_10);
                    }
                }
            }
        }
    }
    #pragma endscop
}
