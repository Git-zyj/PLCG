/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                arr_14 [i_0] [i_0] [4] [i_0] [1] = -var_5;
                                var_19 = arr_5 [i_0] [i_0] [4];
                            }
                            for (int i_5 = 0; i_5 < 11;i_5 += 1)
                            {
                                arr_17 [i_1] [i_5] = (((((((arr_13 [3] [i_1] [i_1]) ? (arr_1 [i_1]) : var_0))) ? (arr_3 [6] [i_1]) : ((48 ? (arr_10 [i_0]) : (arr_9 [i_0] [i_0] [i_0] [9] [9] [9]))))));
                                arr_18 [1] [i_1] [i_5] [i_3] [i_1] [i_5] [1] = (min((arr_6 [9] [2] [i_2]), (~80)));
                                arr_19 [i_0] [7] [i_5] [5] [i_0] [10] [i_5] = (~(max((((arr_7 [6] [i_2] [i_2]) ? var_11 : (arr_8 [7] [3] [7] [7]))), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            }
                            for (int i_6 = 0; i_6 < 11;i_6 += 1)
                            {
                                var_20 += var_8;
                                arr_23 [6] [1] [i_2] [3] [i_6] [i_6] = var_0;
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 11;i_7 += 1)
                            {
                                var_21 = 47;
                                arr_26 [i_7] = (((((arr_3 [i_0] [i_0]) || (arr_15 [i_7] [i_1] [i_1] [10]))) ? (arr_8 [0] [i_3] [i_1] [i_0]) : (((arr_21 [i_0] [1] [i_0] [i_0] [i_0]) ? (arr_5 [6] [i_1] [5]) : 48))));
                            }
                            arr_27 [i_0] [i_1] [i_2] [i_3] = ((26336 ? ((min(39200, 234))) : -124));
                            arr_28 [i_0] [i_0] [10] [10] = 9223372036854775800;
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_20 [i_0] [9] [i_1] [9] [i_3]);
                        }
                    }
                }
                var_22 += (max((arr_25 [i_0] [9] [i_0]), (((!((max(var_5, (arr_15 [i_1] [i_1] [i_0] [i_1])))))))));
                var_23 = (((64843 ? (min(1, 4891653753026208510)) : 1)) >> (-26336 + 26347));
            }
        }
    }
    var_24 ^= (max(var_12, 1));
    #pragma endscop
}
