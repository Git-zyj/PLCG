/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 ^= var_3;
        var_19 = -7271;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] = ((-9223372036854775797 ? (((((var_16 ? var_3 : (arr_2 [i_1] [i_1])))))) : ((-0 ? var_1 : 2303591209400008704))));

        /* vectorizable */
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            var_20 = (min(var_20, var_16));
            var_21 = (min(var_21, (((var_14 << (((arr_4 [i_2 - 2]) - 14634)))))));
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                {
                    arr_12 [i_1] [i_3 - 1] [i_4] [i_3 - 1] = (-(((arr_0 [i_1]) ? 16 : 0)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_22 ^= (max(((min(var_17, -28159))), (((arr_15 [i_1] [i_1] [i_1] [i_5]) ? -32757 : var_3))));
                                arr_21 [i_1] [i_1] [i_5] = 13;
                                var_23 = ((var_16 ? -31657797 : 32744));
                                var_24 -= var_14;
                            }
                        }
                    }
                    var_25 ^= 84;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        arr_24 [i_7] [i_7] = 0;
        arr_25 [i_7] [16] = var_14;
    }
    var_26 = 1707202027;
    var_27 = -var_1;
    var_28 ^= var_1;
    #pragma endscop
}
