/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = ((110 ? 16121323801555966001 : var_4));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 |= (((72 > -31756) < var_7));
                                var_15 *= ((var_6 ? 4253818047137145369 : -0));
                            }
                        }
                    }
                    arr_12 [i_1] [i_0] = (((((var_1 ? var_6 : var_5))) ? (var_11 / var_6) : 11429063724684132212));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_16 = ((83 ? 9363 : (var_0 <= 162218476)));
                                var_17 = (!2491070283066884884);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_18 = ((((((var_6 + 2147483647) >> (var_7 - 78)))) ? (!var_7) : 4294967295));
                                var_19 = (min(var_19, -8543961));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(var_20, ((((!var_10) ? (min((max(-6672028946463214728, var_11)), (((209 ? -560545636 : var_4))))) : (((((min(var_9, var_4))) ? ((max(0, 1))) : (23 >= 54841)))))))));
    #pragma endscop
}
