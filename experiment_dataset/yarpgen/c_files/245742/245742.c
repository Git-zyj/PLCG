/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 += ((~(min((arr_2 [13] [i_1]), -var_8))));
                var_12 = 12511747621357159248;
                var_13 = ((~(arr_3 [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_14 = ((-var_4 ? (-2 - 122852703350842687) : var_8));
                                arr_15 [i_2] [13] [i_4] [i_5] [i_3] [i_5] [i_3] = var_7;
                                arr_16 [6] [i_3] [23] [i_5] [i_3] [7] [15] = 84;
                            }
                        }
                    }
                }
                arr_17 [i_3] = (((var_10 ? var_0 : var_4)) >= (((min((arr_6 [i_2] [12]), (arr_12 [i_2] [i_3] [i_2] [6]))) + -18446744073709551615)));
                var_15 = ((var_3 ^ (-2147483623 || 7939)));
                var_16 += ((var_8 | var_1) ? var_4 : ((9223372036854775807 ? (arr_5 [i_3] [i_2]) : (7951 - 188))));
                var_17 = (min(var_17, (((((min((-2147483647 - 1), var_4))) ? ((-(arr_13 [i_3] [i_2] [i_2] [i_2] [i_2]))) : 69818988363776)))));
            }
        }
    }
    var_18 = var_0;
    #pragma endscop
}
