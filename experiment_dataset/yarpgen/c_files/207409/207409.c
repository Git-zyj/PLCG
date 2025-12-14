/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = min((min(var_10, 9223372036854775807)), (34359738367 <= var_2));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 ^= (min((5 | 536870656), (min(536870653, 128))));
            arr_5 [i_0] [i_0] = var_9;
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_18 = (max(var_18, (!112)));
            var_19 = (max(var_19, ((-(min(2, ((1 % (-9223372036854775807 - 1)))))))));
            var_20 = (-9223372036854775807 - 1);
            var_21 = (((((((-127 - 1) - var_14)))) ? (((min(var_10, 9223372036854775795)))) : (min(((-9223372036854775791 ? 14 : 248)), var_6))));
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_22 = var_11;
                        arr_18 [i_6] [i_5] [i_4 + 1] = ((((min(var_11, (var_9 + var_7)))) - (((((-127 - 1) | var_3)) % var_7))));
                    }
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        var_23 = 4913234390096497163;
                        var_24 = (min(144097595889811456, (!16775168)));
                    }
                    var_25 = -126;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 22;i_9 += 1)
                        {
                            {
                                arr_28 [i_3] [i_9] [i_5] [i_8] [i_9] = ((min((var_10 % var_5), ((min(var_15, var_1))))));
                                arr_29 [i_8] = (((125 ? 31 : 1803876829038331338)) % ((((((var_9 ? var_5 : -9223372036854775802))) ? var_9 : 2147483642))));
                                var_26 = (max(var_26, ((min((min(((((-536870645 + 2147483647) >> (var_8 + 16061)))), ((9223372036854775790 ? -4271978962807461248 : var_12)))), (((((min(1, 115))) ^ ((118 ? 536870654 : 0))))))))));
                                arr_30 [i_4] [i_4] = ((var_8 ^ ((1 ? var_4 : 6))));
                                var_27 = (max(var_27, 0));
                            }
                        }
                    }
                }
                for (int i_10 = 1; i_10 < 20;i_10 += 1)
                {
                    var_28 = var_8;
                    arr_35 [i_10] = ((var_11 || ((((-44 % var_7) / (((-9223372036854775807 - 1) ? 21 : 120)))))));
                    arr_36 [i_10] = ((var_5 ? ((min(var_3, var_10))) : (94 % 9223372036854775807)));
                }
                var_29 = (max(var_29, var_8));
                var_30 = ((min(var_7, var_5)));
            }
        }
    }
    #pragma endscop
}
