/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((((!((min(var_2, 710975738))))) ? ((var_2 ? var_6 : (32246 + 22537))) : var_1)))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_18 &= (arr_0 [12] [12]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (arr_0 [i_0] [i_2])));
                    var_20 = (max(119, 72057593970819072));
                    var_21 -= ((((((arr_7 [2] [i_2] [i_2]) & 1915271731))) && ((!(arr_6 [i_0] [i_2] [i_0 - 2])))));
                    arr_9 [i_0] [i_1] = (((arr_3 [i_0 + 4]) >> (2379695593 - 2379695579)));
                }
            }
        }
        arr_10 [i_0] = 179;

        for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
        {
            var_22 = (((((((arr_5 [9]) - (arr_1 [i_0] [i_0]))) - ((2850053031 ? -1 : 32250)))) | (((!(arr_6 [i_0] [i_0] [i_3 - 1]))))));
            arr_13 [i_0] [i_0] = -32236;
        }
        for (int i_4 = 2; i_4 < 12;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_21 [i_0] [i_4 + 1] [i_5] [i_5] [i_4 + 1] = 179;
                        var_23 |= ((105 ? -32 : 1));
                        arr_22 [i_0] [i_0] [i_0] [i_5] [i_6] [11] = ((((510 ? (min((arr_14 [i_5]), (arr_3 [i_4]))) : 2379695564))) + 8301623714834122066);
                    }
                }
            }
            var_24 = (((arr_14 [i_0 + 4]) - ((max((arr_5 [i_0 + 4]), -9)))));
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_25 += (max(94, (((arr_16 [i_0 + 2] [7] [i_0 - 1]) ? -911265370 : (arr_4 [i_0] [i_0 + 1] [3])))));
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_26 = (min(var_26, (1 <= -99)));
                            var_27 = ((1376 ? -181794917 : (((min(70, 181794916)) & 42))));
                            var_28 = 17986385576431108662;
                        }
                    }
                }
            }
            var_29 = (arr_24 [i_0 + 1]);
            var_30 = ((((min(((12 ? 3862901107 : (arr_4 [1] [i_0] [i_7]))), 58682))) ? (min(-4089850236688005961, 11684369598240351820)) : (((((min((arr_30 [i_0] [i_0 + 3] [i_7] [i_7]), 42027))) ? 1 : 175777052)))));
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    {
                        var_31 = ((((min(((((arr_30 [i_0 + 4] [1] [i_0 + 1] [i_0]) > 14))), 1212))) ? (arr_32 [i_0 + 3] [3] [i_0 + 4] [i_7] [8] [4] [i_12]) : 33));
                        var_32 = (min((arr_14 [i_0]), (((14 ? (arr_25 [i_11] [i_7] [i_0]) : (arr_25 [i_0] [i_7] [i_0]))))));
                        var_33 = ((-(((-1 >= 4089850236688005960) ? -1 : (arr_5 [i_0 + 4])))));
                    }
                }
            }
        }
        var_34 = ((((((arr_34 [i_0] [i_0]) <= (((min(43528, 116))))))) != ((min((arr_2 [i_0] [i_0] [i_0]), 22039)))));
    }
    #pragma endscop
}
