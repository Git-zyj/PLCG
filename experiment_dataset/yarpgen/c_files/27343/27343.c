/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_12 || ((max(255, (min(1320168629, 4294967295)))))));
    var_21 = (min((min(var_16, var_0)), (((~(~var_19))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_22 = (((((1 ? 15 : 0))) ? var_18 : 0));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((min((min((arr_2 [i_0]), (arr_2 [i_1]))), (max((arr_2 [i_1]), (arr_2 [i_4]))))))));
                                var_24 ^= (min((((arr_13 [i_3 - 1] [i_1] [i_1] [i_3 + 2]) ? (arr_13 [i_3 - 1] [i_1] [i_1] [i_3 + 1]) : (arr_13 [i_3 + 1] [i_1] [i_1] [i_3 + 2]))), ((~(arr_13 [i_3 + 2] [i_1] [i_1] [i_3 + 1])))));
                                var_25 = 1387251485;
                            }
                        }
                    }
                    arr_15 [i_0] [3] [i_2] [i_1] = 13;
                    var_26 = ((16107395260428350707 & 6) ? ((min(((~(arr_6 [15] [15] [15]))), (((arr_0 [6]) ^ 2147483647))))) : (min((arr_10 [i_1]), (((1 ? (arr_0 [i_0]) : (arr_14 [i_1] [i_2] [i_1] [i_0] [i_0] [i_0])))))));

                    for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        var_27 = ((((arr_2 [i_1]) ? var_10 : (arr_13 [10] [i_1] [i_1] [i_5 - 1]))));
                        var_28 += (((((~((var_9 ? (arr_17 [2] [i_1] [i_1] [i_5]) : var_14))))) ? (~72) : ((~(((arr_12 [i_0] [i_1] [i_2] [14] [i_0] [i_1] [i_2]) & -64))))));
                    }
                    for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_6] [i_2] [i_1] [i_6] = (min(1, 9369));
                        var_29 += ((((((((var_5 ? 104221101 : (arr_6 [10] [10] [i_2])))) ? (~1) : (((arr_11 [0] [i_1] [i_2] [i_1] [i_1] [i_0]) ? (arr_21 [i_0] [i_1] [i_2] [i_1]) : (arr_13 [i_6] [i_1] [i_1] [i_0])))))) ? ((((var_19 + 59280) ? (arr_11 [i_6 + 1] [i_6 + 1] [i_2] [i_6] [i_1] [12]) : ((-(arr_23 [i_1])))))) : (min((max(var_17, 65529)), (((!(arr_14 [i_6] [i_6] [i_1] [i_1] [i_0] [i_0]))))))));
                        arr_25 [i_6] [i_2] [i_1] [i_6] = ((((24 ^ (min(var_2, var_12)))) | (((~(~35))))));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] = (((((max((((!(arr_13 [i_7] [i_7] [8] [i_7])))), (arr_27 [i_7]))))) < (min(((var_14 * (arr_7 [i_7] [i_7] [i_7]))), (arr_23 [6])))));
        var_30 = ((((((arr_7 [i_7] [i_7] [i_7]) & (arr_13 [i_7] [0] [0] [i_7])))) ? ((-((344861039 ? 344861039 : (arr_17 [i_7] [i_7] [i_7] [i_7]))))) : (((-(arr_18 [i_7] [i_7] [i_7] [i_7] [i_7]))))));
    }
    var_31 = (((((0 ? 0 : 0))) ? (min(var_7, ((var_18 ? var_19 : 1308044554)))) : (((((((var_15 ? 0 : 255))) == var_1))))));
    #pragma endscop
}
