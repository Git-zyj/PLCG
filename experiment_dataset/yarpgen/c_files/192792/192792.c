/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = ((!((max((((var_3 ? var_7 : -1))), (arr_0 [i_0] [i_2]))))));
                    var_12 = ((!(((~(arr_0 [i_0] [i_0 - 2]))))));
                    arr_10 [i_2] [i_2] [i_2] [i_2] = -var_9;
                    var_13 = (max((((arr_3 [i_0 + 2]) ? (arr_3 [i_0 + 1]) : 28)), var_4));
                    arr_11 [i_0] [i_2] [i_2] [i_2] = (min((max((33041 + var_3), ((var_8 / (arr_0 [i_1] [i_2]))))), -3472));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_14 = (((max((arr_12 [i_3] [i_3 + 1]), var_0)) & var_5));
                    var_15 -= (min(-119, ((16760832 ? 25109 : 32494))));
                    arr_19 [i_5] [i_4] [i_5] = ((arr_14 [i_4]) | (arr_18 [i_3] [i_4] [i_5]));
                    arr_20 [i_5] [i_4] [i_5] = ((~((58361 ? (arr_17 [i_3] [i_5] [i_3 + 1] [i_3 - 1]) : (arr_14 [i_3])))));
                }
            }
        }
    }
    var_16 += (((~(~var_9))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            {
                var_17 ^= ((+(((~16760832) & (min(var_9, -1193))))));
                var_18 = (max(var_18, ((((!var_1) > var_8)))));
            }
        }
    }
    #pragma endscop
}
