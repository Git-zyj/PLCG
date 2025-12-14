/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (max(1, 118));
        var_17 = ((-(max((arr_0 [i_0 + 1]), var_2))));
        var_18 = (max(((7 ? (var_3 ^ var_14) : var_10)), ((max(var_16, var_13)))));
        var_19 = (min(1, var_6));

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_20 -= var_4;
            var_21 = (max(var_21, (arr_5 [i_0 + 1] [i_0 + 1])));
        }
    }
    for (int i_2 = 3; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_22 = ((!((max(var_10, (arr_1 [i_2 - 1]))))));
        var_23 = 1;
        var_24 = (min(var_24, ((max(var_11, (((!(arr_1 [i_2])))))))));
    }
    for (int i_3 = 3; i_3 < 15;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_3] = ((1 ? var_2 : (((var_3 >= (arr_0 [i_3 - 3]))))));
                    var_25 = -1;
                    arr_18 [i_3] [i_3] [i_3] [i_3] = 1;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_26 = (((arr_5 [i_3] [7]) ? (max((arr_20 [i_3] [i_3 - 2] [i_3 - 3] [i_3] [i_3 + 1] [i_3]), var_2)) : (((1 ? var_0 : (arr_16 [i_3 + 1] [i_3 + 1]))))));
                                var_27 = var_12;
                            }
                        }
                    }
                }
            }
        }
        var_28 += var_1;
    }
    for (int i_8 = 3; i_8 < 15;i_8 += 1) /* same iter space */
    {
        arr_29 [i_8 - 2] [i_8] = (((((1 ^ (max((arr_4 [i_8 - 3] [i_8 - 3] [i_8]), 2066575163))))) ? var_15 : (max((max((arr_25 [i_8] [i_8] [0] [15]), var_4)), 1))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                {
                    arr_36 [i_8] [i_9] = var_12;
                    arr_37 [1] [1] [1] [i_8] = (max((((~var_0) ? var_13 : var_2)), 10101490273796258939));
                    var_29 = (min(var_29, (arr_9 [i_8])));
                    var_30 = (min(var_30, -0));
                    var_31 |= ((((var_16 ? (((!(arr_1 [i_8])))) : (((2066575148 != (arr_22 [i_8 - 2] [i_9] [i_10]))))))) || ((var_13 && ((((arr_2 [i_10]) | 0))))));
                }
            }
        }
    }
    var_32 = -331272042;
    #pragma endscop
}
