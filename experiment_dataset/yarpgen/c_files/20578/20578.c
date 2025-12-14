/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_15 = (((-var_12 && (2366017795 % var_0))) ? -0 : (min((arr_1 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0] [i_0]))));
        arr_2 [i_0 + 1] [i_0 + 1] = (max(((var_2 ? (((!(arr_0 [i_0 + 1] [i_0])))) : ((var_6 >> (578875850 - 578875829))))), (arr_0 [i_0 + 1] [i_0])));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_16 -= ((var_6 ? (~3716091446) : var_9));
                                var_17 = (min(var_1, (arr_13 [i_2] [i_4] [i_4] [i_4 + 1])));
                            }
                        }
                    }
                    var_18 = (min(var_18, ((((((-var_12 ? ((var_0 ? (arr_16 [20] [11] [i_2] [i_2] [i_3] [23]) : var_11)) : ((((arr_6 [i_2]) | 0)))))) ? ((((min(35184372088831, 6178520175685183621))) ? (arr_7 [i_2]) : -26342)) : (((((max(578875833, (arr_0 [i_3] [i_2]))) < (((var_0 ? var_3 : (arr_17 [i_2])))))))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_19 = ((!(7 && var_1)));
                                var_20 = ((236 || (((0 ? 4294967295 : 578875850)))));
                            }
                        }
                    }
                }
            }
        }
        arr_23 [14] [14] &= (!(!var_5));
        var_21 = var_3;
        var_22 = (arr_9 [i_1] [i_1] [i_1]);
    }
    var_23 *= ((~(((13160536402959255563 && -1) + 469154457))));
    #pragma endscop
}
