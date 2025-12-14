/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_1 ? var_10 : ((11618117656728707207 ? (((max(var_12, -26)))) : (var_0 - var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (((((-(arr_0 [i_0] [i_1])))) ? var_6 : 892774310));
                var_15 = (((min((max(var_0, 524287)), ((max((arr_3 [i_0] [i_0]), var_12)))))) ? var_9 : (((arr_0 [i_0] [i_0]) ? (var_5 | 3402192980) : var_3)));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_16 *= (((0 ? -1368074833 : 18446744073709551615)) >= (arr_4 [i_1] [8]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 |= 1;
                                var_18 -= var_3;
                                var_19 = (!892774338);
                            }
                        }
                    }
                }
                arr_12 [0] [i_1] &= 51812;
            }
        }
    }
    var_20 = (max(var_20, (((var_11 ? var_7 : ((min(var_4, var_11))))))));
    var_21 ^= 18446744073709551615;
    var_22 = var_11;
    #pragma endscop
}
