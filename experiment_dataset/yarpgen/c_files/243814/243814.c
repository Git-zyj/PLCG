/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1879048192;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (i_0 % 2 == zero) ? (((((((arr_0 [i_0]) << (var_7 - 119))) >> (((var_0 % var_10) - 14808)))))) : (((((((((arr_0 [i_0]) + 9223372036854775807)) << (var_7 - 119))) >> (((var_0 % var_10) - 14808))))));
        var_13 = var_0;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = (arr_1 [i_1] [i_1]);
                                arr_13 [i_4] [i_4] [i_0] [i_4] [9] = (arr_7 [i_4] [i_4] [i_4]);
                                arr_14 [i_0] = ((((((((arr_4 [i_0]) | 1))) ? (arr_5 [i_3 - 1]) : ((var_7 ? var_2 : (arr_7 [i_0] [i_0] [i_0]))))) & (((~(arr_8 [i_3 - 1] [i_0] [i_0] [i_4]))))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_0] = ((!(((~((var_5 ? var_4 : var_2)))))));
                    var_15 *= (arr_0 [i_2]);
                }
            }
        }
        arr_16 [i_0] [i_0] = (((var_5 << (var_0 - 14808))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_16 = var_9;
            var_17 = arr_10 [1] [i_5] [1];
            arr_19 [i_0] [i_5] = ((var_0 ? ((var_8 << (var_6 - 3608031645))) : (~var_5)));
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = max((arr_18 [2]), (((((var_5 ? (arr_1 [i_6] [i_6]) : var_2))) ? (((max((arr_20 [i_6] [i_6]), 29760)))) : (arr_5 [i_6]))));
        var_18 = var_6;
        var_19 = (arr_7 [i_6] [i_6] [i_6]);
        arr_23 [i_6] [i_6] = var_5;
    }
    var_20 = var_8;
    #pragma endscop
}
