/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_3 <= 4976231560277800468) ? (-997676025 & var_11) : (((var_12 != (max(11245349705023414127, -3622121960060223414)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_3] = (var_15 << (((max(((((arr_11 [i_0] [i_0] [i_0] [i_0]) / var_14))), var_7)) - 10123610622481631116)));
                            var_21 &= (((var_8 ? var_19 : var_1)));
                            arr_13 [i_0] [i_0] [i_2] [i_3] = (min((min(997676008, (arr_7 [i_0 + 2]))), ((var_3 ? var_5 : (arr_11 [i_1 - 2] [i_0 + 1] [i_1 - 1] [i_0 + 1])))));
                        }
                    }
                }
                var_22 -= ((((((var_14 ? var_0 : (arr_8 [i_0] [i_1] [i_0])))) ? (max((arr_1 [i_0]), (arr_5 [i_1] [i_0 + 2]))) : (var_14 <= var_17))));
            }
        }
    }
    var_23 = (min(997676019, ((~(-1472072033043952882 >= 2859809912798085380)))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_24 += (min(-997676036, -45747354));
                    var_25 *= (6550348831036059949 || 39922);
                    var_26 ^= (min((((arr_16 [i_4]) ? (arr_16 [i_4]) : var_4)), ((((arr_16 [i_4]) ? (arr_16 [i_4]) : var_16)))));
                    var_27 = ((-(((arr_16 [i_4]) ? var_9 : 32138))));
                }
            }
        }
    }
    #pragma endscop
}
