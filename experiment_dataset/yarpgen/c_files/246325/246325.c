/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = -29;
                    arr_10 [i_0 - 3] [i_0] [i_2] = ((~((7 ? 1 : 160))));
                    var_16 = (((((arr_8 [i_0] [i_1] [i_1] [i_0]) ? (arr_7 [i_1] [i_1] [i_0]) : var_1)) ^ (max(var_14, var_13))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_17 = (arr_3 [i_0]);
                        var_18 -= ((254 ? var_14 : var_9));
                        var_19 ^= (max((min(((var_2 ? var_9 : (arr_1 [18]))), ((49152 >> (2097151 - 2097123))))), (~63845)));
                        var_20 = (max(var_20, ((((arr_11 [13] [i_1]) ? (arr_5 [i_0] [i_3]) : var_10)))));
                        arr_13 [i_1] [i_1] [i_1] [i_3] |= max(((((((~(arr_2 [i_2])))) && 1795908301))), (min(((var_13 ? -11209 : var_1)), -1023)));
                    }
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        var_21 = ((!((((((var_8 ? var_1 : (arr_14 [i_0] [i_1] [i_1] [i_4])))) ? 4201751879649756891 : (160 - 14244992194059794724))))));
                        arr_16 [i_0] [i_0] = (max(95, ((var_12 ? ((min(var_0, var_9))) : -4849))));
                        arr_17 [i_0] [i_1] [i_0 + 3] &= 3703890444645448023;
                        var_22 = (min(var_13, var_7));
                        arr_18 [i_2] [i_1] [i_0] [i_1] [i_2] [i_4] = (min(var_13, (max(3956221973, 27))));
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_23 = (max(var_23, (((max(var_4, ((-(arr_1 [16])))))))));
                        var_24 = (arr_15 [i_0 - 1]);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] = (arr_7 [i_0] [i_0] [i_0]);
                                var_25 = 23;
                                var_26 = var_15;
                                arr_26 [i_0] [i_0] [i_0] [3] [i_0] = (!var_14);
                                var_27 = (min(var_27, ((((((((max(-1, 1))) <= 3794253348))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = var_7;
    var_29 *= (var_2 ^ var_15);
    #pragma endscop
}
