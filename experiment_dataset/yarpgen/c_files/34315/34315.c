/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((~(((((arr_2 [i_0]) ? var_7 : (arr_1 [i_0]))) - 1))));
        arr_4 [i_0] = ((!((max((min(var_7, (arr_1 [i_0]))), -483841964)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_10 *= (((1 - (min((arr_11 [i_0] [i_1] [i_2] [i_3]), var_9)))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] = (min(var_5, -9223372036854775801));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_11 = var_6;
                        var_12 = (min(var_12, var_2));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [6] [6] = (((((-5831483688117912267 ? (arr_17 [i_1] [13] [i_5] [i_6]) : var_5)) >> (((((arr_5 [i_2]) ? (arr_9 [i_1] [i_1]) : 56)) - 1020410842059327004)))));
                                arr_24 [i_0] [i_0] [i_0] [i_2] [i_5] [i_0] [i_6] = var_9;
                            }
                        }
                    }
                }
            }
        }
        var_13 = (((max(var_7, (arr_2 [i_0]))) <= (max(47454, (arr_2 [i_0])))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        arr_27 [i_7] [i_7] = (var_4 * 4029750117);
        arr_28 [i_7] = (((((1 ? var_1 : 65321))) ? ((var_3 ? var_7 : var_7)) : var_7));
    }
    var_14 = ((((((var_1 ? var_5 : var_2)))) ? 3401904154 : var_2));
    #pragma endscop
}
