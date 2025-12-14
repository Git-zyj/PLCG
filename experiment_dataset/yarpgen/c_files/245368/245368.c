/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = 4098724026;
                                var_15 = (max(var_15, 511));
                                var_16 = (max(((-3627951895156201558 + ((511 ? 9223372036854775807 : 511)))), (((0 ? 1 : 448)))));
                                arr_13 [i_0] [i_2] [i_0] = ((-9223372036854775785 ? 3627951895156201569 : (((max(var_0, 2690058672546619342)) + (((2063270213 ? 78 : 4294967295)))))));
                                var_17 = (max(var_17, (1010102648 + -169850800106885733)));
                            }
                        }
                    }
                    var_18 = (((((-9223372036854775807 - 1) + 18446744073709551615)) + (!2)));
                }
            }
        }
    }
    var_19 = ((4294967295 ? -169850800106885747 : 1010102656));
    var_20 = 1;
    var_21 = var_12;
    #pragma endscop
}
