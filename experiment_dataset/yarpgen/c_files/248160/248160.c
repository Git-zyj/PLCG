/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [9] [i_2] [i_0] [i_4 - 1] [i_4] = var_5;
                                arr_12 [i_1] [i_1] [i_4 + 2] [i_3] [i_1] = (min(((-var_9 ? (!-1) : ((min(106, 166))))), var_1));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_0] = -65;
                    arr_14 [13] [i_1] [i_1] [13] = 2117716295;
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {
                    arr_18 [i_5] [i_0] = ((var_3 * (max(((var_9 ? var_8 : var_3)), (((var_1 ? 65 : var_2)))))));
                    arr_19 [15] [i_0] [i_1] [11] &= (((var_10 - ((20248 ? var_7 : var_9)))));
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                {
                    arr_23 [i_0] [14] = var_0;
                    arr_24 [i_0] [i_0 - 1] = var_5;
                    arr_25 [18] [18] = ((18220274498385939454 ? 405219270 : 77));
                    arr_26 [i_0] [i_1] [i_6] [19] = (var_9 ? ((((min(var_9, var_7)) >= ((min(var_6, (arr_20 [i_0] [i_0]))))))) : ((((65513 ? 6101232472102268325 : 2380191801)))));
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        {
                            arr_31 [i_8] = ((((arr_17 [i_0 - 1] [21] [i_0 + 1]) | -43)));
                            arr_32 [12] = (((((((((arr_22 [16] [16] [13]) ? var_3 : var_8))) ? (max(-50, var_8)) : (((var_4 ? var_3 : 660206118)))))) ? -var_4 : (((((arr_4 [i_0 - 1] [i_0 + 1] [i_8 + 1]) + 9223372036854775807)) >> (var_2 + 25159)))));

                            for (int i_9 = 0; i_9 < 25;i_9 += 1)
                            {
                                arr_36 [i_8] [i_1] = 46461;
                                arr_37 [i_8] [i_8] [11] = -var_8;
                                arr_38 [i_9] [i_8] [9] [i_8] [i_0] = 25469;
                                arr_39 [i_0] [i_0] [i_0] [i_1] [i_7] [i_8] [i_8] = 25461;
                            }
                            for (int i_10 = 0; i_10 < 25;i_10 += 1)
                            {
                                arr_42 [i_0] [i_8] [i_1] [i_7] [i_8] [i_8] [i_10] = ((var_10 ? var_7 : (((((var_9 ? var_3 : var_8)))))));
                                arr_43 [i_0] [i_0] [i_7] [i_8] [i_10] = var_2;
                                arr_44 [12] [i_10] [i_10] [i_10] [12] [12] = ((((min((arr_21 [i_0] [i_8 - 1] [i_0 + 1]), (~var_5)))) ? 8540534704430680805 : -6206808078026300974));
                                arr_45 [i_10] [i_8] [i_10] &= (((((1271446853 ? (min(var_11, var_4)) : (var_1 && var_5)))) ? var_7 : (((var_7 ? ((-1587933289 ? var_0 : var_6)) : var_10)))));
                            }
                            arr_46 [16] [i_1] [i_1] [i_1] = (-((1054891899 | ((var_11 ? var_2 : 7944)))));
                            arr_47 [i_0] [i_0] [i_1] [i_8] [8] [i_8] = ((~((11783 ? (arr_9 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1]) : -25063))));
                        }
                    }
                }
            }
        }
    }
    var_12 = var_5;
    #pragma endscop
}
