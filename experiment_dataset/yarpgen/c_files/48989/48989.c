/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((min((((max(3471117135566302416, 1)) * var_9)), -96)))));
    var_14 = (1 && 127);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (-3471117135566302425 / var_7);
                    var_15 = 1;
                    arr_9 [i_0] [i_1] [i_0] [i_1] = (min(((min(((min(1, var_8))), -114))), 232));
                    var_16 *= min((min((var_0 % 1), 232)), ((((-91 <= var_12) <= -96))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] = (min(-2015703315885079235, ((max((!96), (-127 - 1))))));
        var_17 = ((var_4 ? (!35) : (((((min(var_7, 127))) < ((113 ? 3471117135566302416 : 232)))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    arr_17 [i_3] |= (!var_3);
                    arr_18 [i_3] [i_3] [i_3] [i_3] = 1;
                    arr_19 [i_3] [i_5] = 108;

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_18 = ((((-13 ? var_6 : var_5)) >> (((min(-114, var_4)) + 117))));
                        arr_22 [i_6] [i_6] [1] = (!var_0);
                        var_19 -= var_1;
                        var_20 = (min(var_20, 55094));
                        var_21 = (min(var_21, var_2));
                    }
                }
            }
        }
        var_22 = 33616;
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
    {
        arr_26 [i_7] = ((-(max((min(var_5, -3679453617310511856)), ((min(-10, var_0)))))));
        arr_27 [i_7] = 218;
        var_23 = -99;
        arr_28 [i_7] = 121;
    }
    #pragma endscop
}
