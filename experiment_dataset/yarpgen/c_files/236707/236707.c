/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 = var_9;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = (min(var_12, ((max((((!916439649) ? ((18446744073709551593 ? -22 : 18446744073709551593)) : var_1)), ((((2701464532 ^ 22) & (var_6 & var_9)))))))));
        var_13 = (((2147483647 / -29738) ? (max(-2147483629, 1)) : 13650));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_15 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_3] [i_1] [i_1 + 2] &= ((14251475090491151065 ? (min(var_9, ((23 ? var_7 : var_5)))) : 2147483640));
                                var_14 = (max((((((max(var_4, var_7)))) - var_2)), (min(12897599157959888943, 4294967295))));
                                arr_16 [i_1] [i_2] [11] [i_2] [i_1] [i_5] [i_2] = ((var_3 ? (min(var_2, var_5)) : (((max(1, var_2))))));
                            }
                        }
                    }
                    arr_17 [i_1 + 3] [i_1] [i_1] [i_2] = ((4294967290 ? ((11864812348782757302 ? 157 : var_7)) : ((((((18107 ? 13650 : var_3))) || 5)))));
                    arr_18 [i_2] [i_2] [i_3] = (min(var_4, 2251799813685216));
                    var_15 ^= -var_5;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_16 = ((-(min((((var_6 ? var_8 : var_6))), ((18446744073709551613 ? var_2 : var_0))))));
                                arr_23 [i_2 + 1] [i_2] = (((((((max(-6119474943383996848, var_2))) ? (~18446744073709551613) : ((16398101 ? var_0 : var_0))))) ? (-32767 - 1) : var_4));
                                arr_24 [i_1] [19] [19] [i_3] [19] [i_2] = var_2;
                            }
                        }
                    }
                }
            }
        }
        arr_25 [i_1] = ((((((var_9 ? 2110199791 : 45103)))) ? var_1 : var_6));
    }
    var_17 = ((((min(5, var_0))) ? 16398096 : ((var_8 ? -5510622690447101854 : (max(var_4, var_0))))));
    #pragma endscop
}
