/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_1 / 76) + (var_2 / var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = ((((((-(arr_1 [i_1]))))) ? (var_9 || 66) : var_9));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_15 = ((-(((arr_8 [i_1] [1] [i_1]) ? -12298 : (arr_8 [i_3] [i_3] [i_3])))));
                            var_16 = (((arr_10 [i_0] [i_1] [i_0] [i_1]) + ((((arr_2 [i_2] [i_3]) / (arr_2 [i_1] [i_0]))))));

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = ((!((var_7 || (!0)))));
                                arr_14 [i_0] = 11392;
                                arr_15 [12] [12] [9] [i_3] [i_0] = ((~((0 ? 228 : 83))));
                            }
                            for (int i_5 = 0; i_5 < 23;i_5 += 1)
                            {
                                arr_18 [i_0] [i_1] [i_1] [i_2] [i_5] [i_1] = (max((arr_5 [15] [i_0]), ((-1556768043 ? var_9 : (!var_11)))));
                                arr_19 [i_5] [i_0] [i_2] [i_0] [i_0] = ((((((((-(arr_0 [i_0] [i_0])))) ? (((0 << (var_3 - 48114)))) : ((var_4 ? var_3 : (arr_3 [i_1] [i_3] [i_5])))))) && var_0));
                                var_17 = var_9;
                                var_18 = ((7280676461511987158 > ((min(((var_9 ? 1 : var_0)), ((((arr_8 [i_2] [i_2] [i_0]) ? var_3 : var_10))))))));
                            }
                            var_19 = (((-(((arr_0 [i_0] [i_0]) / (arr_16 [i_3] [i_3] [i_0] [i_2] [i_0] [i_1] [i_0]))))));
                            var_20 -= -var_4;
                        }
                    }
                }
                var_21 = (min(var_21, (((var_11 ? var_6 : (min((arr_10 [i_1] [i_1] [i_1] [i_0]), 32767)))))));
            }
        }
    }
    var_22 = var_11;
    #pragma endscop
}
