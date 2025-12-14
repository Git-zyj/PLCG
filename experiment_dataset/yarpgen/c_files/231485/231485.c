/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_13 = var_9;
        var_14 = 35728;
        arr_3 [5] = ((((((arr_1 [i_0]) / 17645))) && ((max(((-26989 ? -17646 : var_7)), 11298)))));
        var_15 = (((!209) >= 2764));
        arr_4 [i_0] = max(((var_0 ? var_3 : var_5)), ((((arr_2 [i_0]) >= (arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_16 = (((var_12 ? var_11 : var_3)));
            arr_9 [i_1] = ((var_6 + (arr_8 [i_1] [i_2] [i_1])));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_17 -= (arr_12 [i_6] [i_5] [i_3] [i_3]);
                            var_18 = (arr_5 [i_1]);
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_22 [6] [i_3] [i_1] [i_4 - 1] [0] [i_4] [i_4] = (((((var_1 ? var_11 : -1532932835))) ? (var_11 <= 1503658827) : 797060877));
                            var_19 = (var_1 ? 6024495804938820571 : (arr_1 [i_4]));
                        }
                        for (int i_8 = 2; i_8 < 19;i_8 += 1)
                        {
                            var_20 = (arr_7 [i_4 + 1] [i_8 - 1] [i_8]);
                            var_21 -= ((!(((var_1 ? 1 : 1)))));
                        }
                        var_22 = (min(var_22, ((-(arr_17 [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_1] [i_4 - 1])))));
                    }
                    var_23 = ((2942 >> ((((min(-17646, 17649))) + 17667))));
                }
            }
        }
        arr_26 [19] [i_1] = 210;
    }
    var_24 &= var_4;
    var_25 *= (((var_12 > var_0) ? (max(var_1, -1503658828)) : ((~(~var_4)))));
    var_26 = var_9;
    var_27 ^= var_4;
    #pragma endscop
}
