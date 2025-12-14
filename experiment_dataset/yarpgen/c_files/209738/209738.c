/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((163 ? 163 : var_5)), (~1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [i_2] = var_7;
                        var_16 = (((((93 ? 1 : var_2))) ? var_9 : (((arr_3 [i_0]) ? 93 : 65513))));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_17 = (1 | 73);
                        arr_14 [i_0] [i_0] [i_2] [4] [4] [i_1] = (17339272973701109666 / 93);
                    }
                    arr_15 [i_2] = (((arr_6 [i_2 - 1] [i_2 + 3] [i_2 - 1]) ? (arr_6 [i_2 - 2] [i_2 - 1] [i_2 + 1]) : (arr_6 [i_2 + 3] [i_2 + 2] [i_2 - 1])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {

                /* vectorizable */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    arr_24 [i_6] = ((36645 ? 1336183576 : ((1 ? 1107471100008441936 : -21474))));
                    var_18 = 249;
                    var_19 = ((+(((arr_6 [12] [12] [i_7]) | (arr_2 [i_5] [i_5 - 1])))));
                    arr_25 [i_5] [i_6] [i_5] = ((((((arr_13 [i_6] [i_5]) ? var_7 : var_5))) | (var_8 - 31)));
                    var_20 = ((var_4 / (arr_10 [i_5 - 3])));
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    var_21 += (((((((var_9 >> (var_1 - 1856381696))) >> (var_10 - 670938504)))) / (((151 * 3645799102) ? (arr_6 [i_5 - 3] [i_5 + 2] [i_5 - 1]) : (((arr_12 [14] [2] [i_6] [i_5 + 1] [i_5]) % var_3))))));
                    var_22 += (((((163 / (arr_1 [i_5 - 2] [i_5 + 2])))) ? ((4850448859458705233 ? var_12 : (arr_1 [i_5 - 1] [i_5 - 1]))) : (243 ^ var_9)));
                    var_23 -= var_1;
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    arr_32 [i_6] [i_6] [i_6] [i_9] = ((((max(((((arr_3 [i_9]) < var_3))), 39))) ? (((arr_26 [i_5 + 3]) - (arr_26 [i_5 + 2]))) : -664597429));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_24 += var_11;
                                var_25 = (max(var_25, ((((((((max(14113693485531634791, (arr_21 [i_5] [i_5] [i_5]))) <= ((((arr_1 [i_10] [8]) ? 1 : var_9))))))) | ((4122078151 / (arr_9 [i_11] [i_9] [i_5] [i_5]))))))));
                                var_26 = (((arr_20 [i_11]) | (max((arr_36 [i_5 - 3] [i_9] [i_9] [i_10] [i_9] [i_5 - 1]), 17329268911994967922))));
                                arr_40 [3] [i_6] [3] [i_6] [11] [5] = ((((((((arr_23 [4] [4] [1]) | 219))) ^ ((var_7 ? var_0 : -118)))) | ((+(((arr_5 [11] [11] [i_11]) ? var_5 : var_1))))));
                                var_27 = 65510;
                            }
                        }
                    }
                }
                for (int i_12 = 1; i_12 < 11;i_12 += 1)
                {
                    var_28 = (arr_43 [i_5]);
                    var_29 = (min(var_29, 1819799187));
                }
                var_30 -= (arr_21 [i_5] [i_5] [i_5 + 2]);
                var_31 = ((1 * (1 <= 2958783720)));
            }
        }
    }
    #pragma endscop
}
