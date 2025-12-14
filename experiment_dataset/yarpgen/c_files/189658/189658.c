/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (-32767 - 1);
    var_21 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_22 = ((1 / (max(3, -3))));
                var_23 = (max(var_23, var_0));
                var_24 = var_0;
                var_25 *= ((var_7 ? (((var_10 || (33554431 == -33554445)))) : 18));
            }
        }
    }
    var_26 = var_8;

    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_10 [i_2] [i_2] [i_2] = (var_12 * (!var_10));
            var_27 = (min(var_27, (((var_2 | (!var_16))))));
            arr_11 [6] = var_9;
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_20 [i_2] [i_3] [i_4 - 1] [i_6] [i_6] = var_4;
                            arr_21 [i_6] = (var_0 * var_4);
                        }
                    }
                }
            }
            arr_22 [i_2] &= (0 <= 1);
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_28 = (min(var_28, (!var_2)));
            var_29 = (max(((33554430 * (var_5 / 137438953471))), (((var_19 * (33554442 / var_2))))));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 20;i_10 += 1)
                    {
                        {
                            arr_31 [i_2] [i_7] [i_8] [i_9 - 1] [i_10 + 2] = (min(var_5, ((((min(var_16, var_14))) * -33554441))));
                            var_30 = (max(var_30, var_16));
                        }
                    }
                }
            }
        }
        arr_32 [i_2] [i_2] = (var_14 & 18446743936270598119);
        var_31 = (min(var_31, 33554420));
        arr_33 [i_2] = var_9;
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        arr_37 [i_11] = ((!var_11) == (244 - 0));
        arr_38 [7] [7] = var_11;
    }
    #pragma endscop
}
