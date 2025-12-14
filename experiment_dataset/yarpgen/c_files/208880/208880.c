/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_21 *= var_19;
                var_22 -= ((-5 ? (1188535013 / -5) : 13439));
                arr_6 [i_1] = ((((((arr_3 [i_0 - 1]) ? (arr_3 [i_0 + 1]) : var_2))) ? (arr_4 [3] [i_1 + 1]) : (arr_0 [i_1 - 1] [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_3] [i_3] &= ((((((arr_7 [i_3] [i_3]) ? (arr_7 [i_3] [i_3]) : (arr_7 [i_3] [i_3])))) ? ((((arr_7 [i_3] [8]) ? (arr_7 [i_3] [i_3]) : (arr_7 [i_3] [i_3])))) : ((var_9 ? 54 : var_3))));
                var_23 = (max(var_23, (((((((var_6 ? (arr_7 [i_3] [i_3]) : (arr_7 [i_3] [i_3]))))) ? (arr_8 [i_3]) : ((((((((arr_8 [i_3]) < 179)))) <= (arr_9 [i_3])))))))));
                var_24 = ((~(arr_8 [i_2])));

                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    var_25 = var_1;
                    var_26 = 2402544276710531460;
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_24 [i_2] [i_3] [5] [i_2] = (((!-747111165079277338) ? (arr_13 [i_3] [7] [i_2] [i_6]) : (((43859 ? var_8 : (arr_8 [i_6]))))));
                        arr_25 [i_2] [i_3] [i_5] [i_6] [i_5] [i_2] = (arr_21 [i_2] [i_2] [21] [i_2]);
                        arr_26 [i_2] [i_3] [i_2] [i_6] = ((((var_8 ? (arr_9 [i_2]) : var_1)) < (arr_10 [i_2])));
                        var_27 += var_1;
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_28 = (max(var_28, (arr_22 [i_8] [i_5])));
                            var_29 = (((var_0 | (arr_13 [i_8] [i_5] [11] [i_2]))));
                            var_30 = (min(var_30, (((~(((arr_10 [i_3]) ? 18446744073709551615 : (arr_28 [i_5]))))))));
                            var_31 = (arr_27 [i_2] [i_2] [i_2] [i_2]);
                        }
                        var_32 &= ((((!(arr_8 [i_2]))) ? (arr_28 [i_3]) : ((26 << (1451169399 - 1451169377)))));
                    }
                    var_33 = ((9079680454153087675 ? (arr_17 [11]) : 21679));
                    var_34 = (!7595877846520193644);
                    arr_32 [i_2] = ((arr_7 [i_2] [5]) ? (min((~-8), -1)) : (arr_15 [i_2]));
                    var_35 = (arr_14 [i_3] [5] [15] [i_3]);
                }
            }
        }
    }
    var_36 = ((((((!var_0) | var_13))) ? ((var_11 ? (min(var_11, var_0)) : 1333694534)) : ((((58449 > (!var_1)))))));
    var_37 = var_6;
    #pragma endscop
}
