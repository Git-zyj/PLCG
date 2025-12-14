/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (min(var_14, 1921016870));
                arr_7 [i_0 - 1] [i_0 - 1] [i_1] = ((((-(!var_12)))) ? ((max((!2373950426), (min(var_1, var_1))))) : ((-var_12 ? var_10 : (((!(arr_5 [i_0] [i_1] [2])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_15 = (min(2147483647, ((max((arr_0 [i_3 - 2] [i_0 + 1]), 19)))));
                            arr_12 [i_0 - 1] [i_1] [i_2] [i_3] [i_2] [i_3] = var_11;
                            arr_13 [i_0] [i_0] [i_2] [i_3] = (((min(((2082680826 ? (arr_3 [i_3] [i_3]) : 80)), ((-(arr_9 [13] [i_2] [7]))))) == ((((((var_7 ? (arr_5 [i_0] [i_0] [2]) : -56))) || (arr_10 [i_0] [7] [i_0 - 1] [7] [i_3 - 1]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        var_16 = -1;
                        var_17 = (((arr_8 [i_4] [i_4 - 2] [i_7 - 2]) & 1));
                        var_18 |= ((!(~80)));
                        var_19 *= ((!(arr_21 [i_7] [i_6] [i_6] [2])));
                        arr_26 [i_4] [2] [i_4] [i_4] = -2373950425;
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        arr_29 [i_4] [10] [i_6] [i_8] = ((-(((arr_0 [i_4 - 1] [i_4 - 2]) ? (arr_0 [i_4 + 1] [i_4 + 1]) : 1))));
                        var_20 *= (min((min(var_11, 2373950416)), (((!(!1921016870))))));
                        var_21 = (arr_6 [1]);
                    }

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        arr_34 [i_4 + 2] [i_4] [i_6] = (max(-12288, (((-(~33236))))));

                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 11;i_10 += 1)
                        {
                            var_22 = -8589934591;
                            arr_38 [i_4] [i_5] [i_6] [i_4] [i_4] = -var_3;
                            var_23 = (min(var_23, -var_0));
                            var_24 += 1921016870;
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            var_25 = (max(var_25, ((((arr_30 [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4 - 2]) || (arr_30 [i_4 - 1] [i_4 - 2] [i_4] [i_4 - 1]))))));
                            arr_41 [i_4] [i_5] [i_6] [i_9] [i_11] = (((arr_16 [i_4] [i_5]) ? 8388096 : -1));
                        }
                        for (int i_12 = 1; i_12 < 9;i_12 += 1)
                        {
                            arr_44 [i_4 - 1] [i_5] [i_4] [i_9] [i_9] [i_12] = (min(1, ((max(64512, 17165880701263696185)))));
                            arr_45 [i_4] [i_4] [i_6] [i_9] [i_4] |= (min(((max((arr_6 [i_4 + 2]), (arr_23 [i_4] [i_4 + 1] [i_4] [9] [i_4 - 1] [i_4 + 1])))), (~1)));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            var_26 = (arr_28 [i_4] [i_5] [i_9] [i_5] [i_13] [i_6]);
                            var_27 = ((-(-37 >= var_1)));
                            arr_48 [i_13] [i_4] [i_9] [i_9] [i_6] [i_4] [i_4] = ((~((-1 ? (arr_23 [i_4] [i_5] [i_6] [i_9] [i_13] [i_13]) : 9522883555240221772))));
                        }
                        arr_49 [i_5] [i_5] [i_9] [i_4] = (min((max((arr_36 [i_4 - 2] [i_9] [i_4] [i_4] [i_6]), (arr_36 [i_4 + 1] [i_9] [i_6] [i_4] [i_5]))), (((!((min((arr_43 [i_4] [i_4] [i_4] [3] [i_4] [i_4] [i_4]), 65516))))))));
                    }
                    /* vectorizable */
                    for (int i_14 = 3; i_14 < 10;i_14 += 1)
                    {
                        var_28 = (min(var_28, (((~(arr_39 [i_4] [i_6] [i_5] [i_4] [i_5] [6] [i_4]))))));
                        arr_53 [i_4] [i_6] [i_4] = (((arr_30 [i_14 - 3] [i_14 + 3] [i_14] [i_14]) ? 854363538 : (arr_11 [i_14 + 1] [i_5] [i_6] [i_6])));
                        var_29 = 1;
                        var_30 = (arr_21 [i_14 - 1] [i_4] [i_4] [i_4 - 1]);
                        var_31 = (((~901568031822714881) ? (arr_9 [i_4 - 1] [i_4 - 2] [i_14 + 3]) : (~var_3)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
