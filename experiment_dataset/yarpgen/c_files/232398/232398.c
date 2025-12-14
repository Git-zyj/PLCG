/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_4 & ((((((max(var_7, var_4))) && 4872298970925391534)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [2] [i_0] [i_0] = ((-5659179086204324980 & (arr_4 [i_0] [i_1] [i_1 - 4] [i_0])));
                    arr_8 [i_1] [11] = (arr_5 [9] [i_0 + 1]);
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    var_12 = (max(var_12, (min(-8059757223158790164, (((max(-3021619273683665647, -9223372036854775801)) * (((arr_3 [i_3] [5] [i_3]) / (arr_6 [i_3] [i_1])))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_13 = (((!-1147154620347756965) & (((!((min((arr_4 [i_5] [i_1] [i_3] [i_5]), var_6))))))));
                                arr_19 [i_0] [i_0] [14] [i_4] [i_0] = ((min((arr_14 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_4 - 3] [14]), (arr_13 [i_1 - 2] [i_1 - 3] [i_3] [i_4 - 2] [3]))) / (min(((var_1 ? var_4 : -8149637446323232166)), (var_8 % var_7))));
                            }
                        }
                    }
                    arr_20 [i_1] = ((var_1 <= (min(8149637446323232166, ((var_7 ? (arr_4 [i_0] [i_1 - 4] [i_3] [i_3]) : (arr_3 [i_0] [i_0] [i_3])))))));
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                {
                    var_14 = (((((~8149637446323232185) - var_1))) ? (((arr_22 [i_0] [i_0 - 1] [10]) ? (((arr_3 [i_0] [i_1 - 4] [i_6]) ? var_6 : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_2 > var_5))) : var_0);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_15 = -7018768002929703284;
                                var_16 = (max(var_16, (arr_21 [i_0] [i_0] [2])));
                                arr_30 [i_0] [i_0] [i_0] [i_6] [i_6] [i_8] [i_8] = var_5;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                {
                    var_17 = (min(var_17, ((~(-6554434230587523949 / var_3)))));
                    arr_33 [i_9] [i_9] = ((-666969364093337955 + 9223372036854775807) << (((((arr_3 [i_0] [i_0] [12]) + 2130428624590410035)) - 39)));
                }
                var_18 = (min(var_18, (arr_23 [i_0] [10])));
                var_19 ^= ((7456976600615060418 ? ((((var_9 < (arr_12 [i_0] [i_0] [i_1] [i_1 - 4]))))) : ((var_5 ? -1205749342017151325 : var_10))));
            }
        }
    }
    #pragma endscop
}
