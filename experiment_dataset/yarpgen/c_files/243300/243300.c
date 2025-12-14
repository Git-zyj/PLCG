/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (max(((4294967295 ? (1009906779 | var_1) : var_11)), var_5));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 ^= 30648;
        arr_2 [i_0] |= ((arr_1 [i_0] [i_0]) + (min((arr_0 [i_0]), (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))))));
        var_14 = (min(var_14, (((((((!(((1009906806 ? 980539394 : (arr_1 [i_0] [i_0])))))))) ^ ((var_10 ? (max(3285060502, var_9)) : (arr_0 [i_0]))))))));
        var_15 ^= ((((((((139 ? (arr_0 [i_0]) : 8))) + (max(119, var_7))))) ? (arr_1 [i_0] [i_0]) : ((max((((!(arr_0 [i_0])))), (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_16 = (min(var_16, ((min((((((var_10 ? (arr_3 [0]) : (arr_3 [i_1])))) ? ((var_8 ? -10 : (arr_3 [9]))) : var_9)), ((((var_6 >= 2211180740) ? var_9 : var_1))))))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                {
                    var_17 = (max(var_17, (((-(arr_9 [i_2 - 1]))))));
                    var_18 = (((max((((arr_6 [i_1]) ? (arr_4 [i_1]) : var_6)), (((arr_7 [5] [5] [5]) << (((arr_5 [i_1] [i_2]) - 3595))))))) ? 3285060493 : (((arr_4 [i_2 - 1]) & ((var_10 >> (((arr_9 [i_3]) - 11846169828867425731)))))));
                    var_19 -= (((((max(109, 1009906781))))) % (((arr_8 [i_2 + 1]) ? (arr_3 [i_2 + 1]) : (min((arr_3 [i_1]), (arr_4 [i_1]))))));
                    arr_11 [i_3] [i_3] [i_3] [i_3 - 1] = (max(((~(arr_9 [i_3 + 1]))), ((var_1 ? (arr_9 [i_3 + 1]) : (arr_9 [i_3 - 1])))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    {
                        var_20 = ((((max((var_9 > 42039), (max((arr_3 [i_5]), (arr_6 [i_4])))))) ? ((((862313658 && (arr_18 [i_1] [i_4] [i_5] [i_5]))) ? (arr_12 [i_5]) : (arr_6 [i_6 - 1]))) : (arr_8 [i_1])));
                        var_21 = 25331;
                    }
                }
            }
        }
        var_22 = (((((var_2 ? (arr_8 [i_1]) : (arr_8 [i_1])))) ? (arr_8 [i_1]) : (((var_8 > (arr_8 [i_1]))))));
        arr_19 [i_1] &= ((((~(arr_7 [i_1] [i_1] [3])))) ? (((arr_12 [i_1]) ? (arr_9 [i_1]) : (arr_12 [i_1]))) : (((11 ? 3285060514 : 20034))));
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        var_23 |= ((+(((arr_3 [i_7]) ? (arr_0 [i_7]) : (arr_3 [i_7])))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    var_24 = ((var_9 ? (((max((arr_5 [i_8] [3]), (arr_5 [i_7] [i_8]))))) : (((arr_6 [i_9]) ? (((arr_20 [i_7]) / (arr_13 [2] [0] [i_7]))) : (arr_21 [i_9])))));
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 8;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_25 = 10711094757077248313;
                                var_26 -= ((((((((arr_1 [i_7] [i_7]) ? (arr_5 [i_8] [i_10 - 4]) : 7735649316632303295)) / -1372916577))) ? ((1645229550 ? 32767 : -943990606)) : (arr_16 [i_7] [i_7] [i_7] [i_11])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (var_4 + (var_1 > var_1));
    #pragma endscop
}
