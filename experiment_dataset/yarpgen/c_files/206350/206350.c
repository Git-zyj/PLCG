/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_6, (min((~var_4), ((var_15 >> (((((-9223372036854775807 - 1) - -9223372036854775795)) + 16))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 ^= ((min((arr_1 [i_1]), 9223372036854775807)));
                arr_4 [i_1] [i_0] [i_1] = ((~(min((arr_3 [i_0] [i_0] [i_0]), (min((-9223372036854775807 - 1), (arr_0 [3])))))));
                var_19 ^= min(9223372036854775807, (arr_3 [i_1] [i_0] [i_0]));
            }
        }
    }
    var_20 = (~((var_11 ? (var_12 / -2) : var_13)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            {
                var_21 = (((arr_6 [1] [1]) || (arr_1 [i_2])));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            arr_17 [i_2] [i_3] [i_4] [i_5] = ((~(arr_8 [i_4] [i_4] [i_4])));
                            arr_18 [20] = (min((!-1993923743), 8757507284140378122));
                            arr_19 [i_2] [i_2] [i_4] [i_5 + 1] = (min(((9223372036854775807 ? -var_16 : -1615244183)), (((arr_16 [i_2] [20] [i_4 + 1] [i_5]) ^ 3494856310))));
                        }
                    }
                }
                var_22 = (min(var_22, (min(var_6, (arr_15 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 + 1])))));
                var_23 += (min((((min(375091610, var_14)) ^ ((min(9223372036854775807, var_15))))), ((min(241, 208)))));
                arr_20 [i_2] [7] = (-(min((min(4, (arr_7 [i_2]))), (10 + 281474976710655))));
            }
        }
    }
    var_24 = var_11;
    #pragma endscop
}
