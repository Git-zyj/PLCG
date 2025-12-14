/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            arr_4 [i_1] [i_1] = (max((arr_0 [i_1 - 2] [i_1 - 1]), (((arr_0 [i_1 - 1] [i_1 - 2]) ? 16411565931425931005 : (arr_0 [i_1 + 1] [i_1 - 2])))));
            arr_5 [i_0] [i_0] &= ((!((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_13 = -16411565931425930998;
            arr_8 [5] [i_2] = arr_2 [i_2];
            var_14 |= ((((((arr_3 [i_0] [i_0] [i_0]) ^ (arr_6 [i_0] [i_0])))) ? (max((((arr_0 [i_0] [i_2]) ? (arr_6 [i_0] [i_0]) : (arr_3 [10] [8] [10]))), 56)) : (((-(arr_6 [i_0] [i_2]))))));
        }
        arr_9 [i_0] [9] = arr_3 [i_0] [i_0] [i_0];
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = (arr_10 [i_3] [i_3]);
        arr_15 [i_3] [i_3] = 4294967288;
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {
        var_15 += 4294967295;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_27 [i_4] [i_5] [i_6] [i_5] [i_7] = (~2035178142283620604);
                        arr_28 [i_7] [i_5] [i_5] [i_5] = ((-(((!(((2035178142283620592 ? 2035178142283620607 : 13223166031574187056))))))));
                        var_16 = (max(var_16, ((((((-(arr_24 [i_7] [i_6] [i_6] [i_5] [i_4])))) ? (arr_23 [i_5] [i_6] [i_6]) : ((4294967294 ? 28868 : 13223166031574187056)))))));
                        var_17 = (-((((arr_2 [i_7]) && (arr_17 [i_4] [i_5])))));
                        arr_29 [i_7] [i_5] [i_6] [i_7] [1] = (arr_11 [i_5]);
                    }
                }
            }
        }
        arr_30 [i_4] |= ((~(((arr_11 [i_4]) ? (arr_20 [i_4] [i_4]) : (arr_11 [i_4])))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
    {
        arr_34 [i_8] [i_8] = ((32767 ? (arr_11 [10]) : (arr_17 [i_8] [i_8])));
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 9;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {
                    arr_41 [0] [i_9] [i_8] = (arr_23 [i_9 - 2] [i_9 - 2] [9]);
                    var_18 += arr_18 [i_8] [11];
                    arr_42 [i_8] [i_9 + 1] [i_9 + 1] [i_10] = ((((32745 % (arr_12 [1]))) == (arr_0 [i_10] [i_8])));
                }
            }
        }
        var_19 = (28 - -28846);
    }
    var_20 *= 14;
    var_21 = var_10;
    var_22 = var_2;
    #pragma endscop
}
