/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (((((((var_13 == 1) != ((var_7 ? var_12 : var_8)))))) == (max(((((arr_0 [i_0]) == var_11))), (max(var_7, (arr_0 [i_0])))))));
        var_16 += (1139139946 && var_7);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] = (max(var_12, var_9));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_10 [i_1] [i_1] [3] = ((-(arr_8 [i_1] [i_1])));
            arr_11 [i_1] [i_2] [i_1] = -56;
            var_17 += (max(-var_0, (arr_6 [i_2] [i_2])));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_14 [i_3] [i_3] [i_1] = (max((~var_14), var_3));
            arr_15 [i_1] = (arr_9 [i_1]);
        }
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_20 [i_4] = ((((((0 & 2843771554) ? (max(var_6, var_6)) : 1))) ? var_15 : (-var_7 % var_12)));
        var_18 = var_13;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_19 = ((-((3155827355 ? 32742 : (arr_12 [i_6] [13])))));
                    arr_28 [i_6] [9] = ((((max((arr_24 [i_6] [i_6]), (arr_1 [i_6])))) ? (var_12 == var_13) : (((arr_24 [i_6] [i_6]) % var_14))));
                    arr_29 [i_4] [i_6] [i_5] [i_6] = ((((min(var_7, (arr_24 [i_6] [i_5])))) ? 134086656 : (max((arr_6 [i_6] [i_5]), (((var_13 ? var_1 : (arr_24 [i_6] [i_6]))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_20 = (((max(var_7, (arr_34 [i_6]))) >= (arr_27 [i_6] [i_6] [3] [i_6])));
                                var_21 += (min((arr_18 [i_4] [2]), var_12));
                                var_22 *= (min(((min(var_14, (arr_34 [6])))), ((!((18446744073709551615 >= (arr_33 [i_4] [2] [4] [i_4] [2])))))));
                                var_23 = (arr_23 [i_8]);
                            }
                        }
                    }
                }
            }
        }
        arr_36 [8] = (((((max(var_12, var_7))) % (min(65532, var_5)))));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        arr_40 [i_9] = max(((((max(173, var_0))) ? var_1 : (min(68569299, (arr_19 [i_9]))))), var_3);
        arr_41 [1] [1] = arr_12 [i_9] [i_9];
    }
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 13;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 13;i_11 += 1)
        {
            {
                var_24 = (((var_14 != -7853681917813125948) ? ((min((arr_8 [8] [8]), (~222)))) : (min((min(2183510030, var_8)), (((-(arr_43 [i_10]))))))));
                var_25 = (arr_8 [4] [4]);
                var_26 = (min((min((((!(arr_43 [0])))), (arr_6 [4] [i_11 + 1]))), ((((!134086656) >= (var_3 >= var_13))))));
                var_27 += ((((max(((var_2 * (arr_45 [i_10] [i_11 - 2] [2]))), var_13))) * -78));
            }
        }
    }
    var_28 = ((var_5 ? var_13 : (max(0, var_3))));
    #pragma endscop
}
