/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_13 = (((3231630875 || (arr_7 [i_1] [i_1] [i_2]))));
                        var_14 = (arr_2 [i_0] [6]);
                        arr_12 [i_0] [i_0 + 1] [i_2] [i_1] = 3698172154478174666;
                        var_15 += (arr_0 [i_2]);
                    }
                    var_16 |= ((((min(-7737844959571717048, 1063336416))) ? 2318511606 : (((((min(3260673233125174831, (arr_0 [i_2]))) != (((((arr_3 [i_0] [i_2]) <= 15186070840584376785))))))))));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_15 [i_4] = (((~5471631092917616317) ? (((((47962 >= (arr_13 [i_4] [i_4])))) % (arr_13 [i_4] [i_4]))) : ((((arr_13 [i_4] [i_4]) != (arr_14 [i_4]))))));
        var_17 = var_10;

        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            var_18 = (((arr_17 [i_5] [i_5 - 1] [i_5 + 2]) ? (arr_16 [i_5 + 2]) : ((max((arr_16 [i_5 - 1]), (arr_16 [i_5 + 3]))))));
            var_19 = ((((((arr_16 [i_5 + 2]) & (arr_16 [i_5 - 1])))) ? ((max((arr_17 [i_5] [i_5 - 1] [i_5 - 1]), (max((arr_13 [i_4] [i_4]), (arr_17 [i_4] [i_4] [i_4])))))) : 17573));
            var_20 = (max((arr_17 [i_5 + 3] [i_4] [1]), 47968));
            var_21 = (min(((((1063336420 > 914) != (arr_14 [i_5 + 3])))), (min((arr_13 [5] [i_4]), (arr_18 [13] [i_5])))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_22 = (((((arr_14 [i_6]) ? 1063336420 : var_7)) * (((4294967268 ? (arr_13 [i_6] [i_4]) : 2147483647)))));
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_23 = ((((((arr_18 [i_4] [i_4]) ? 57344 : (arr_13 [i_8] [i_8])))) != ((3231630875 ? 15186070840584376785 : 8165087809798729711))));
                            var_24 = (min(var_24, (arr_29 [i_8] [i_8] [i_8] [i_8] [1] [i_8] [i_8])));
                            var_25 = 1063336420;
                        }
                    }
                }
            }
            var_26 = (arr_13 [1] [i_6]);
        }
    }
    var_27 = 3231630876;
    #pragma endscop
}
