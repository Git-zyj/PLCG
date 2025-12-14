/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_19 = 4294967289;
                            var_20 = max((((((var_12 ? 10653 : 1))) ? (arr_4 [0] [i_2]) : 16574417987440549318)), (var_2 && var_14));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                var_21 = 1889402579;
                                var_22 = arr_4 [7] [i_2];
                            }
                            for (int i_5 = 0; i_5 < 24;i_5 += 1)
                            {
                                var_23 = (i_2 % 2 == 0) ? ((((arr_12 [i_2] [i_1 + 1] [i_2] [i_2] [i_3] [i_5]) << (((arr_8 [i_0] [i_2]) - 2854))))) : ((((arr_12 [i_2] [i_1 + 1] [i_2] [i_2] [i_3] [i_5]) << (((((arr_8 [i_0] [i_2]) - 2854)) + 7949)))));
                                var_24 = (max(var_24, (arr_7 [i_0] [4] [i_0])));
                                var_25 = (((-((243 ? var_4 : var_7)))));
                            }
                            for (int i_6 = 0; i_6 < 24;i_6 += 1)
                            {
                                var_26 = var_17;
                                arr_18 [i_2] [i_3] [i_6] = 4107682737;
                            }
                            var_27 = ((max((arr_11 [i_3] [i_3] [i_1 + 2] [i_1 + 2] [1]), var_18)));
                            var_28 = var_0;
                        }
                    }
                }
                var_29 = ((((33389 ? var_3 : ((var_4 ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) : -472520684092579205))))) ? var_4 : ((((min(4294967288, var_16))) ? var_2 : var_0)));
            }
        }
    }
    var_30 = var_0;
    #pragma endscop
}
