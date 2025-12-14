/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = ((((((((6480 / (arr_0 [i_0] [i_0])))) ? 483799641 : (min((arr_1 [i_0]), (arr_0 [i_0] [2])))))) ? (((~var_15) ? ((-1 ? 1 : 20)) : var_8)) : (((arr_0 [i_0] [i_0]) << (((arr_1 [i_0]) - 3214003523237988432))))));
        var_21 = (arr_1 [i_0]);
        var_22 = (((max((arr_1 [i_0]), var_4))) ? 244 : (max((((arr_1 [i_0]) ? 3130158993219155797 : 13493179516166865903)), 13493179516166865926)));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_23 = var_6;
        arr_4 [i_1] = (max(1972452997, 28847));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_24 = var_6;
                            var_25 *= max(217, 2147483627);
                            var_26 = ((-103 | (-50 < 2147483647)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_27 = (max(((((var_1 | 2147483632) % ((var_2 ? 161 : -2147483641))))), (((!var_6) + (((arr_9 [i_3] [i_3] [i_7]) + var_5))))));
                            var_28 = -2147483628;
                            var_29 = (((((-((-66 ^ (arr_10 [i_2] [i_2])))))) ? -2147483602 : (((2147483588 ^ ((var_6 ? var_10 : var_1)))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_30 = (((((max(var_2, (arr_18 [i_8] [13] [i_8] [i_11 + 1]))) <= (max(22201, -1)))) ? -2147483590 : var_8));
                            var_31 &= ((31457280 ? 8128 : -22189));
                        }
                    }
                }
                var_32 |= ((max(1, 4)));
                var_33 = (arr_2 [i_8]);
            }
        }
    }
    #pragma endscop
}
