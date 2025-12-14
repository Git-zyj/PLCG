/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    var_16 = (((~-25229) ? var_1 : var_2));
    var_17 = ((((max((~0), ((max(32761, var_0)))))) | var_11));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_18 = (max((max((var_3 & var_13), var_14)), (max((min(var_10, var_13)), (25118 | 184)))));
        var_19 = (max(var_19, -32748));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_15 [i_1] [i_2] [i_3] [i_2] |= (((--14) ? (--124) : ((var_0 - ((max(-18453, var_10)))))));
                            var_20 = -14249;
                            arr_16 [6] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((var_14 ? ((min(var_7, var_12))) : -32755)) << ((((max(3736, var_5))) - 3715))));
                        }
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_3 + 1] = min(((-29329 ? var_9 : -var_9)), 30);
                        var_21 -= (min(-var_8, (((min(var_12, var_10))))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {
        var_22 -= var_14;
        var_23 = (max(((~(var_5 | 4572))), ((max(-9, 125)))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_24 = max(((var_10 % ((max(-32755, var_7))))), (var_12 || var_13));
                    arr_25 [i_6] [i_6] [i_7] [i_6] |= var_14;
                }
            }
        }
        var_25 = (max(-29318, (max(32767, 93))));
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
    {
        arr_29 [i_8] &= (max((min((max(var_7, var_11)), var_12)), (((-var_14 ? var_1 : -192)))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    {
                        var_26 = ((29329 && (((27825 ? var_11 : var_6)))));

                        /* vectorizable */
                        for (int i_12 = 3; i_12 < 8;i_12 += 1)
                        {
                            arr_43 [i_8] [i_9] [i_10] [i_11] [i_12] = ((-94 ? var_4 : ((var_0 << (var_10 - 153)))));
                            arr_44 [i_8] [i_12] = ((-95 ? 29304 : var_0));
                            var_27 = (max(var_27, var_6));
                        }
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            arr_49 [2] [4] [i_10] [i_8] [i_8] = var_12;
                            arr_50 [i_8] [i_9] [i_10] [i_11] [i_13] = (min(53, ((10177 ? -104 : 112))));
                            var_28 = (max(var_28, (((var_11 % (var_7 / var_6))))));
                        }
                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            arr_53 [i_8] [i_8] [i_8] [i_14] = (-10771 ? (((var_9 * (var_5 / -32725)))) : var_2);
                            var_29 ^= max((min(var_7, var_12)), var_7);
                            arr_54 [i_8] [i_8] [i_9] = var_5;
                            arr_55 [i_8] [i_8] [i_8] [i_10] [i_10] [i_11] [i_14] = var_10;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
