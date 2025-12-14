/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((~(~0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((!(((-(arr_2 [i_1]))))));
                var_21 *= (-(((!(~15)))));
                arr_7 [i_0] [i_0] = (~0);

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_22 = (min(var_22, (((-(((!(!var_5)))))))));
                    arr_11 [i_0] [i_0] [i_1] [i_2] = (!33544);
                    arr_12 [1] [i_0] [i_0] [i_0] = ((!(~3)));
                }
            }
        }
    }
    var_23 = ((!(~-278484333519777575)));
    var_24 *= (!18446744073709551615);

    /* vectorizable */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        var_25 = ((-(!33528)));
        var_26 = (max(var_26, (((!(arr_9 [6] [4] [i_3 - 1]))))));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 24;i_6 += 1)
            {
                {
                    arr_26 [i_4] [i_4] [i_4] [i_4] = ((-(+-45567)));

                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_27 |= ((!((!(~-278484333519777575)))));
                        arr_29 [i_4] [i_5] [i_4] = 33544;
                        var_28 = (((~((-(arr_21 [23]))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_32 [i_4] [i_5] [i_4] [16] = ((~(!var_3)));
                        var_29 = ((~(!1)));
                    }
                }
            }
        }
        arr_33 [i_4] = (~18446744073709551615);
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        var_30 = (!-var_8);
        var_31 = ((!((!(((-(arr_23 [i_9] [i_9]))))))));
        var_32 = (max(var_32, (~284217583061269190)));
    }
    #pragma endscop
}
