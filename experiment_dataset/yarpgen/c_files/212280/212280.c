/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [5] [i_2] = (((((arr_2 [i_0 - 3] [i_0 + 2]) ? 2016 : 73))) ? 1269671976 : ((((arr_2 [i_0 - 3] [i_0 + 2]) ? 59539 : 74))));
                            arr_12 [i_2] [i_1] [i_1] [i_3] = arr_3 [i_0 - 1];
                            var_19 = ((((((arr_10 [i_2] [i_2] [i_1] [i_2]) ? (arr_7 [i_3] [i_2] [i_1] [i_0]) : (arr_7 [i_1] [i_2] [i_2] [i_3])))) ? (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_3] [i_2] [i_1] [8]) : (arr_10 [i_2] [i_2] [i_2] [i_3]))) : (arr_9 [i_0] [i_1] [i_2] [i_2])));
                            arr_13 [i_0] [i_1] [i_2] = ((0 ? (((arr_0 [i_0 + 2]) ? (arr_0 [i_0 + 2]) : 155424908)) : 1));
                            var_20 = (min(var_20, (arr_9 [7] [i_2] [i_1] [8])));
                        }
                    }
                }
                arr_14 [i_0 - 1] [i_1] |= arr_10 [i_1] [i_1] [i_0] [i_1];
                var_21 = ((+(((((arr_4 [i_0] [i_0]) || (arr_3 [i_1]))) ? (arr_10 [i_1] [i_1] [i_1] [i_1]) : (arr_9 [i_1] [i_1] [i_0 - 3] [i_0 + 1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    arr_22 [i_6] [i_6] = (arr_18 [i_4] [i_4] [i_4]);
                    arr_23 [3] [i_4] [i_6] = (((!2022172143) ? ((((arr_21 [i_4] [i_5] [i_5] [i_4]) ? (arr_20 [i_4] [i_5] [i_4] [i_4]) : (((arr_19 [i_4] [i_5] [i_4]) ? (arr_20 [i_4] [i_4] [i_4] [i_4]) : (arr_20 [i_4] [i_4] [i_4] [i_4])))))) : (((arr_19 [i_4] [i_5] [i_6]) ? (arr_21 [i_4] [i_4] [i_5] [i_6]) : -14084876735161941414))));
                }
            }
        }
    }
    var_22 = ((!((((((73 ? 2747690208 : 183))) ? var_11 : (0 < 163))))));
    #pragma endscop
}
