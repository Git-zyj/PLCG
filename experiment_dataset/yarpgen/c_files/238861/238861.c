/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_3 & (!var_0)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [2] [20] [i_0] [21] = (((((arr_5 [i_2 - 1] [i_0]) == (arr_2 [i_0] [i_2 + 2]))) ? ((-1331640910717751003 ? (arr_2 [i_0] [i_2 + 1]) : 255)) : 2263466696127353094));
                    var_13 = ((+((((arr_3 [10]) ? (arr_6 [2]) : (arr_0 [i_0]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_14 = (((((-(min((arr_0 [i_5]), (arr_4 [i_5] [10])))))) ? (arr_3 [2]) : ((((((~14289) + 2147483647)) >> (1331640910717751001 - 1331640910717750997))))));
                        var_15 = (arr_5 [i_0] [i_0]);
                    }
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        arr_24 [i_0] [3] = (arr_6 [10]);
                        var_16 &= (arr_4 [20] [14]);
                    }
                    arr_25 [1] [i_0] = (arr_14 [7] [i_3] [0] [i_3]);
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_17 = (min(((((arr_9 [i_7] [12] [i_7]) ? ((min((arr_11 [9]), var_8))) : ((max((arr_22 [20] [2] [21] [15]), (arr_23 [i_7]))))))), (min((arr_20 [15] [1] [18] [3] [2] [22]), var_10))));
        arr_28 [7] = var_1;
        arr_29 [1] = (((arr_15 [i_7]) ? (arr_15 [i_7]) : ((-(arr_12 [i_7] [6] [15] [1])))));
        arr_30 [10] = (((arr_19 [8] [12] [14] [i_7]) ? 42984 : (arr_1 [i_7])));
    }
    #pragma endscop
}
