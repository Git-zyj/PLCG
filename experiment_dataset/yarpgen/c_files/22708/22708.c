/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_5, ((((((-1847308354 ? 24 : var_8))) ? (10907037874285609541 || -916266610) : ((min(44, 14))))))));
    var_12 |= 916266610;
    var_13 = (min(var_13, ((max(var_10, (max(var_0, var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_14 -= (((var_8 + ((var_10 ? var_6 : 916266599)))));
                var_15 *= max(((max(var_1, (1 >> 1)))), ((var_6 ? (((1278653018921097826 ? 2461856923 : var_4))) : 17117996233668172423)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_16 ^= 0;
                            var_17 = (((((!var_10) ? (min(1278653018921097826, (arr_9 [i_4]))) : 1278653018921097826)) % ((((6839610075139882603 >> (1328747840041379192 - 1328747840041379187))) + var_1))));
                        }
                    }
                }
                arr_18 [i_2 + 2] [i_2] [i_3] = (min((!0), (((!12976147492418196456) % (!0)))));
                var_18 = (max(var_18, (arr_9 [i_3])));

                /* vectorizable */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_19 = var_8;
                                var_20 ^= 0;
                                var_21 = (max(var_21, (var_9 * var_0)));
                                var_22 = ((3370044081 ? var_2 : var_9));
                            }
                        }
                    }
                    var_23 = (!var_1);
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_24 |= var_8;
                    var_25 = (min(var_25, (((((((((var_9 ? (arr_8 [i_2] [i_3]) : var_9))) ? (min(17168091054788453790, 7)) : var_1))) ? 22 : (min(1, 17168091054788453799)))))));
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_26 = ((((((arr_22 [i_10 + 1] [i_11] [i_11] [i_11]) + 84))) + var_5));
                                var_27 -= (max((((var_2 ? -var_10 : 1278653018921097804))), ((-(var_4 * 2607303577640773366)))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        arr_40 [i_12] [i_12] = (1 ? (arr_31 [i_2] [i_2] [i_2 - 1] [19] [i_2] [i_2 - 4]) : ((0 ? 0 : 11)));
                        arr_41 [i_2 - 4] [i_12] [i_9] [i_9] = var_1;
                    }
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        arr_44 [14] [i_9] [i_9] [16] = (min(var_2, (((16 ? 152245086 : -96)))));
                        arr_45 [i_13] [i_9] [i_2] [4] [i_2 + 1] [i_2] = (((((198 ? var_1 : (!1)))) && (((0 + ((0 ? var_3 : 16)))))));
                        var_28 += ((!((min(((var_8 ? var_1 : var_8)), (51 & var_6))))));
                    }
                }
                var_29 = 1328747840041379192;
            }
        }
    }
    #pragma endscop
}
