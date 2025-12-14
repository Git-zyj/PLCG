/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((max(var_1, var_10))) | (((((var_2 << (var_1 + 140)))) ? var_10 : (((var_8 ? var_2 : var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_12 += (((((((40 ? var_2 : var_4))) ? ((var_9 ? var_8 : var_4)) : (~var_9))) * ((((((min(var_7, var_9))) < ((var_1 ? var_3 : var_3))))))));
                            arr_12 [i_3] [i_0] [i_1] [i_1] [i_0] [i_3] |= (min(((((var_7 + 2147483647) << (var_10 - 15371646792660180342)))), ((~(0 & 136339441844224)))));

                            /* vectorizable */
                            for (int i_4 = 4; i_4 < 10;i_4 += 1)
                            {
                                var_13 = (min(var_13, ((((((var_3 ? var_6 : -5438679435617091858))) % var_10)))));
                                var_14 = ((((var_10 ? 32 : var_4)) + (var_6 - var_6)));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                var_15 = (max(var_15, ((((((var_4 ? var_10 : var_4))) ? var_7 : -var_8)))));
                                arr_18 [i_5] [i_5] [i_5] [i_5] [i_5] [i_2] [i_5] = var_6;
                                var_16 = (var_10 < var_4);
                            }
                            /* vectorizable */
                            for (int i_6 = 1; i_6 < 10;i_6 += 1)
                            {
                                arr_22 [i_0] [i_2] = var_1;
                                var_17 = (min(var_17, (((51 ? 0 : (1291387753628400995 && 1880700720710771059))))));
                                var_18 = ((var_7 ? var_3 : var_9));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 12;i_7 += 1)
                            {
                                arr_27 [i_2] [i_2] [i_2] [i_3] [i_7] [i_0] = (((11615022720732443290 & 48) ? (((1 ? 159 : 96))) : var_5));
                                var_19 = var_0;
                                arr_28 [i_0] [i_2] [i_3] [i_7] = (((((1 ? 1 : var_1))) ? (var_6 | var_5) : -5438679435617091861));
                            }
                            arr_29 [i_2] [i_1] [i_2] [i_3] = (min((max((var_2 ^ var_3), (~-5438679435617091858))), ((max((var_5 * var_0), (~115))))));
                        }
                    }
                }
                var_20 = (min(var_0, ((-5438679435617091860 ? (((1047552 ? 30720 : var_9))) : (min(247, var_4))))));
            }
        }
    }
    #pragma endscop
}
