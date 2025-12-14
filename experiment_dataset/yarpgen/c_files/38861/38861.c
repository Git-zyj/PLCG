/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 = 0;
        arr_3 [i_0] = ((((1175583445 ? var_1 : var_8)) ^ (arr_2 [i_0])));
        arr_4 [i_0] = ((!var_2) <= ((881789433 ? var_3 : var_8)));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_7 [i_0] [5] = ((var_6 & (arr_1 [i_1 + 1] [i_0])));
            arr_8 [8] |= 0;
            arr_9 [i_0] [i_0] = ((-(arr_5 [1] [i_1] [i_1 - 1])));
            arr_10 [i_0] [i_0] = (!var_4);
        }
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        var_12 = ((1 & (((1 & 4294967276) & 29))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_13 = (min(var_13, (((((min((var_7 && var_10), var_0))) ? ((max(((var_4 & (arr_12 [i_2] [i_2 - 1]))), (var_7 / 1)))) : ((max(57457, (arr_11 [i_2] [i_4])))))))));
                    arr_20 [5] [5] [i_2] = ((!((((var_2 == var_4) + var_0)))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_14 += var_8;
                                arr_26 [i_2] [i_2] [i_3] [i_2] [i_4] [9] [i_6] = (((max(29241, var_2))) - var_9);
                            }
                        }
                    }
                }
            }
        }
        arr_27 [i_2] = (max(33391, -51));
        var_15 = (((var_8 % var_1) & var_1));
    }
    var_16 -= 2147483647;
    var_17 = (min(0, (!1)));
    #pragma endscop
}
