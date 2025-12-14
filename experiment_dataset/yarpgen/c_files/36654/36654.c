/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (~(min(var_11, var_16)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    arr_10 [7] [i_1 + 1] [i_2] [i_1] = (~(min((arr_1 [i_2 - 2]), (arr_5 [i_0 + 1]))));
                    var_20 = min((((var_6 ? 14205709698929959558 : var_7))), (((var_9 || (arr_8 [i_0 - 1] [i_0 - 1])))));
                    var_21 = ((!((!(arr_9 [i_1 - 2])))));
                }
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    var_22 = 8455842736473364737;
                    var_23 *= (min(9990901337236186871, (arr_4 [i_3 + 1] [i_0 - 1] [i_1])));
                }
                for (int i_4 = 4; i_4 < 11;i_4 += 1) /* same iter space */
                {
                    arr_15 [i_4 - 3] [2] = (9990901337236186860 / (((arr_12 [i_4 + 2] [i_0] [i_0]) ? (arr_14 [i_0 - 1] [i_1] [i_4 - 4]) : (arr_1 [i_0 + 1]))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_24 = (~(arr_8 [i_4] [i_4]));
                        arr_18 [1] [10] [i_4 - 3] [12] [i_1 + 1] [2] = (((arr_4 [i_1 - 2] [8] [i_1 - 1]) < (arr_4 [i_1 - 1] [i_1] [i_1])));
                        var_25 = ((arr_13 [i_0 + 1]) - (arr_13 [i_0 + 1]));
                    }
                    var_26 = min((~5795120066845186955), 6862563707317029999);
                }
                for (int i_6 = 4; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_1] [i_1 - 1] [i_6 - 2] = 8455842736473364752;
                    var_27 += (((min((arr_14 [i_1 + 1] [i_1 + 1] [i_1 - 1]), (arr_20 [i_1 - 1] [i_1 + 1] [i_1 + 1])))) ? (arr_14 [i_1 + 1] [i_1 - 2] [i_1 - 2]) : (arr_14 [i_1 + 1] [i_1 - 1] [i_1 - 2]));
                    var_28 = var_8;
                }
                var_29 = ((!(arr_4 [i_0 + 1] [i_1 + 1] [9])));
                var_30 -= 11584180366392521623;
                var_31 = (max(var_31, (min(9990901337236186866, 14187682011837534340))));
            }
        }
    }
    var_32 |= 2860214149834032385;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                arr_26 [6] [6] [i_7] = (+((18446744073709551615 ? (arr_25 [10] [i_8] [i_8]) : (arr_25 [i_8] [7] [0]))));
                arr_27 [10] [10] = min(13534133725454839717, 15586529923875519230);
            }
        }
    }
    var_33 = min(var_10, var_7);
    #pragma endscop
}
