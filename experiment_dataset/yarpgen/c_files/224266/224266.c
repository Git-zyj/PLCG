/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 30333;
    var_11 = (min(var_0, 30325));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (!var_7);
        arr_3 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            var_12 ^= ((~(min(var_2, (arr_4 [i_2 + 1])))));
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_13 = ((~((~(arr_9 [i_1 - 1] [i_2 - 3] [i_2 - 2])))));
                            var_14 = ((-(arr_5 [i_2])));
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    {
                        var_15 -= ((max((arr_23 [i_1 - 4] [i_6] [i_7] [i_8]), 11422)));
                        arr_24 [i_8 + 2] [i_8] [i_7] [i_7] [i_6] [i_1] = (((((var_5 ? (arr_12 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 4] [i_1 + 1]) : (arr_12 [i_1] [i_1 - 1] [i_1 - 3] [i_1 - 1] [i_1 - 3])))) ? (~30342) : ((~(arr_13 [i_1] [i_1] [i_1] [i_1] [7] [i_1])))));
                    }
                }
            }
        }
    }
    var_16 = var_3;
    var_17 *= var_3;
    #pragma endscop
}
