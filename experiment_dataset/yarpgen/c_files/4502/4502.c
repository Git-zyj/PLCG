/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((arr_1 [i_0]) ? (-1 != -1) : (arr_0 [i_0]));
        arr_4 [i_0] = ((var_5 ? 9223372036854775807 : -1));
        var_20 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_2] = ((var_2 ? ((0 ? (min(0, var_0)) : ((((arr_8 [i_2]) != (arr_6 [i_2])))))) : (!var_0)));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_21 |= var_5;
                        var_22 = (min(var_22, (((-974289919152746755 ? -1 : -1)))));
                        var_23 += var_8;
                    }
                }
            }
        }
        var_24 -= ((((var_13 ? var_8 : ((1 ? -1 : 28))))) ? (max((min(var_16, var_10)), (((arr_14 [i_1] [i_1]) ? var_14 : (arr_11 [i_1] [i_1] [i_1]))))) : (((arr_13 [13] [i_1] [i_1]) ? 0 : var_3)));
    }
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        var_25 = ((((((var_18 ? var_6 : (-9223372036854775807 - 1))) != (arr_16 [i_5]))) ? var_12 : (((min((arr_12 [i_5] [i_5 - 2] [i_5] [0]), (arr_12 [i_5] [i_5 + 3] [i_5 + 2] [2])))))));
        arr_18 [i_5 - 2] = ((((-(arr_16 [i_5 - 2]))) << (((((max((arr_16 [i_5 + 2]), (arr_16 [i_5 + 2]))) + 1107811170)) - 23))));
    }
    var_26 = (min(var_26, ((min(9223372036854775807, (max((1058446231422423884 + var_17), var_13)))))));
    #pragma endscop
}
