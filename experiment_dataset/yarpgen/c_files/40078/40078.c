/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (-(((min((arr_5 [i_0]), 0)) ? ((max(11, var_6))) : -251)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 = ((var_7 ? 5 : ((var_3 ? -6031 : -124))));
                                var_19 = (((64 >= (arr_14 [i_1] [i_1 - 1] [i_1] [i_1] [i_1]))));
                                var_20 = 32766;
                                arr_15 [i_0] [i_0] [i_1 - 1] [i_1] [i_3] [i_4] [i_4] = (min(3413637463504177065, -1600632511));
                                var_21 *= (max(15033106610205374555, ((((arr_7 [i_0] [i_0] [i_0] [i_0]) == 1)))));
                            }
                        }
                    }
                }
                var_22 = (min(var_22, var_14));
                var_23 = ((((min((((106 ? (arr_8 [i_1] [i_0] [i_1] [i_1 - 1]) : (arr_8 [i_1] [i_0] [i_1] [i_1])))), ((var_9 ? var_1 : 8718))))) ? ((var_13 ? 17179869176 : (((min((arr_9 [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0] [i_1 - 1]))))))) : 1));
            }
        }
    }
    var_24 = ((+((var_8 ? (var_9 / var_9) : var_0))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_25 *= 11;
                var_26 = (arr_16 [i_5]);
                var_27 = ((min((((!(arr_8 [i_6] [i_5] [i_5] [i_6])))), -209577462)));
            }
        }
    }
    #pragma endscop
}
