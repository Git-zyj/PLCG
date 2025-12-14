/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 ^= 0;
                arr_5 [8] [i_0] [i_1] &= ((((((((arr_2 [14]) ^ (arr_2 [12]))) + 59))) % var_5));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 + 1] [i_0] [12] [i_0 - 1] &= ((((min((arr_6 [i_1] [i_1] [i_2 + 1] [i_1]), var_10))) ? 18446744073709551615 : (((1024383244 ? 17985895492074197295 : 3270584051)))));
                                var_16 -= ((~((1024383244 ? var_7 : (arr_0 [i_0 - 2])))));
                                arr_14 [i_4] [i_3] [i_0] [i_0] [i_0 - 2] [i_0 - 2] = 0;
                            }
                        }
                    }
                }
                arr_15 [0] [i_1] [i_1] &= (((((arr_11 [i_1] [i_1] [i_1] [4] [1] [i_1] [i_1]) ? (arr_12 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0] [i_0] [16] [i_0 + 1]) : (arr_1 [i_0]))) + 0));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            {
                var_17 = (min((((-44 ? ((var_6 ? (arr_0 [i_5]) : (arr_11 [i_5] [i_5] [i_5] [i_6 - 1] [i_6] [i_6 + 1] [i_6 - 1]))) : var_0))), (max(524216380, ((2486 ? (arr_19 [i_5] [i_6 - 1]) : var_8))))));
                var_18 = (((((((var_9 ? var_2 : (arr_9 [i_6] [i_6] [i_6 + 1] [i_6] [i_5])))) ? (460427890214765940 / 563465576) : (max((arr_21 [i_5] [i_5] [i_5]), 18446744073709551615)))) >= -1));
            }
        }
    }
    var_19 = var_8;
    #pragma endscop
}
