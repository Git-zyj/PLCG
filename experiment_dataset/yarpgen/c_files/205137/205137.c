/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_11 = (max(var_11, (((((var_3 / (arr_1 [i_0]))) * ((((arr_0 [i_0]) ^ (arr_0 [i_0])))))))));
        var_12 *= ((236538163 ? 540502103863066241 : 4058429133));
        arr_2 [i_0] &= (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_13 = arr_7 [i_1] [i_2];
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_14 -= (arr_13 [i_1] [i_4] [i_3] [i_4] [i_5]);
                            var_15 ^= ((23 >= (arr_16 [i_1] [i_2] [i_3] [i_4] [i_4])));
                        }
                    }
                }
            }

            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                var_16 += (((arr_6 [i_1] [i_2] [7]) ? 269735217 : (arr_9 [i_6] [i_2] [i_1] [18])));
                var_17 *= var_7;
                var_18 -= (arr_8 [i_1] [i_1] [i_1]);
            }
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                var_19 = (((arr_11 [i_1]) ? (arr_9 [i_7] [i_2] [i_7] [i_7]) : (arr_6 [i_1] [i_2] [i_7])));
                arr_22 [i_7] = (arr_9 [i_1] [i_1] [i_2] [i_7]);
                arr_23 [14] &= ((((var_3 ? (arr_5 [i_1]) : 22392))) ? (arr_4 [i_7] [i_7]) : (arr_20 [3] [3] [3]));
                var_20 = (min(var_20, (arr_17 [i_1] [i_2] [i_2])));
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    var_21 = (max(var_21, ((((((arr_8 [i_1] [i_8] [i_9]) ? (arr_8 [i_1] [i_8] [20]) : (arr_8 [i_9] [i_1] [i_1]))) > (arr_8 [i_1] [11] [i_1]))))));
                    var_22 += (+(((arr_16 [4] [i_1] [i_8] [i_8] [8]) ? (arr_27 [i_1] [i_8] [14]) : (arr_4 [i_9] [i_1]))));
                    arr_28 [i_1] [i_1] [i_9] [i_1] = ((((arr_14 [i_1] [i_9] [i_1]) < (arr_14 [i_1] [i_9] [i_9]))));
                    var_23 = (arr_3 [2]);
                }
            }
        }
    }
    var_24 = ((var_7 ? var_6 : var_8));

    /* vectorizable */
    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            {
                                arr_42 [i_14] [i_14] [i_12] = (arr_33 [i_14] [i_14]);
                                arr_43 [i_14] [i_14] [i_14] [i_14] [i_12] [3] [1] = (((arr_16 [i_10] [5] [i_10] [i_10] [i_14]) ? (arr_16 [i_14] [i_11] [i_10] [i_11] [i_14]) : (arr_16 [i_10] [1] [1] [i_13] [i_14])));
                                var_25 *= (arr_41 [i_10] [i_10] [i_12] [i_10] [i_10]);
                            }
                        }
                    }
                    var_26 ^= (((arr_4 [i_10] [i_10]) ? (arr_4 [i_10] [i_11]) : var_1));
                    var_27 &= (((var_9 ? (arr_8 [i_12] [i_10] [i_10]) : (arr_13 [22] [i_12] [i_12] [i_12] [i_12]))) - (arr_26 [i_11]));
                }
            }
        }
        var_28 &= -1993414943740670517;
        var_29 ^= var_1;
        var_30 ^= (arr_16 [14] [12] [i_10] [i_10] [14]);
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
    {
        arr_47 [4] &= ((((203289321 ? -22387 : (arr_39 [i_15] [8] [2] [12] [2]))) - (arr_12 [22] [i_15] [i_15] [9] [i_15] [17])));
        arr_48 [i_15] = 26188;
    }
    #pragma endscop
}
