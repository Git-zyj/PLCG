/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (-595011249 | var_11);
    var_17 = (min((max((var_5 + var_4), (var_15 - var_13))), (((var_3 ? var_14 : (min((-9223372036854775807 - 1), var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((min(((((((arr_4 [i_1] [i_1] [i_1]) + (-9223372036854775807 - 1)))) ? ((min(var_5, (-9223372036854775807 - 1)))) : (min(var_3, (arr_4 [i_0] [i_0 + 2] [i_1]))))), ((((((-9223372036854775807 - 1) - var_7))) ? (arr_4 [i_0] [i_0] [i_1]) : -var_15)))))));
                arr_5 [i_1] |= (-9223372036854775807 - 1);
                var_19 = (max(var_19, var_11));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [i_0 - 2] [i_1] [i_2] [i_1] &= (-9223372036854775807 - 1);
                            var_20 ^= (var_3 * var_12);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
