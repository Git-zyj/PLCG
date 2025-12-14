/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((!((min(((0 ? 0 : 0)), ((1 ? 1 : 65535)))))));
        var_12 = (max(var_12, (((!((((-11 + 2147483647) >> (1065353216 - 1065353196)))))))));
        var_13 = (arr_0 [i_0 + 3]);
        var_14 *= ((((min(10977, (arr_0 [i_0 - 1])))) ? (((arr_0 [i_0 + 1]) ? (((max(0, (arr_0 [i_0 + 2]))))) : (4821789238283059154 ^ 155))) : (((26214 ? ((0 + (arr_1 [i_0]))) : ((1 ? 1 : 1)))))));
        var_15 = ((-((max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                {
                    arr_12 [i_1] [1] [i_1] = (((arr_11 [9] [i_3 + 2] [i_3 + 2] [9]) ? 1 : (arr_11 [i_1] [i_3 + 2] [i_1] [i_1])));
                    var_16 *= (((arr_7 [i_1]) + (arr_7 [i_3 - 1])));
                    arr_13 [i_2] = (101 != 1);
                }
            }
        }
        var_17 &= ((18511 | (arr_9 [i_1] [i_1])));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_18 = ((!(((((((arr_23 [i_5] [i_5] [i_6 - 1] [i_7]) / (arr_21 [2] [i_6 - 1] [i_6 - 1])))) ? 3934954304 : ((((1 != (arr_17 [i_4] [i_5] [i_7]))))))))));
                        arr_24 [i_5] [i_5 - 1] [i_6 - 1] [i_7] = -73;
                    }
                }
            }
        }
        arr_25 [i_4] &= (((((((39 ? (arr_22 [14] [i_4] [i_4] [4]) : (arr_18 [i_4] [i_4] [i_4] [14])))) ? ((1 ? (arr_18 [i_4] [i_4] [i_4] [6]) : (arr_17 [i_4] [8] [i_4]))) : 4294967295)) - (((72057594037927808 > ((((((-127 - 1) + 2147483647)) >> (((arr_18 [12] [i_4] [i_4] [2]) - 74))))))))));
        arr_26 [i_4] [7] = (arr_23 [10] [10] [1] [i_4]);
    }
    var_19 = (min(var_19, (((var_3 ? (((((128 ? 3229614072 : 1))))) : (((((0 ? var_11 : 99))) ? (min(106, var_5)) : 1)))))));
    var_20 = (max(((var_7 ? var_8 : ((1 ? 4294967295 : -2204)))), (((((2199 ? 11 : 1))) ? ((4294967289 ? 3540023244 : 32767)) : 32747))));
    #pragma endscop
}
