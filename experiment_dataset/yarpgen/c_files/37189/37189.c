/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = arr_0 [i_1] [i_2];
                    arr_9 [i_0] [i_2] [i_1] [i_0] = ((2142 + (arr_3 [i_0])));
                    var_17 |= (max((((((var_12 ? 82 : (arr_1 [8])))) ? ((var_7 ? (arr_5 [6] [i_0]) : var_13)) : (((min(24576, var_6)))))), ((((var_2 | (arr_3 [i_0 + 1]))) & (~25569)))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_18 = var_7;
                    arr_18 [i_5] [i_4] [i_5] = (((((max(127, (arr_16 [i_4] [i_5])))) / (arr_6 [i_3] [i_4] [i_4]))) & ((~(~var_7))));
                }
            }
        }
        var_19 ^= (arr_10 [i_3]);
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_22 [i_6] = ((min((arr_0 [i_6] [i_6]), 63394)));
        arr_23 [i_6] = ((1939834511 ? 4289207978 : 218));
    }
    var_20 = (min((min(var_13, -56517)), (((~255) ^ (~24576)))));
    #pragma endscop
}
