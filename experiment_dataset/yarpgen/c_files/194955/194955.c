/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] &= 1917914415;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_11 [i_0] = ((-((~(arr_7 [i_2 + 1] [i_0])))));
                        var_14 = (max(var_14, (arr_6 [i_0] [6])));
                        arr_12 [i_0] = ((+(((arr_10 [4] [i_0] [i_0]) ? -16781 : -1))));
                    }
                }
            }
        }
        arr_13 [8] = ((+((-(((arr_2 [i_0]) - (arr_2 [i_0])))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {
                        var_15 = 14124380356134755806;
                        var_16 = (arr_21 [i_0] [i_4] [i_5] [i_6]);
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_17 = ((-(((arr_2 [i_0]) ? 1 : -4913469379116821576))));
            arr_25 [i_7] [i_7] [i_0] = ((+((max(((((arr_9 [i_7]) >= (arr_5 [i_0])))), (arr_4 [i_0] [i_7]))))));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_18 = ((((((((-(arr_15 [i_0] [i_8])))) ? 1 : ((-(arr_18 [i_0] [i_0])))))) ? (arr_21 [i_0] [i_0] [i_0] [i_8]) : 17966));

            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                var_19 = (max(((!(arr_7 [i_9] [0]))), ((!((((arr_30 [i_0] [i_8] [i_8] [i_9]) ? (arr_17 [i_0] [i_8] [1]) : (arr_22 [i_8] [i_8] [i_8]))))))));
                arr_31 [i_0] [i_0] [i_8] [i_9] = (arr_30 [i_0] [5] [i_8] [i_0]);
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 7;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((max((arr_1 [i_10 + 2] [i_10 - 1]), (((((arr_1 [7] [7]) >> (4913469379116821575 - 4913469379116821570))) / (arr_14 [i_9] [i_9]))))))));
                            arr_38 [i_0] [i_8] [4] [i_9] [i_8] [i_11] = -32767;
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                arr_41 [5] [i_8] [i_0] = (((((32710 | (((arr_34 [9] [9] [i_8] [i_12] [7]) ? -4913469379116821568 : 13348))))) & (arr_6 [i_8] [i_8])));
                var_21 = -1;
            }
            arr_42 [i_8] [i_0] [i_8] = 32767;
            var_22 -= (((arr_35 [i_0] [i_8] [i_0]) == (((arr_15 [i_0] [i_0]) ? (arr_4 [i_0] [i_8]) : (arr_35 [0] [10] [i_0])))));
        }
    }
    var_23 = var_2;

    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        var_24 = (((+-4611686018427371520) ? (((arr_44 [i_13]) ? (arr_44 [i_13]) : 4913469379116821575)) : ((((arr_44 [i_13]) - (arr_44 [i_13]))))));
        var_25 = ((-((+(((arr_44 [i_13]) ? 75 : 0))))));
        var_26 = 7949402095462886527;
    }
    for (int i_14 = 0; i_14 < 15;i_14 += 1)
    {
        arr_49 [i_14] = (arr_44 [i_14]);
        arr_50 [i_14] = -8239604641194257368;
    }
    #pragma endscop
}
