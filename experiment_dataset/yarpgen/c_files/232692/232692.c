/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_18 = (((((arr_0 [i_0 - 1]) + 2147483647)) >> (18075023884810998803 - 18075023884810998801)));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_19 = 63;

                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            var_20 = -50;
                            var_21 = ((var_0 | (arr_1 [i_1 - 2])));
                            var_22 |= 0;
                        }
                        var_23 = (var_12 * var_2);
                        var_24 = (var_16 + 7);
                        var_25 = (max(var_25, (var_6 % 128)));
                    }
                }
            }
        }
        var_26 ^= (1073741824 & 15);
        arr_14 [i_0] [i_0] = -1;
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_18 [i_5] = (((183 > (arr_16 [i_5]))));
        var_27 = (128 * 18075023884810998820);
    }
    var_28 = var_11;
    var_29 = var_9;
    var_30 = var_5;
    #pragma endscop
}
