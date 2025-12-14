/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = ((((((478933675 ? var_4 : 65535)) | (596543967 && -478933674))) >> (((min((min(var_5, var_10)), 13575)) - 13522))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_15 = (max(var_15, ((min(126, 51334)))));

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            arr_13 [i_0] [12] [i_2] [1] [12] = 125;
                            var_16 = (min(var_16, (arr_4 [i_4] [i_3] [i_0])));
                            var_17 = (((max(((var_1 ? (arr_7 [i_0] [5] [14]) : -119)), ((-1108402213 ? (-127 - 1) : var_1)))) != (680328398 >= 4)));
                            var_18 |= (((((!46028) * ((-(arr_11 [i_2] [17]))))) >> ((-((var_5 ? -1 : 128))))));
                            arr_14 [i_0] [5] [i_0] [8] [i_0] [i_0] = -6;
                        }
                        for (int i_5 = 4; i_5 < 16;i_5 += 1)
                        {
                            var_19 = var_0;
                            arr_19 [i_0] [i_0] [i_0] [i_5] [i_0] = (max(-9223372036854775806, ((((max((arr_4 [9] [i_1] [i_1]), var_7))) ? var_2 : var_7))));
                            arr_20 [i_2] |= ((((max(var_3, var_11)))));
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_20 = (((-679688926815518524 ^ var_4) ? var_3 : ((-(arr_22 [i_6 - 1] [i_6 - 1] [i_6] [i_6] [i_6 - 1])))));
                            var_21 *= ((-9223372036854775784 * (!12537094841857635933)));
                        }
                        for (int i_7 = 2; i_7 < 17;i_7 += 1)
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_7] [i_3] [i_0] [12] = 15;
                            arr_28 [i_7] [13] [i_7] = (((min((var_4 || var_1), (min(var_2, 478933701))))) ? (max(14213, (max((arr_9 [i_1] [2] [i_1] [i_1] [i_1] [4]), -9223372036854775806)))) : (!243));
                            arr_29 [i_0] [i_1] [i_2] [i_2] [i_0] [i_3] [8] |= ((-((+(((arr_18 [i_0] [i_1] [10] [i_3] [i_0]) ? var_9 : (arr_24 [i_1] [i_1] [i_2] [i_1] [i_1])))))));
                        }
                        arr_30 [i_0] [i_0] [i_3] = 9223372036854775803;
                        var_22 |= ((-((-(arr_10 [15] [i_1])))));
                        var_23 *= (((~11645) && 4294967282));
                    }
                }
            }
        }
    }
    #pragma endscop
}
