/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = (max((((arr_1 [i_2 + 1]) ? (arr_1 [i_2 + 1]) : (-32767 - 1))), ((max(0, 0)))));
                    arr_9 [i_2 + 2] [i_2] = var_6;
                    var_18 += (arr_4 [i_1]);
                    var_19 *= ((((((arr_7 [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2 + 1]) ? (arr_7 [i_2 + 1] [i_2 + 2] [i_2 + 3] [i_2 - 1]) : var_0))) ? ((17592186044415 ? 137438953408 : 1)) : (arr_4 [i_2])));
                }
            }
        }
    }
    var_20 = ((~(((var_9 ? var_4 : var_10)))));
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                {
                    var_21 = (arr_13 [i_3] [i_3] [i_3 + 3]);
                    var_22 &= (max((((arr_15 [i_4] [i_4] [13] [i_5 + 1]) ? (arr_15 [i_3] [i_3 + 3] [i_3] [i_5 - 1]) : var_16)), (((arr_14 [i_3 + 2] [i_3 + 2]) / (((var_8 ? (arr_10 [i_3]) : (arr_12 [i_3] [i_3] [i_3 + 2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
