/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 16384;
    var_14 = ((~((var_4 | (var_7 - var_6)))));

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 = ((((((((arr_1 [i_0 - 1]) - var_4)) - ((-(arr_9 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2])))))) ? (arr_9 [i_0] [i_0] [i_0] [22]) : ((var_11 ? ((var_4 ? var_10 : var_10)) : (!var_2)))));
                    var_16 *= (((var_5 == -19192) ? (((min((arr_1 [i_2]), var_3)) / (((0 ? var_5 : (arr_0 [0])))))) : ((max(var_10, (((arr_5 [i_0] [i_1 - 3] [16]) ? (arr_3 [i_0 + 2]) : var_7)))))));
                }
            }
        }
        arr_10 [i_0] = ((16368 * (((((var_7 ? 64194 : (arr_0 [i_0])))) ? var_5 : (((arr_5 [i_0] [i_0 - 2] [i_0 - 2]) ? var_11 : (arr_2 [21] [i_0])))))));
        var_17 -= ((!((((var_3 == var_0) ? (((arr_8 [i_0 - 1]) / var_7)) : (arr_0 [i_0 - 1]))))));
        arr_11 [i_0] = (((~var_1) && ((((arr_4 [i_0 + 1] [i_0 + 1]) / (arr_4 [i_0 + 2] [i_0]))))));
    }
    #pragma endscop
}
