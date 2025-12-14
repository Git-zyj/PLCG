/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_10 = (~1);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_11 = var_6;

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_12 = (((arr_11 [i_2] [i_2 + 1] [i_2]) ? (arr_4 [i_1] [i_2 + 1] [i_2]) : (arr_4 [i_0] [i_2 + 1] [i_0])));
                                var_13 = (arr_9 [i_2 - 2] [9] [i_4]);
                                var_14 = (((arr_10 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1]) ? (arr_10 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]) : (arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 + 1])));
                                var_15 -= ((2686918685518774418 ? (arr_5 [i_0] [i_3]) : var_9));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                            {
                                var_16 = (((0 ? 0 : 1397316129)));
                                var_17 -= (((arr_11 [i_2 - 1] [i_5] [i_5]) ? var_1 : -1));
                            }
                            for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                            {
                                var_18 *= (244 + 246);
                                var_19 = ((-19964 ? (((min((arr_1 [i_1] [i_2 - 1]), 3)))) : ((var_0 << (var_4 / var_6)))));
                            }
                            var_20 = ((+((((arr_13 [i_1] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1]) >= (arr_13 [4] [i_1] [i_1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                            var_21 -= var_2;
                        }
                    }
                }
                var_22 = (arr_14 [5] [5] [5] [i_0] [i_1] [i_0]);
            }
        }
    }
    var_23 = var_2;
    #pragma endscop
}
