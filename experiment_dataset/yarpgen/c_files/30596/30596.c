/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_16 = (((var_9 >= var_6) * ((var_5 >> (var_2 - 9487153140703704397)))));
        arr_2 [8] = (1883946853 / 721867);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (var_6 ? ((var_6 ? var_6 : var_10)) : var_3);
        arr_6 [i_1] [i_1] = (var_10 + var_7);
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_9 [i_2] = (((var_8 >> (var_2 - 9487153140703704404))) | (var_8 % var_1));
        arr_10 [i_2] = ((((min(var_0, var_1))) - (((var_12 * var_2) ? (var_6 & var_11) : var_12))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_17 = ((var_7 < ((var_14 ? var_11 : var_9))));

                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            var_18 = (563010980 != -59105836);
                            arr_20 [i_6 + 1] [i_5] [i_4] [i_3] [i_2] [i_2] = (((var_5 ? var_5 : var_7)) << (var_12 % var_9));
                            var_19 -= (((((var_1 >= (var_5 * var_1)))) > ((((var_3 == var_13) >= var_10)))));
                            var_20 ^= ((((((var_2 * var_12) / var_2))) ? (((235 > -352460583) & (max(var_13, var_10)))) : ((((((min(var_4, var_14))) < (min(var_11, var_0))))))));
                            arr_21 [i_2] [i_3] [i_2] [i_5] [i_2] [0] [i_3] = ((((((255 + -1980618879) > (min(var_5, var_2))))) > ((((var_2 & var_10) == var_5)))));
                        }
                        arr_22 [i_2] [i_3] [i_3] [i_3] = ((var_0 != (var_6 - 2780020863)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
