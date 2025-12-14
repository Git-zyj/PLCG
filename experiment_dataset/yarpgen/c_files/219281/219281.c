/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_2] [i_2 + 1] = ((var_13 ? ((max((min(255, (arr_2 [2]))), (arr_7 [i_0] [i_1] [1])))) : ((~(arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = 255;
                                var_17 = (max(var_17, ((min((((arr_15 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_4]) - 4)), 20765)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {

                            for (int i_9 = 0; i_9 < 20;i_9 += 1)
                            {
                                var_18 = 66;
                                arr_34 [i_5] [i_6 - 1] [i_5] = ((!(!255)));
                                var_19 -= 17755905942396156348;
                                arr_35 [i_5] [i_5] [1] [i_9] = (max((min((arr_17 [i_5]), var_15)), ((((1 && 67092480) ? ((max(1, 20765))) : (arr_20 [i_6 - 2] [i_6 + 1]))))));
                            }
                            for (int i_10 = 0; i_10 < 20;i_10 += 1)
                            {
                                arr_38 [i_5] [1] [1] [i_6] [i_5] = (min((arr_21 [i_6 + 1] [i_6 - 2]), (1 / 71)));
                                var_20 = (max((((!((max((arr_37 [i_5] [5] [i_6] [i_8] [i_10] [i_8]), (arr_21 [i_5] [i_10]))))))), ((((max((arr_23 [i_5]), 0))) ? ((max(1, (arr_31 [i_10] [i_5] [i_7] [i_6] [i_5])))) : (arr_17 [i_5])))));
                                var_21 = (arr_37 [i_6 - 2] [i_6] [i_7] [i_6 - 2] [i_10] [i_6 - 2]);
                            }
                            var_22 = (min(var_22, var_7));
                            var_23 = 168;
                        }
                    }
                }

                /* vectorizable */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    arr_42 [i_5] [i_6 + 1] [i_11] = (arr_32 [i_6] [i_6] [4] [i_6 + 1] [i_11]);
                    var_24 = arr_28 [i_6 - 1] [i_11];
                    arr_43 [i_5] [i_5] = (arr_41 [i_5] [i_6] [i_6] [i_6]);
                }
                for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        var_25 = ((((((1 ? 18446744073709551605 : (arr_39 [i_5] [i_12] [i_5]))) % 1)) == (((min((arr_32 [i_5] [i_6] [i_5] [i_13] [i_6 - 1]), ((max(0, (arr_18 [i_13]))))))))));
                        var_26 = (min(var_26, ((max(((max((((!(arr_46 [2] [i_6] [i_5])))), (arr_20 [i_6 - 1] [i_6])))), (min(((1 ? (arr_45 [i_13]) : (arr_49 [i_5] [i_6]))), (arr_29 [19] [i_6]))))))));
                        var_27 = (min(((((arr_27 [i_6] [i_6 + 1] [i_6 - 1]) ? (arr_27 [i_6] [i_6] [i_6 - 1]) : (arr_27 [i_6] [i_6] [i_6 - 1])))), (min(19, (arr_31 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 + 1])))));
                    }
                    arr_50 [i_5] = ((!((((arr_48 [i_5] [i_6 + 1] [i_6 - 1] [i_6 - 1]) ? (arr_48 [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 2]) : (arr_48 [i_5] [i_6 + 1] [i_6 + 1] [i_6 - 1]))))));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
                {
                    var_28 -= (arr_21 [i_6 + 1] [i_6 - 1]);
                    var_29 = -94;
                    var_30 = (~1);
                    var_31 = (!(arr_30 [i_6] [i_6 - 2] [i_6 - 1] [i_6 - 2] [i_14] [i_14]));
                }
                for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
                {
                    var_32 = (max(var_32, ((min(((-((1 ? 0 : 32767)))), ((max(((max(1, 1))), 0))))))));
                    arr_57 [1] [i_6] [i_5] [i_15] = ((+(((arr_40 [i_6 - 2] [i_6 + 1]) ? (arr_40 [i_5] [i_6 + 1]) : 6109777595324365138))));
                }
            }
        }
    }
    #pragma endscop
}
