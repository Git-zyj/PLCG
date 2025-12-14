/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((((((-17377 * 1) ? (arr_1 [i_0 - 2]) : (((arr_3 [i_0] [i_1]) * (arr_1 [i_0])))))) ? ((((max((arr_1 [i_1]), (arr_2 [i_0])))) ? (((!(arr_5 [i_0] [i_1])))) : (((arr_5 [i_0 - 1] [i_0 - 1]) ? (arr_3 [i_0] [i_0 + 1]) : (arr_4 [i_0]))))) : (arr_2 [i_0]))))));
                var_18 = ((-(((arr_4 [i_1]) % (arr_5 [i_1] [i_0])))));
            }
        }
    }

    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        arr_10 [i_2] = ((+((((((arr_5 [1] [i_2]) ? (arr_3 [i_2] [i_2]) : (arr_5 [i_2 - 2] [i_2 - 2])))) / (((arr_2 [1]) ? (arr_1 [i_2]) : (arr_6 [i_2 + 1] [i_2])))))));

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_19 -= ((!((max((arr_6 [12] [12]), (arr_9 [i_2]))))));
            var_20 = (max(var_20, (arr_5 [7] [7])));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_21 = (min(var_21, (arr_5 [i_4] [1])));
        var_22 = ((~((~(arr_3 [i_4] [i_4])))));
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        var_23 -= (((arr_14 [i_5 - 1]) | (arr_14 [i_5 - 2])));
                        var_24 = (arr_21 [i_4] [i_4] [i_5 + 1] [i_5 - 2] [i_5 - 2] [i_4]);
                        var_25 += (arr_4 [i_5 - 2]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
