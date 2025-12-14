/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = var_5;
                    arr_9 [i_2] = ((((arr_2 [i_2]) + 0)) - ((16509578476189644558 + (arr_2 [i_0]))));
                    arr_10 [i_0] [i_0] [i_1] [i_2] = var_2;
                    arr_11 [i_2] [i_1] [i_0] = var_8;
                }
            }
        }
    }
    var_15 = var_9;
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            {
                var_16 |= ((((arr_12 [i_4]) - (min((arr_5 [i_4 + 2] [i_3] [i_3]), 1937165597519907058)))));
                arr_17 [4] [4] |= (arr_12 [i_3]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    arr_26 [i_7] [i_5 + 3] [i_5 + 3] = ((-(var_11 >= var_6)));
                    arr_27 [i_7] [i_6 + 1] [i_5 - 1] &= (-169870305 ? (arr_2 [i_5 + 2]) : -0);
                    arr_28 [i_7] = var_3;
                }
            }
        }
    }
    #pragma endscop
}
