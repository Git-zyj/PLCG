/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((-(((((arr_3 [i_0] [i_0]) / var_1)) + var_10))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_11 = 255;
                        var_12 = ((((((min(var_4, (arr_2 [i_0])))) ? ((260096 & (arr_0 [1] [i_1]))) : (arr_1 [i_2 + 2] [i_1]))) << (((((((var_7 ^ (arr_2 [i_3])))) ? var_0 : ((var_10 ? (arr_7 [i_0] [i_0]) : (arr_8 [i_0] [i_1]))))) - 439))));
                        arr_12 [i_0] [i_1] [i_0] [i_3] [i_3] = ((-(arr_3 [i_2 - 1] [i_2 - 1])));
                        arr_13 [i_3] [i_2] [i_1] [i_0] [i_0] = 18446744073709291527;
                    }
                }
            }
        }
        var_13 = var_1;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    arr_20 [i_4] [i_5] = ((~(((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) | (arr_10 [i_0] [i_4] [i_4] [i_5] [i_5])))));
                    arr_21 [i_0] [i_5] [i_5] [i_0] &= (max((arr_17 [i_0] [i_0]), (((arr_9 [i_0] [i_4]) ? (arr_9 [i_0] [i_5]) : var_8))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_28 [i_0] [i_6] [9] [i_6] |= var_9;
                    var_14 = ((-((-((((arr_1 [i_6] [i_7]) < (arr_11 [i_0] [i_0] [4] [4]))))))));
                    var_15 = (max(260107, ((var_5 ? 260096 : (arr_14 [i_7] [i_6])))));
                    var_16 += 18446744073709291520;
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        arr_31 [i_8] = ((((((!48) ? (((arr_29 [i_8] [i_8]) ? (arr_30 [i_8]) : var_8)) : (arr_30 [i_8])))) || (arr_29 [i_8] [i_8])));
        var_17 = ((((arr_30 [i_8]) >> (((arr_29 [i_8] [i_8]) + 6360)))));
        var_18 -= ((((((var_10 ? var_4 : (arr_29 [i_8] [i_8])))) ? (min(4602, 18446744073709291508)) : (((arr_30 [i_8]) + (arr_29 [i_8] [i_8]))))));
    }
    var_19 = -5;
    #pragma endscop
}
