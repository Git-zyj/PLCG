/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((((max((!var_3), var_8))) >> (max(var_7, (max(-1948664730597321161, 1)))))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 = (min(var_11, (((max((arr_1 [i_0] [i_0]), ((5676430913196293328 ? 1838819514 : 255)))) * (((arr_0 [i_0] [i_0]) ? (((!(arr_0 [i_0] [i_0])))) : (((!(arr_1 [i_0] [i_0]))))))))));
        var_12 = (min(var_12, ((max(((((arr_1 [i_0] [i_0]) > var_9))), (max(((3630970216495887089 ? 4 : -25605)), ((2 ? var_0 : (arr_1 [i_0] [i_0]))))))))));
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_3] [i_1] = (((((((arr_5 [i_1 + 1] [i_1] [4]) == 0)))) >= (max(842789449571644031, 14815773857213664527))));
                    var_13 = (max(((max(((((arr_2 [i_3]) <= -13144))), (arr_3 [i_1] [i_2])))), (((arr_7 [i_1]) ? var_4 : (((arr_6 [i_3 - 2]) ^ -14588))))));
                    var_14 = ((0 ? 14588 : -5366585330667991397));
                    arr_11 [i_1] [i_2] [i_2] [i_2] = (((((arr_1 [i_1 - 1] [i_3 - 2]) * (arr_5 [9] [i_1] [i_1 + 2]))) >= ((min((arr_5 [i_1] [i_1] [i_1 + 2]), (arr_5 [i_1] [i_1] [i_1 - 1]))))));
                }
            }
        }
        arr_12 [i_1] = ((((max((arr_1 [i_1] [1]), ((max((arr_4 [i_1] [i_1] [i_1]), (arr_3 [i_1] [i_1]))))))) >> (min((((var_7 != (arr_9 [i_1] [i_1] [i_1] [i_1])))), (((arr_4 [i_1] [7] [i_1]) + (arr_1 [i_1 + 3] [i_1])))))));
        arr_13 [i_1] [i_1] = ((((max(0, (arr_4 [i_1] [i_1 + 1] [i_1])))) ^ (((!(arr_4 [i_1] [i_1] [i_1 - 1]))))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_15 = (max((min((((var_4 || (arr_17 [i_4])))), (((arr_15 [i_4] [i_4]) & 2047)))), (((((var_9 && (arr_16 [i_6]))))))));
                    arr_23 [1] [i_4] = ((!((min(13088041313185868660, 65535)))));
                }
            }
        }
        arr_24 [5] = (31 / var_0);
        arr_25 [i_4] = (arr_17 [i_4]);
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_16 = ((((max(((((arr_28 [i_7]) == -1820721613))), (((arr_27 [i_7]) / (arr_26 [i_7])))))) ? (min(((213254191 ? (arr_28 [i_7]) : (arr_26 [i_7]))), 15)) : ((((!((max((arr_28 [i_7]), (arr_28 [i_7]))))))))));
        var_17 = (min(var_17, ((max((arr_28 [i_7]), 5676430913196293347)))));
    }
    #pragma endscop
}
