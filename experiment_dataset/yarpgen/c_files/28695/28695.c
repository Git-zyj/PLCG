/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((4 ? ((((2091663668 ? -4902 : 1)))) : (((var_4 > var_3) ? ((-1260386407 ? 16995216964221297995 : 1)) : (var_5 & -262991168)))));
    var_12 = (((((max(var_1, var_8)) | -118))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_13 += (arr_2 [i_0 - 1]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [0] [8] [i_0] [8] [5] = (((~7) ^ 0));

                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            var_14 = (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 1]);
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((5 & (((-(arr_1 [i_2] [i_2]))))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_15 = (min(var_15, 4));
                            var_16 = (max(var_16, ((((arr_1 [i_0] [i_0 + 1]) ? (((arr_6 [i_5] [2] [8]) ^ -262991163)) : (arr_7 [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1]))))));
                            var_17 = (min(var_17, 1073741824));
                            var_18 += (arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 1]);
                        }
                        for (int i_6 = 4; i_6 < 10;i_6 += 1)
                        {
                            var_19 = (((arr_1 [i_2] [i_0 - 1]) ? (1 & 4913) : (((arr_0 [i_0]) & 1))));
                            arr_21 [1] [i_0] [1] [i_0] [i_0] = (((arr_10 [i_0] [i_1] [i_2] [i_0]) & (arr_19 [2] [2] [0] [2] [11] [i_3] [0])));
                            var_20 = (((arr_19 [i_6] [6] [i_6] [i_6 - 3] [i_6 + 1] [i_0 - 1] [i_0 + 1]) ^ 2203303615));
                            var_21 = (min(var_21, (((((~(arr_19 [4] [4] [i_1] [4] [4] [i_1] [6]))) == (arr_8 [i_6 - 1] [i_6]))))));
                        }
                    }
                }
            }
        }
        arr_22 [i_0] [i_0] = (((arr_19 [i_0 - 1] [i_0 - 1] [i_0 + 1] [5] [i_0] [i_0] [i_0 + 1]) <= (arr_19 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 + 1])));
        arr_23 [i_0] = (((arr_19 [i_0] [i_0] [i_0] [8] [8] [4] [i_0 + 1]) > 3448759));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        arr_26 [i_7] = ((+(((arr_25 [i_7]) ? (arr_25 [i_7]) : (arr_25 [i_7])))));

        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 20;i_10 += 1)
                {
                    {
                        var_22 = 11827167163427701931;
                        var_23 = (((min((arr_31 [i_10 + 2] [i_9]), (((arr_25 [11]) ? (arr_28 [i_10]) : (arr_25 [i_8]))))) > (arr_25 [i_7])));
                    }
                }
            }
            var_24 = -2;
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            var_25 |= ((-1146637367 ? -5 : var_9));
            var_26 &= (-16 ? var_7 : (arr_34 [i_7] [2] [i_7]));
        }
    }
    var_27 = (-var_10 ? var_10 : (!var_4));
    #pragma endscop
}
