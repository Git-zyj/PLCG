/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (0 != -32);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_21 ^= -7;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_22 = (min(1, var_19));

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 14;i_4 += 1)
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] = ((((((arr_5 [i_1] [i_1] [i_1] [i_1]) + var_19))) ? var_9 : (((((arr_11 [i_3] [i_3]) || var_18))))));
                                var_23 = (((((56 ? -10 : 229736229))) ? (((0 ? var_14 : 0))) : (-94 * 0)));
                                var_24 = (max(var_24, (arr_0 [i_1] [i_1])));
                                var_25 ^= (arr_0 [i_0] [i_0]);
                            }
                            for (int i_5 = 2; i_5 < 13;i_5 += 1)
                            {
                                var_26 ^= var_16;
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_3] = ((-64 ? (56 | 2752935932) : 4294967295));
                                var_27 ^= (max(-56, (((arr_1 [i_0] [i_0]) / ((1 ? (arr_0 [i_0] [i_0]) : 51))))));
                                var_28 = ((((max((1 - 89), -1042759444))) - (max(var_14, (((-9223372036854775807 - 1) ? 2 : (arr_2 [i_3])))))));
                            }
                            var_29 = (max(var_29, (((((max((((arr_11 [i_0] [i_0]) ? 9223372036854775795 : 9223372036854775807)), ((max(1414674077, var_4)))))) ? ((((min(1, -37))) ? (((arr_3 [i_3] [i_3] [i_3]) ? -57 : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : -8908)) : 179)))));
                            var_30 = ((((max(234, (arr_3 [i_3] [i_3] [i_3])))) >> (((((4294967281 + 1857747157) ? ((max(38372, -2000891582))) : ((var_7 - (arr_17 [i_0] [i_3] [i_0] [i_3] [i_0]))))) - 38348))));
                        }
                    }
                }
                var_31 = (((((((57 & (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) < var_10))) == 5126));
            }
        }
    }
    #pragma endscop
}
