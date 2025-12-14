/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 4294967295;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [1] [i_1] = 0;
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] = (var_0 / 16080828549607078472);
                                arr_15 [i_4] [i_1] [15] [i_0] [i_1] [i_1] [i_0] = var_12;
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((((((arr_2 [13] [i_0]) ^ 2838198420))) ? (var_11 < var_7) : -24564));
                                var_20 = (!var_14);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_21 = (max(var_21, (((37 || (((1 ? 24577 : var_17))))))));
                        var_22 = (min(var_22, 2838198420));
                    }
                    var_23 = (!var_7);
                    var_24 ^= (arr_3 [i_0]);
                }
            }
        }
        arr_20 [i_0] = ((62 ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) : 4095));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_23 [i_6] [i_6] = (arr_6 [i_6] [i_6] [i_6] [i_6]);
        arr_24 [3] = (min((min((((arr_19 [15] [23] [i_6] [i_6] [i_6]) * 75)), (((-24550 ? 1 : 0))))), ((((24559 ? (arr_8 [i_6] [i_6] [i_6]) : 2786639249))))));
    }
    #pragma endscop
}
