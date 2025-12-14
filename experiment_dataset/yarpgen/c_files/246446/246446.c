/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = ((((~(arr_0 [i_0] [i_0]))) <= 631301058393640286));

        for (int i_1 = 4; i_1 < 19;i_1 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_0] [i_0] = ((10779 ? ((~(arr_4 [i_0] [i_0]))) : (arr_7 [i_0])));
            var_14 ^= var_9;
        }
        for (int i_2 = 4; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_15 *= (((arr_5 [i_2 - 1]) ^ (arr_6 [i_2] [i_2] [i_2 - 2])));
            arr_11 [i_0] [8] = 1;
            var_16 = ((~(arr_7 [i_2 - 2])));
            arr_12 [i_2] = (arr_7 [i_2 - 3]);
        }
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    arr_17 [i_4] [i_0] [i_0] [i_0] |= (arr_9 [i_0] [15]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_26 [i_0] [i_0] [5] [i_3] [i_4] [5] [i_6] = (arr_6 [i_3] [i_3 - 2] [i_3]);
                                var_17 ^= (((arr_0 [i_0] [i_0]) ^ (arr_0 [i_3 - 3] [0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_11;
    var_19 = (((((var_5 ? var_12 : var_11) << (var_7 - 2027426821)))));
    #pragma endscop
}
