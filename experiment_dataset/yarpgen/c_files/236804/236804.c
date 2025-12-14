/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = ((+((((((arr_6 [i_0] [i_1]) ? var_8 : var_16))) ? ((max((arr_10 [i_4] [1] [i_2] [i_1] [1]), (arr_5 [i_0] [i_0] [i_0])))) : var_10))));
                                var_19 = (min(var_19, -8007297953143201828));
                                var_20 = (max(var_20, ((max(8007297953143201828, (((~var_3) ? (arr_3 [i_0] [i_1]) : (arr_11 [6] [i_3 + 1] [i_3] [i_2] [i_1]))))))));
                                var_21 = ((var_15 - (((((arr_8 [i_0]) + (arr_11 [i_0] [i_1] [i_2] [i_1] [i_1]))) - -6142))));
                            }
                        }
                    }
                }
                var_22 = -8007297953143201804;
                arr_14 [i_0] = (i_0 % 2 == zero) ? ((max((min(var_1, ((max((arr_1 [i_1] [i_0]), var_15))))), (min((((var_1 + 9223372036854775807) << (((((arr_2 [i_0] [i_0] [i_0]) + 5507571819634658805)) - 45)))), ((var_0 - (arr_9 [i_1] [i_0] [i_0] [i_0])))))))) : ((max((min(var_1, ((max((arr_1 [i_1] [i_0]), var_15))))), (min((((var_1 + 9223372036854775807) << (((((((((arr_2 [i_0] [i_0] [i_0]) + 5507571819634658805)) - 45)) + 3144006736623180350)) - 49)))), ((var_0 - (arr_9 [i_1] [i_0] [i_0] [i_0]))))))));
            }
        }
    }
    var_23 = (max(var_23, (((~((9223372036854775807 / (20 % 24))))))));
    var_24 -= ((min((max(var_14, var_15)), var_14)) != (!var_17));
    var_25 = (((max(var_5, var_17)) + (((((var_17 != 2944199213813895619) >= (var_9 + var_0)))))));
    var_26 = ((((~(min(-2944199213813895618, var_14)))) << (((max(((var_14 ? var_15 : var_4)), (var_4 || var_13))) - 1263243171))));
    #pragma endscop
}
