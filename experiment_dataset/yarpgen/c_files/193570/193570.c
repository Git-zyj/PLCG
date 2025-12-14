/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [7] = min((((2 % var_6) ? ((var_1 ? var_11 : -3)) : (((min((arr_2 [i_0] [i_1]), 2026)))))), (((((((arr_1 [i_1]) ? var_1 : var_1))) ? (((136 ? 113 : var_5))) : (1 - var_10)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                arr_14 [i_3] = 0;
                                var_14 = var_9;
                                var_15 = ((183 ? (((~(arr_4 [i_0] [i_1])))) : (((arr_13 [13] [i_2] [i_3 - 1] [i_3]) * var_12))));
                            }
                            for (int i_5 = 2; i_5 < 15;i_5 += 1)
                            {
                                arr_19 [i_0] [i_1] [i_3] [i_3] [i_5 + 4] = ((+((((arr_9 [5] [i_3] [i_2] [i_3]) >= var_9)))));
                                var_16 = var_3;
                                arr_20 [i_3] [i_1 + 3] [i_1 + 3] [i_1] [i_1 + 1] [i_1] = ((((((!var_0) > var_10))) >= (!1)));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 19;i_6 += 1)
                            {
                                arr_23 [i_3] [i_3] = var_4;
                                arr_24 [i_3] [i_3 - 1] [i_2] [i_1] [i_3] = ((~(((arr_1 [i_0]) & var_6))));
                                var_17 &= (((0 < var_5) < 85));
                            }
                            var_18 *= ((((((((arr_7 [i_1]) * var_7)) + 16))) ? ((-(((arr_11 [i_3] [i_2] [i_1 + 1] [i_0]) ? var_7 : var_2)))) : (arr_22 [i_3 - 1] [i_2] [i_2] [i_2] [i_1] [i_2] [i_0])));
                            arr_25 [i_0] [i_1] [i_1] [i_1] [i_1] [i_3] = 3085672741348905668;
                            arr_26 [i_0] [i_3] [i_2] [i_3] = (i_3 % 2 == zero) ? ((min(((((arr_18 [i_3] [i_1 + 3] [i_3 + 1]) >= (arr_1 [i_1 + 3])))), ((var_0 << (((arr_18 [i_3] [i_1 + 3] [i_3 - 1]) - 15212211373795474765))))))) : ((min(((((arr_18 [i_3] [i_1 + 3] [i_3 + 1]) >= (arr_1 [i_1 + 3])))), ((var_0 << (((((arr_18 [i_3] [i_1 + 3] [i_3 - 1]) - 15212211373795474765)) - 63679674802505162)))))));
                            var_19 = (max(var_19, ((((((((-27 ? (arr_11 [1] [i_2] [i_1] [i_0]) : var_8)) % 1))) ? var_6 : (min(((var_12 ? var_1 : var_0)), (((16556 / (arr_8 [i_0] [i_2] [i_3])))))))))));
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((var_7 & ((27 ? -16557 : var_2))))) ? var_9 : 28);
    var_21 = (((((((-2030103841 ? var_12 : 85))) ? ((var_11 ? var_1 : var_0)) : var_2)) == (((-(0 / var_0))))));
    #pragma endscop
}
