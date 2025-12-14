/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(((((16440 ? var_5 : var_10)) ^ var_11)))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = (((arr_0 [i_0] [i_0]) >> ((((((arr_4 [i_0 - 1]) & 16440))) - (max(17778392225019419673, (arr_6 [0] [i_1] [11])))))));
                    var_14 = (((((((max(53763, -1129173433811266749))) ? (((!(arr_1 [i_0])))) : (arr_0 [i_0] [1])))) ? (max((((1877363888 << (16449 - 16422)))), (arr_2 [i_0] [i_0]))) : ((((arr_3 [i_0 + 1]) ? (arr_0 [i_0 + 1] [i_0 + 3]) : (arr_3 [i_0 + 2]))))));
                    arr_8 [i_0] = 49086;
                }
            }
        }
        arr_9 [i_0] = (min(((max(((((arr_0 [i_0] [i_0]) && (arr_3 [i_0])))), 3))), ((+(min((arr_4 [i_0]), 1877363888))))));
        var_15 = (((-(arr_5 [i_0] [i_0 + 2]))) << (((668351848690131943 == (arr_5 [i_0] [i_0 + 1])))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                {
                    arr_17 [i_0] [i_4 + 1] [i_3 - 1] [i_0] = (~3247509083);
                    var_16 = (max((((-((4294967292 ? (arr_3 [i_0]) : -723719979))))), (arr_15 [i_4] [i_0 + 2] [i_0 + 2])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                {
                    arr_23 [i_0] [i_0] = ((((-(arr_12 [i_0 + 1] [i_0]))) ^ (arr_12 [i_0 + 3] [i_0])));
                    arr_24 [i_5] [i_0] [i_0] = (max(49086, (arr_1 [i_0])));
                    var_17 = ((~(((arr_21 [i_0]) ? (~668351848690131942) : (((~(arr_5 [i_0] [i_0]))))))));
                    arr_25 [i_0] [i_0] [i_0] = (max((max(92, (min((arr_11 [i_0 + 2]), (arr_11 [i_5]))))), ((max((arr_10 [i_0] [i_5] [i_6 - 1]), 12193)))));
                }
            }
        }
    }
    for (int i_7 = 2; i_7 < 13;i_7 += 1)
    {
        arr_30 [i_7] = ((-(((!16440) ? ((((var_10 == (arr_29 [i_7]))))) : (((arr_28 [i_7] [i_7]) % (arr_28 [2] [i_7 + 3])))))));
        var_18 = ((-(((((16440 >= (arr_26 [3] [i_7])))) + (((11772 && (arr_27 [2]))))))));
        arr_31 [i_7] = (((((-31 ? (arr_26 [i_7 - 2] [i_7 + 1]) : (((((arr_26 [i_7] [i_7]) > 49086))))))) ^ 1877363888));
    }
    for (int i_8 = 1; i_8 < 15;i_8 += 1)
    {
        arr_34 [i_8] = var_5;
        arr_35 [i_8] [i_8] = (((arr_33 [i_8]) ? (((119 ? (((((arr_26 [i_8] [i_8 + 1]) < (arr_29 [11]))))) : 3247509083))) : (arr_26 [16] [i_8 - 1])));
        arr_36 [10] = ((+((((arr_29 [i_8 + 1]) < (((((arr_28 [i_8] [i_8]) >= var_0)))))))));
    }
    var_19 = 82;
    #pragma endscop
}
