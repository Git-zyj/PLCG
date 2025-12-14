/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((23894 ? 8968 : ((8599570390143625432 ? 120 : 33065))));
        arr_3 [i_0] |= var_14;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 = (!-72);
                                var_19 &= (((((((1 * (-127 - 1)))) / var_6)) / (((10 ? -2147483639 : (arr_6 [i_0]))))));
                            }
                        }
                    }
                    var_20 = (min(var_20, (arr_7 [i_2 + 2])));
                }
            }
        }
        arr_14 [i_0] = (((~var_8) >= ((((var_4 ? (arr_12 [i_0] [i_0] [i_0]) : var_0)) % ((max(100, var_15)))))));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_18 [i_5] = -var_0;
        arr_19 [i_5] = ((-((((var_11 | var_13) && (-4520745980425003317 | 4398046511103))))));
    }
    var_21 = ((-(min((min(32762, -4520745980425003317)), (min(7974389726499245962, (-127 - 1)))))));
    #pragma endscop
}
