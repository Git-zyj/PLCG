/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = ((var_13 & ((max((arr_3 [i_0] [i_0 + 1]), (arr_3 [i_0] [i_0 + 1]))))));
                var_21 ^= ((4294967281 ? ((~((28 ? 13659101801442174937 : -427022024)))) : 12718));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_22 = (arr_4 [3] [1] [1] [i_0]);
                                var_23 = 1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_15 [1] [i_1] [i_2] [i_5] [i_6 - 1] = (arr_0 [i_6]);
                                arr_16 [1] = (((arr_13 [i_0 + 1] [i_0] [i_0] [1] [i_0] [7]) ? -0 : ((((arr_8 [i_6 - 1] [i_5] [i_2] [i_0]) || (arr_8 [i_6 - 1] [i_5] [3] [i_0]))))));
                            }
                        }
                    }

                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        arr_21 [i_0 - 1] [i_7] [i_1] [i_1] [i_7] [i_0 - 1] = 4787642272267376682;
                        var_24 = arr_9 [i_1] [i_1] [i_2] [1] [i_7];
                        var_25 = (arr_19 [3] [i_1] [i_2] [i_7]);
                        var_26 &= 255;
                    }
                    arr_22 [i_0] = (((var_0 == (((arr_12 [i_0]) ? var_12 : var_16)))));
                    arr_23 [i_0] [i_0] [i_0 - 1] = ((((max((max(var_8, (arr_5 [7]))), (~1)))) || (arr_4 [i_0 - 1] [1] [i_2] [i_2])));
                }
                arr_24 [i_0 + 1] = ((~(((arr_1 [i_0] [i_0 - 1]) ? (arr_20 [i_0 - 1]) : (arr_20 [i_0 + 1])))));
                var_27 = (((arr_20 [i_1]) / (max(var_18, var_3))));
            }
        }
    }
    var_28 = var_8;

    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_29 = (((1 ? (arr_25 [i_8] [i_8]) : (arr_26 [i_8]))));
        var_30 = ((((var_11 ? (arr_26 [i_8]) : (arr_25 [i_8] [i_8]))) >> (((arr_26 [3]) - 2732781391))));
        var_31 = ((((-var_4 != (max((arr_25 [i_8] [i_8]), (arr_25 [i_8] [i_8]))))) ? ((-((-(arr_25 [i_8] [i_8]))))) : (((((427022027 ? 236 : var_1))) / (((arr_25 [i_8] [i_8]) ? (arr_26 [5]) : -1405048993))))));
    }
    for (int i_9 = 2; i_9 < 17;i_9 += 1)
    {

        for (int i_10 = 3; i_10 < 18;i_10 += 1)
        {
            var_32 = (((((((max((arr_31 [i_10]), 13659101801442174945))) ? (((var_0 - (arr_31 [i_9])))) : var_5))) ? (((var_12 ? (arr_28 [i_9]) : (1 - 4294967268)))) : ((4787642272267376686 ? 4787642272267376686 : ((4787642272267376673 ? 2061826084 : 4787642272267376691))))));
            var_33 = (min(var_33, (((-((((((~(arr_28 [18])))) != (max(-19, 13659101801442174955))))))))));
        }
        arr_34 [i_9 + 1] [i_9] = ((((((arr_27 [i_9]) <= var_13)) ? ((max(var_17, 82))) : (arr_27 [i_9 + 2]))));
    }
    var_34 = (((((var_9 << (!var_1)))) || ((((var_5 == var_8) ? (~1) : ((max(var_12, var_0))))))));
    #pragma endscop
}
