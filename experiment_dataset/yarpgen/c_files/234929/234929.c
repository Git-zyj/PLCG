/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 += var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_17 = ((((arr_1 [i_0 - 1]) ? (arr_1 [i_0 + 1]) : 69)));
                            var_18 = (((185 > 10155016566951254052) + ((min(500146409, 227)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_19 = (min(var_19, var_4));
                                var_20 = (((!8647554742944038087) ^ (arr_4 [i_1] [i_1 - 1])));
                                var_21 = (((((arr_13 [i_0 + 1]) ? 56 : 1)) / ((88 ? (arr_10 [i_0 + 1] [i_5] [i_4]) : ((max(184, 78)))))));
                                var_22 += (((arr_11 [i_6] [i_6] [i_6]) ? ((11785872374836586418 ? (arr_17 [i_0] [i_0]) : (arr_9 [i_0 + 1] [i_1 - 1] [i_1] [i_1 - 1] [i_5] [i_5]))) : (((-78 ? (arr_12 [i_1 - 1]) : ((10155016566951254052 ? var_11 : var_5)))))));
                                arr_21 [i_0] [i_1] [i_5] [i_1] [i_6] [i_1] [i_0] = (((arr_11 [i_1] [i_4] [i_1]) >> ((((max(-118, (max(var_7, var_11))))) - 162))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
