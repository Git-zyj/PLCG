/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 &= (~((165 + (-4820466486507944763 + 8623446327022210050))));
                    var_20 = (arr_0 [i_0] [i_1 - 1]);
                    arr_9 [i_2] = max((arr_4 [i_2 + 2] [i_2 + 1]), (max(22320, (14348 + -1465131630))));
                    var_21 = (max(var_21, (arr_2 [i_0] [i_0] [i_2])));
                }
            }
        }
    }
    var_22 = 148;
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    arr_16 [i_4] [4] [i_5] = (max((!-25289), var_18));

                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        arr_20 [i_4] [i_4] [i_5] [10] [i_5] [i_6 + 1] = var_0;

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_23 = 16744829231279089385;
                            arr_24 [i_6] [i_6] |= ((((max(var_0, (arr_17 [i_3 + 2] [i_6])))) - (((arr_17 [i_3 + 2] [i_6]) ? (arr_17 [i_3 + 3] [i_6]) : (arr_17 [i_3 + 1] [i_6])))));
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_24 -= ((((max(1244608794, (-2147483647 - 1)))) && 3010660527566938732));
                            var_25 = ((((!((max(var_11, var_13))))) || ((!(arr_22 [i_4] [i_4] [i_5] [i_8] [i_8])))));
                        }
                        var_26 = (((25288 ? 1701914842430462230 : 32391)));
                        var_27 |= ((-(max(var_11, (arr_12 [i_3 + 2] [i_4] [i_6 - 1])))));
                        var_28 = -var_1;
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        arr_30 [i_3] [i_4] [14] [i_3] &= ((205 | (arr_18 [i_3] [i_3] [i_3] [i_3 + 1] [21])));
                        arr_31 [i_3] [14] [i_5] [i_3] |= (((arr_15 [i_3] [i_4]) >> ((((var_15 ? (arr_17 [2] [2]) : 1701914842430462231)) - 28505))));
                        var_29 = ((32987 * 32987) << (((arr_29 [i_3 + 1] [i_3 + 3] [24] [1]) - 167)));
                        var_30 = 1701914842430462217;
                        var_31 -= ((((((arr_18 [i_3 + 3] [i_3 + 3] [i_5] [i_9] [i_5]) - var_11))) ? (arr_15 [i_3 + 1] [i_3 + 1]) : var_5));
                    }
                    var_32 = ((((((-((max(-25289, 43650))))) + 2147483647)) << (((!(arr_15 [i_3 + 2] [i_3 + 2]))))));
                    arr_32 [i_4] [i_4] = (max((arr_14 [i_3] [i_4] [i_4]), (max((arr_14 [i_3 - 1] [i_3 + 1] [i_4]), var_15))));
                }
                for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                {
                    arr_35 [i_3] [i_4] [18] |= ((max(((-(arr_23 [i_3 - 1] [19] [i_3 - 1] [19] [i_10])), var_11))));
                    var_33 = (max((1701914842430462217 || var_3), (arr_17 [i_3 - 1] [i_4])));
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                {
                    var_34 = ((max((arr_27 [1] [i_4] [i_3]), (((arr_8 [i_4] [i_4] [i_4] [i_3]) ^ var_14)))));
                    var_35 = (~(((arr_14 [i_3 - 1] [i_3 + 2] [8]) + (arr_14 [i_3 + 2] [i_3 + 2] [14]))));
                }
                arr_38 [i_4] = ((!(var_16 && 11534172185058712220)));
            }
        }
    }
    #pragma endscop
}
