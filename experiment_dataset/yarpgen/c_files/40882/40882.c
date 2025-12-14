/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((min(127, ((113 ? -90 : var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] &= ((~(~510296166)));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_3] [i_3] = -28945;
                        arr_10 [i_0] [i_3] [10] = ((-(((arr_0 [i_1] [i_2]) ? (arr_4 [i_0] [i_1] [i_2] [i_3]) : (var_2 != 113)))));
                        var_16 = (max(var_16, (((((((((-510296154 ? (arr_4 [i_0] [i_1] [i_2] [i_3]) : -510296154))) ? (39 * var_8) : var_0))) ? (((((-7739 && (arr_1 [i_2])))))) : ((-1 ? var_7 : (((max(98, (arr_2 [i_0] [i_1] [i_3]))))))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_15 [i_0] [1] [i_1] [21] [1] [i_4] = (!var_4);
                        var_17 = ((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (~0) : (((arr_11 [i_0] [i_1] [i_1] [i_2] [i_2] [i_4]) >> (var_5 - 12154269642241521234))));
                        arr_16 [i_0] [i_0] [i_0] = ((var_9 ? (((arr_13 [i_0] [i_1] [i_0] [i_0] [i_4]) + var_11)) : -120));
                        var_18 -= -24077;
                    }
                }
            }
        }
    }
    var_19 = var_6;
    #pragma endscop
}
