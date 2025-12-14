/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((3461765339 ? ((-26101 ? 120 : -14) : -14)));
    var_20 -= var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_21 *= ((((~((var_11 ? var_11 : 218)))) << (min((arr_0 [i_0 + 1]), (((arr_4 [i_0]) ? 0 : var_7))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_22 = ((var_18 ? var_3 : (max((var_5 | 2611583273), 3))));
                                arr_14 [5] [i_1] [i_1] [1] [i_0] [i_4] [i_4] = var_6;
                                var_23 = 0;
                            }
                        }
                    }
                }
                arr_15 [i_0] = (max(((var_14 ? 0 : -1341129585961789)), -26079));
                var_24 = ((+(((192954884 ^ 1) ? var_10 : var_2))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    arr_25 [i_6] [i_6] [i_7] = ((!(((65535 ? -12331 : 11)))));
                    var_25 = (((((-5612961822980439832 + (arr_8 [20] [i_6] [i_6] [i_5])))) ? ((var_12 ? var_12 : -1003791753)) : var_0));
                    arr_26 [i_7] = (1124184600 | -16);
                }
            }
        }
    }
    var_26 = (((~var_4) << var_15));
    #pragma endscop
}
