/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    var_21 = var_1;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((-var_9 <= ((min(8657, var_14)))));
        arr_3 [i_0] = 1;
        var_22 = (~(!var_16));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((((max(0, 1462276756926744267))) ? (((0 ? 78265208 : 237))) : ((var_11 ? 1 : 1461293033838559498))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_14 [i_1] [i_3] = (~-var_5);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_19 [6] [i_2] [i_2] [i_2] [i_1] = ((var_11 ? ((-1 ? (max(var_19, var_7)) : (0 * 175))) : (var_0 * -var_13)));
                                var_23 = (max(var_23, 28621973));
                                arr_20 [i_1] [i_4] [i_1] [i_4] [i_5] [i_1 + 2] [i_3] = ((((((5274217304653409785 ? var_15 : 0)) + 2147483647)) >> (((((((1899148097 ? var_1 : 2147483633))) ? -87526416 : var_4)) + 87526419))));
                                arr_21 [i_1] [i_3] [i_1] = ((-1379431505 ? 4045031407 : -1881624404));
                            }
                        }
                    }
                    arr_22 [2] [i_2] [i_2] [i_1] = (((1831157678 ^ 4192492818) ? (~var_6) : (!var_3)));
                }
            }
        }
    }
    var_24 = ((-(!var_8)));
    #pragma endscop
}
