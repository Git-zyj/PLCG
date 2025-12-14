/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (((-1 + 2147483647) >> ((var_9 >> (var_5 - 11461)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_14 -= ((((((~((-3279186129468405565 ? var_12 : 2016613274)))) + 2147483647)) >> (var_3 - 50)));

                            for (int i_4 = 1; i_4 < 16;i_4 += 1)
                            {
                                arr_15 [i_0] [16] [16] [i_0] [i_4 - 1] = (((((~(~var_7)))) ? (((((min(var_4, var_4)) + 2147483647)) >> (((arr_9 [i_3] [i_0]) + 20516)))) : var_7));
                                var_15 = ((79 ? (((-(~2637760574)))) : 3321231811439343355));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_0] [1] = (arr_0 [1] [i_1]);
                var_16 |= (+(((((var_9 ? (arr_11 [i_0] [12]) : 65238))) ? var_9 : ((var_8 | (arr_14 [3] [3] [13] [i_0] [7]))))));
                arr_17 [i_0] = (((((arr_1 [i_0]) ? (arr_5 [i_1]) : (arr_5 [i_0])))) ? (arr_1 [i_0]) : (~0));
            }
        }
    }
    var_17 = 3321231811439343355;
    var_18 &= ((-((var_5 ? (0 >> var_7) : (((194 >> (var_11 - 1026414020))))))));
    #pragma endscop
}
