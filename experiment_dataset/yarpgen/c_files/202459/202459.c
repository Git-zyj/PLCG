/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = (((min(((1805728394986111993 ? (arr_5 [i_4] [i_1] [i_0]) : (arr_7 [i_3 + 1] [i_3] [i_3] [i_0]))), var_2)) == ((((arr_6 [i_0] [i_0] [i_2]) * (!var_16))))));
                                arr_11 [i_3] [i_3] [i_1] [i_2] [i_3 + 1] [i_3 + 1] [i_3 + 1] = (((((-1 != -1) || (((var_14 ? (arr_5 [i_4] [i_1] [i_1]) : (arr_2 [i_0])))))) ? ((1 ? ((((arr_5 [i_1] [i_2] [i_2]) - (arr_8 [i_3] [i_3])))) : ((var_8 ? (arr_7 [i_3] [i_3] [i_3 - 1] [i_3]) : var_1)))) : (((1 ? 0 : 134217727)))));
                                arr_12 [i_2] [i_2] [i_2] &= ((min((min(var_5, (arr_1 [i_0] [7])), (((3112366254539197959 ? 0 : (arr_0 [i_4]))))))));
                                var_20 = ((var_7 - (((((arr_0 [0]) == (!0)))))));
                            }
                        }
                    }
                    var_21 = ((((((101 >= 6178637275867947918) ? 0 : var_8))) ^ 0));
                    arr_13 [12] [i_1 - 2] = (var_16 ? ((((arr_7 [i_0] [i_2] [i_2] [i_2]) ? 65535 : var_13))) : (max(var_9, ((-12434 ? -2718426929081250695 : 5314287740788594469)))));
                    var_22 = (max(var_22, ((((((~(arr_7 [i_1 + 1] [i_0] [i_2] [10])))) ? ((~(((!(arr_5 [i_2] [i_2] [i_2])))))) : (max((min((arr_6 [i_0] [i_1] [i_1]), 1)), (-1058526251888712988 && -301172130))))))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        var_23 -= 65532;
        var_24 = (1903 <= 2987829222);
        arr_16 [i_5] &= ((((!(arr_0 [i_5]))) ? (((-(arr_0 [i_5])))) : (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5])));
        var_25 = -2718426929081250695;
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_26 = (arr_7 [i_6] [i_6] [i_6] [i_6]);
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {

                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        var_27 = ((var_6 > (((!(arr_4 [16] [i_7] [i_7 - 1]))))));
                        arr_29 [i_6] [13] [i_6] [13] = (((((14 ? 0 : -1388052391))) ? ((((255 ? var_1 : (arr_4 [i_9] [i_7] [0]))) ^ (arr_19 [6]))) : (((((540503449 ? var_9 : 65535)) ^ ((((arr_27 [i_9 + 1] [i_9] [i_9 - 1]) && var_17))))))));
                    }
                    arr_30 [i_6] [i_7 + 1] [i_8] [i_7 + 1] &= var_8;
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        arr_35 [i_10] = var_17;
        arr_36 [i_10] = var_5;
        var_28 = ((((((!((((arr_32 [i_10]) ? 17722 : 3944460399))))))) != ((96 * (((arr_3 [i_10]) ? var_1 : (arr_4 [i_10] [i_10] [i_10])))))));
    }
    var_29 = var_0;
    #pragma endscop
}
