/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_12 ? var_2 : var_6))) || ((((var_5 & 173) ? (~var_5) : var_5)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((~(var_7 * var_4)));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_21 = ((var_2 ? (arr_4 [i_2 + 2]) : (arr_4 [i_2 - 1])));
                        var_22 += ((~(arr_2 [i_3] [i_3] [i_2 + 2])));
                        var_23 *= var_18;
                        var_24 ^= ((57 * (-135841256 != -99)));
                        var_25 = (arr_13 [i_0] [i_0] [i_0] [i_0]);
                    }
                }
            }
        }
        arr_14 [i_0] [i_0 + 2] = 232;
    }
    #pragma endscop
}
