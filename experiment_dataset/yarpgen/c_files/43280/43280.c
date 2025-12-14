/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_13 = ((var_6 ? (var_11 != 1008) : 29898));
        arr_3 [i_0] = ((!((((arr_2 [i_0]) ? 5928 : (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = (!(((var_0 ? (arr_6 [i_1] [8]) : (arr_5 [i_1] [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                {
                    var_14 = (((arr_9 [i_3 + 1] [i_2] [i_3 + 1]) + (arr_9 [i_3 - 1] [i_2] [i_3 + 1])));
                    var_15 = (arr_10 [i_2]);
                    var_16 = ((((((arr_8 [i_2]) ? (arr_8 [i_2]) : var_12))) ? ((((arr_10 [i_2]) >= (arr_9 [i_1] [i_2] [11])))) : (var_3 < var_8)));
                    arr_14 [i_2] = (((arr_6 [9] [i_3]) ? (arr_5 [3] [i_1]) : 2752676245));
                }
            }
        }
        var_17 = (arr_12 [1] [i_1 + 1]);
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_18 = (((arr_6 [1] [i_4]) ? var_4 : (arr_6 [i_4] [i_4])));
        var_19 = 4031926185424671732;
        var_20 = (((((2752676226 ? var_11 : (arr_12 [i_4] [11])))) ? 5945699255880526107 : (((!(arr_16 [i_4]))))));
    }
    #pragma endscop
}
