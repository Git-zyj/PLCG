/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [19] [19] = (((~64) & (max(60, 1525207512))));
        var_20 = (max(var_20, ((((((9223372036854775807 || 1778662344) / var_7)) * ((((2983211425 / 1) == 3343449645))))))));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_21 &= (((var_11 || var_1) + (!var_17)));
                            var_22 &= (72057593769492480 / 9208860022789268191);
                            var_23 = var_12;
                        }
                        arr_17 [i_1] [i_2] [i_3] [i_3] = ((2083030946880733058 << var_0) >= (390000138 % 144));
                        arr_18 [i_3] [i_3] [i_3] = 4453578364039858364;
                        arr_19 [i_1] [i_3] [i_1] [i_4] = 951517645;
                        arr_20 [i_3] [i_3] [6] [i_3] = (((3610949393 + (-127 - 1))) / (62801 >= 1));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_24 = (max(var_24, var_6));
                                var_25 = (min((((var_4 == (var_16 % 1)))), (((28672 - 9208860022789268191) - ((min(148, 1843466953)))))));
                            }
                        }
                    }
                    arr_35 [i_1] [i_1] [i_7] = 3110352535;
                    arr_36 [i_1] [i_6] [i_7] [i_7 - 1] |= 28672;

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_26 -= var_16;
                        var_27 = (max(var_27, (1 != 0)));
                        var_28 = var_3;
                    }
                }
            }
        }
    }
    var_29 = ((var_11 >= (var_6 & var_16)));
    #pragma endscop
}
