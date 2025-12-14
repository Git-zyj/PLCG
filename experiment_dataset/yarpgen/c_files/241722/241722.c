/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= -var_0;
    var_18 ^= var_1;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 += ((((var_3 ? (((arr_1 [1] [1]) - var_0)) : -var_8)) % (((((-1 - -18) && 6360648286923345729))))));
        var_20 = (max(var_20, ((((((0 != (!-1)))) * (((!(arr_1 [1] [i_0])))))))));
        var_21 = (max(var_21, ((((var_9 >= (arr_0 [i_0] [i_0]))) ? (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : ((128 ? 28672 : 0))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_22 |= -1386;
                    arr_7 [i_2] [i_1] [i_0] = (((arr_3 [0] [16] [i_2]) ? ((max((arr_3 [i_0] [i_1] [i_2]), (arr_3 [i_2] [i_1] [i_2])))) : (((64174 != ((max(50903, (arr_5 [i_0])))))))));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    {
                        var_23 ^= var_2;
                        var_24 = (((-(max((arr_13 [10]), var_12)))) < 35);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    {
                        arr_25 [i_9] [i_7 + 1] [5] [i_9] [i_7] [i_9] = (max((((!(arr_22 [i_7])))), ((~(arr_22 [i_7])))));
                        var_25 = ((-((((var_13 ? (arr_4 [i_3] [i_8]) : (arr_5 [12])))))));
                    }
                }
            }
        }
    }
    var_26 = var_15;
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            {
                                var_27 *= (((max(1777897002, 44)) / -17131));
                                var_28 = (((max((min((arr_30 [i_12] [i_11]), var_10)), var_1)) >= ((((((64512 ? var_14 : (arr_31 [0] [2] [i_14])))) ? 124 : (~14))))));
                                var_29 = ((!((((((arr_27 [i_10]) ? (arr_36 [i_10] [20] [i_12] [i_12] [i_13] [i_14]) : (arr_27 [i_13]))) * (arr_37 [i_10] [i_11] [9] [11] [i_11] [i_14]))))));
                            }
                        }
                    }
                    var_30 = ((((max((var_14 > var_3), (112 < 2198)))) & (-var_1 || -1)));
                }
            }
        }
    }
    #pragma endscop
}
