/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((max(118, -1504353390))) ? var_6 : (((max(var_1, var_8)))));
    var_16 = 31;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_17 = (((((var_2 ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : var_0))) ? ((-1 ? (arr_4 [i_3 + 1] [i_2] [i_1] [i_0]) : (arr_2 [i_0] [i_0] [i_0]))) : (((arr_5 [i_0] [i_1] [i_2] [i_3 - 1]) ? (arr_4 [i_1] [i_1] [i_2] [i_2]) : 71))));
                        var_18 *= 32768;
                        var_19 = var_9;
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_4] = (min(-112, -116));
                        arr_13 [i_2] [i_2] = 95;
                    }
                    arr_14 [i_0] [i_1] [i_2] |= (14 ? 96 : var_2);
                    var_20 = ((-64980 % (((-32767 - 1) ? 32465 : (((~(arr_1 [i_2]))))))));
                    var_21 += 46;
                    var_22 = 31;
                }
            }
        }
    }
    #pragma endscop
}
