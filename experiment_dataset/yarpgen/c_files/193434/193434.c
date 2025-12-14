/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_3;

        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_17 = var_4;
                        var_18 = (min(var_18, -var_5));
                        var_19 = var_4;
                    }
                }
            }
            arr_9 [i_0] [i_1] [9] = var_3;
            arr_10 [i_1] = var_8;
            arr_11 [i_1] = (!var_8);
        }
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            arr_16 [i_0] [i_0] [10] = var_1;
            var_20 = ((-(var_14 + var_13)));
            var_21 = -var_0;
            arr_17 [i_4] = var_5;
        }
    }
    for (int i_5 = 3; i_5 < 18;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    var_22 = -var_14;
                    arr_28 [i_5] = var_8;
                    var_23 = var_1;
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_24 = (min(var_24, ((max(var_9, var_12)))));
                                var_25 = (min(var_25, (((-(min(var_0, -var_5)))))));
                                arr_35 [i_5] [i_6] [i_7] [i_8] [i_9] |= (!var_8);
                            }
                        }
                    }
                    arr_36 [i_5] [i_5 - 3] [i_6 - 1] [i_5] = -var_0;
                }
            }
        }
        arr_37 [i_5] = -var_6;
        arr_38 [i_5] = var_3;
        arr_39 [i_5] [i_5] = ((!((min(var_14, var_16)))));
        var_26 = (~(~var_5));
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        var_27 = -var_14;
        var_28 = ((!(!var_0)));
    }
    var_29 -= ((-(-var_16 | var_14)));
    #pragma endscop
}
