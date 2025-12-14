/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (max(var_18, 238));
                var_19 = (-(((min(var_1, var_15)))));
                var_20 = -var_4;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] = ((~(((!(((4082695556 >> (var_15 - 46)))))))));
                            arr_14 [i_0] = (max(((var_0 ? var_14 : var_16), var_13)));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    arr_19 [i_0] [i_0] [i_0] [i_0] = (-(var_16 & var_1));
                    arr_20 [i_4] = var_2;
                    var_21 *= (!24121);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_0] [i_0] = var_7;
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_28 [i_0] = ((var_13 ? var_3 : var_0));
                                var_22 &= (!var_4);
                            }
                        }
                    }
                    var_23 = var_4;

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_24 = var_13;
                        var_25 = (max(var_25, -23));
                        arr_31 [i_0] [i_1] [i_5] [i_5] = 3726815599;
                    }
                    var_26 = (max(var_26, var_16));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_27 = (-1761589310 ? ((var_13 >> (var_5 - 8675))) : (~var_6));
                                arr_38 [i_0] [i_11] [i_0] [i_10] [i_11] = (1099759237 >= 217);
                            }
                        }
                    }
                    arr_39 [i_1] = ((-var_7 ? (var_5 != -32286) : var_15));
                    arr_40 [i_1] [i_1] [i_0] = (~51603811);
                }
                for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                {
                    var_28 = 228;
                    var_29 = ((~(((~126) ? 1498156071 : (var_9 >= -20653)))));
                }
            }
        }
    }
    var_30 = (min(65, ((((min(1, var_2))) | var_11))));
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            {
                var_31 = (((~241) ? (min(((max(1, var_15))), (max(var_10, 92285139)))) : ((~((1 ? 51603818 : 20662))))));
                var_32 *= ((((max((176 | var_17), var_13))) % ((24 ? 3913089635 : 45))));
                arr_51 [i_13] [i_13] = -var_16;
            }
        }
    }
    #pragma endscop
}
