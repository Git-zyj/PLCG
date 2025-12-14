/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_2 / ((3021752902 ? (-127 - 1) : 9849)))) * -var_13));
    var_16 = (min(var_16, ((!(((var_5 ? (max(17466, var_6)) : (!var_2))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (max(var_17, var_1));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, var_1));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_19 = (((((((-17440 ? var_2 : var_3))) ? (arr_10 [i_1] [i_2] [i_1]) : (arr_5 [i_1]))) * 1956021422680591141));
                                var_20 = (min(var_20, -17465));
                            }
                            var_21 = (min(var_21, ((((((arr_0 [i_0] [i_3]) ? -7 : 842580198)) ^ (arr_11 [i_3] [i_3] [i_1] [i_3] [i_3]))))));
                            var_22 = (min(var_22, 28));
                        }
                    }
                }
                arr_13 [i_1] = ((min(((((arr_6 [11] [i_1] [i_1] [i_1]) > 284209601))), 32756)));
                var_23 = (min((arr_4 [i_0] [15] [i_0]), (((17496 > (1273214394 + var_11))))));
                var_24 = ((((min((arr_0 [i_0] [1]), ((((arr_7 [i_0] [i_0] [i_0]) ? var_14 : var_5)))))) ? ((-(~116))) : (((((9837 ? (arr_10 [i_1] [1] [1]) : (arr_10 [i_1] [i_1] [i_1])))) ? (arr_9 [i_1] [i_1] [i_0] [i_0] [0] [i_0]) : (0 < 1800359160)))));
            }
        }
    }
    #pragma endscop
}
