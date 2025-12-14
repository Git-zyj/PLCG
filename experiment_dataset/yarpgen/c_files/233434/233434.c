/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((min((-5528503707806257805 / var_4), var_0)), (((-5528503707806257805 / -5528503707806257805) ^ (((-5528503707806257805 ? var_9 : var_2)))))));
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((arr_3 [i_0] [i_0] [4]) + (max((arr_4 [i_0]), 2748))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = (arr_13 [i_0] [i_0] [i_2]);
                                var_15 = (i_2 % 2 == 0) ? ((((((!(arr_7 [i_2] [i_2] [i_2] [i_4 - 1])))) >> (((arr_11 [i_4 - 1] [i_2] [i_4 - 1]) + 27))))) : ((((((!(arr_7 [i_2] [i_2] [i_2] [i_4 - 1])))) >> (((((arr_11 [i_4 - 1] [i_2] [i_4 - 1]) + 27)) - 100)))));
                                var_16 = ((1 ? ((((var_6 ? (arr_2 [i_0]) : 2748)))) : (max(((0 ? (arr_13 [i_0] [12] [i_2]) : 1748393287435088490)), (((-5528503707806257805 | (arr_11 [i_0] [i_2] [3]))))))));
                                arr_15 [i_2] [i_2] = 50;
                                var_17 = (((arr_14 [i_4] [i_4 - 1] [i_4] [i_4] [i_4]) ? (arr_12 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 - 1]) : 206));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                var_18 = (arr_7 [i_5] [i_5] [i_5] [i_6]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_19 = (max(var_19, (62788 ^ -7102288285222147414)));
                            arr_29 [i_5] [i_6] [i_5] [i_7] [i_7] [i_8] = (min(((-4511 ? 1718159966799678445 : -106)), (arr_4 [i_5])));
                            var_20 = ((((((0 + 5132449485700990124) * (arr_5 [i_6] [i_8])))) ? (max((arr_13 [i_5] [i_5] [i_7]), ((5132449485700990124 ? (arr_23 [i_7] [i_7] [i_7]) : 1718159966799678445)))) : ((1718159966799678445 * ((var_5 ? (arr_11 [i_7] [i_7] [i_7]) : 16728584106909873170))))));
                        }
                    }
                }
            }
        }
    }
    var_21 = ((((max(((60 ? var_1 : 16728584106909873170)), 947281322))) || ((min((((0 ? 117 : 0))), 6473)))));
    #pragma endscop
}
