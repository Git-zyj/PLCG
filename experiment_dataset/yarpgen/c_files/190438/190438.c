/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (min(var_4, var_1));
                var_14 = (((((~((min(var_2, var_6)))))) ? ((((arr_3 [i_0 - 1] [i_0 + 1] [i_0]) && (arr_4 [i_0] [i_0 + 2] [i_0])))) : ((min(var_6, var_6)))));
                var_15 = ((((((!(24261 < var_7))))) != (((1733 ? 1 : var_4)))));
            }
        }
    }
    var_16 = (((min((24241 & 35492), var_2)) ^ ((8 ? var_7 : 24264))));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {

                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_3] [i_4] [i_5] = 4;

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_3] [i_2] = ((-63 < (64 * 37558)));
                            var_17 = (((arr_20 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]) % (1 * var_8)));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_18 = 80;
                            arr_25 [i_2] [i_5] [i_4] [i_5] = var_2;
                        }
                        var_19 = ((-((min(1, 1)))));
                    }
                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        arr_30 [i_2] [i_2] = ((((var_4 ^ var_1) ? (arr_4 [i_2] [i_2] [i_2]) : (arr_8 [i_2 + 1] [i_3]))) != ((((1 < (arr_6 [i_2 + 2] [i_8]))))));
                        arr_31 [i_3] [i_2] = -1294190958;
                    }
                    for (int i_9 = 1; i_9 < 8;i_9 += 1)
                    {
                        arr_34 [i_2] [i_3] [i_2] [i_3] [i_9 + 1] = (min(13622, 255));
                        arr_35 [i_2 - 1] [i_3] [i_3] [i_2] [i_2] [i_9] = ((((min((arr_11 [i_3] [i_4] [i_3]), var_2))) ? ((var_2 ? (((arr_28 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_4]) ? (arr_29 [i_2] [i_3] [i_4] [i_2]) : (arr_9 [i_2] [i_2]))) : var_6)) : var_1));
                        arr_36 [i_2] [i_2] [i_2] [i_9] [i_2] [9] = max(251, 13674571079936224569);
                        arr_37 [i_2] [i_3] [i_3] = (((max(3785885554, var_6)) - (max(1, ((958431211 - (arr_23 [i_2] [i_2] [i_2] [i_9] [i_2])))))));
                    }
                    arr_38 [i_2] [i_2] [i_2] = (((((4772172993773327044 ? (arr_10 [i_2 - 1] [i_2 - 1]) : 1))) ? (((((1 ? 13674571079936224598 : (arr_15 [i_3] [i_2] [i_2] [9]))) > (((max((arr_11 [i_2] [i_2 + 2] [i_2]), (arr_2 [i_2])))))))) : -63));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_46 [i_2] [i_3] [i_2] [i_2] [i_10] [i_10] [i_11] = (((!var_9) * -49));
                                var_20 = (arr_45 [i_2] [i_11]);
                                var_21 = ((188797327 != (max((~67108863), -80))));
                                arr_47 [2] [i_3] [i_10] [i_11] &= (((arr_16 [i_2] [i_3] [i_2 - 1] [i_2]) || ((min((arr_16 [i_3] [i_3] [i_2 + 2] [i_4]), var_6)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
