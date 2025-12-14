/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [3] = (((((((((arr_1 [15] [11]) ? (-9223372036854775807 - 1) : (arr_1 [5] [15])))) ? 1 : (((arr_1 [i_0] [i_0]) ? (arr_1 [9] [i_0]) : 45))))) ? ((120 ? 1 : 120)) : var_5));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            {
                arr_8 [1] [i_2] = (arr_1 [6] [6]);
                arr_9 [i_1] [i_2] [i_1] = (arr_4 [i_1]);
                arr_10 [4] [i_1] [i_1 - 1] = (((arr_5 [i_1]) ? (((arr_6 [i_2 + 2] [0] [7]) ? var_7 : 1)) : (((((arr_1 [i_1 + 1] [i_2]) ? 19293 : var_6))))));

                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_1] [i_1] [4] [i_3] &= var_6;
                    arr_15 [i_1] [i_1] [i_1] = (((((((max(211, (arr_12 [0] [11] [1])))) ? (arr_4 [i_1]) : (((min((arr_7 [i_1] [1]), -34))))))) ? ((~(arr_7 [i_1] [i_2]))) : ((((~(arr_5 [i_1])))))));
                    arr_16 [9] [i_1] = ((((((arr_0 [i_2 - 1]) ? var_1 : 45))) ? (arr_1 [2] [i_2]) : 10));
                    arr_17 [i_3] = (~var_18);
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    arr_21 [i_4] [i_1] [i_1] = (arr_18 [i_2 + 1]);
                    arr_22 [i_1] [2] [10] [i_1 + 2] = var_18;
                }
            }
        }
    }
    #pragma endscop
}
