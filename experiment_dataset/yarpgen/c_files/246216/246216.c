/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_15 ? ((max(((var_5 ? var_15 : var_10)), (var_3 == var_11)))) : (((var_4 ^ var_13) ? (min(var_2, var_1)) : (((var_14 << (var_16 - 2218681943))))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_18 = (min(var_18, (((((var_10 ? var_1 : var_4)) | (var_15 == var_12))))));
        var_19 = var_4;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = var_9;
        arr_6 [i_1] = min((((((-2147483647 - 1) == (-2147483647 - 1))) ? ((var_14 ? var_10 : var_6)) : (var_14 | var_14))), ((((var_7 * var_9) / (var_11 * var_10)))));
        arr_7 [i_1] = ((((var_12 & var_1) | (min(var_13, var_11)))) * (62 & -72));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_16 [i_2] [i_2] = ((((min(((min(var_8, var_11))), ((var_4 ? var_12 : var_9))))) * (min(((var_3 ? var_6 : var_1)), (((var_1 ? var_8 : var_0)))))));
                    arr_17 [i_2] [i_3] [i_2] = ((((((var_6 == (((var_13 ? var_14 : var_10))))))) <= (min((var_16 * var_16), ((max(var_11, var_0)))))));
                    arr_18 [i_2] [i_2] [i_2] [i_4] = (((((((var_2 ? var_10 : var_6)) >> (((max(var_13, var_11)) - 645865272))))) ? (((((var_13 ? var_14 : var_3))) ? (var_7 - var_15) : (var_0 * var_6))) : (((((var_9 ? var_15 : var_15))) * ((var_8 ? var_6 : var_16))))));
                }
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    var_20 = (min(var_20, (((var_13 && ((min(((min(var_15, var_15))), (max(var_13, var_5))))))))));
                    var_21 &= ((((((var_14 > var_4) * ((var_16 ? var_9 : var_10))))) ? ((((var_16 * var_10) ^ (((max(var_9, var_8))))))) : ((((14961199389958777971 ? 2619193805037958808 : -69)) * (((max(var_12, var_11))))))));
                }
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_22 = (max((((((var_10 ? var_2 : var_4))) ? var_1 : (min(var_1, var_3)))), ((min(((max(var_10, var_0))), (var_14 * var_10))))));
                                var_23 = ((var_10 ? (((var_9 && var_10) ? (min(var_6, var_5)) : ((min(var_5, var_14))))) : ((((var_0 & var_9) << (((min(var_13, var_0)) - 21683)))))));
                                arr_30 [i_2] [i_2] [i_2] [i_2] [12] [i_2] = ((((((var_10 ? var_1 : var_10)) << (((var_8 ^ var_6) - 9241394954494945952))))) ? var_0 : (((var_11 ^ var_12) ? (((var_3 ? var_14 : var_13))) : ((var_4 ? var_4 : var_2)))));
                                arr_31 [i_8] [i_2] [i_2] [i_2] [i_2] = (min((max(((max(var_9, var_8))), (min(var_7, var_16)))), (max(((var_15 ? var_10 : var_13)), ((max(var_3, var_4)))))));
                                arr_32 [i_2] [i_3] [i_6] [i_7] [i_8] = ((((((var_1 ? var_16 : var_2)) >= ((0 ? 869324471100870427 : 2144173635)))) ? (((min(var_3, var_13)) | ((var_4 ? var_1 : var_5)))) : (max(((var_16 ? var_1 : var_9)), (var_16 * var_5)))));
                            }
                        }
                    }

                    for (int i_9 = 3; i_9 < 12;i_9 += 1)
                    {
                        var_24 = var_8;
                        var_25 -= (((((((min(var_2, var_2))) ? ((var_9 ? var_11 : var_9)) : var_5))) ? (min((var_11 - var_8), var_15)) : ((((var_2 & var_9) == (((var_14 ? var_12 : var_7))))))));
                    }
                    var_26 = (min(((max(116, -58))), (((var_13 % var_2) ? (0 ^ 20268) : ((min(var_15, var_10)))))));
                }
                var_27 = (min(var_27, (((((132120576 ? 0 : 139)) <= ((((var_15 ? var_8 : var_5)) - (var_7 != var_12))))))));
                arr_36 [i_2] [i_2] = ((((max(var_12, var_2)) + (var_4 < var_0))) >> (min((var_1 >= var_7), ((var_13 ? var_0 : var_7)))));
            }
        }
    }
    var_28 = (min((min((min(0, 15294591288231255748)), -13273)), ((((var_1 == var_15) ? ((var_14 ? var_4 : var_1)) : (((var_7 ? var_12 : var_8))))))));
    #pragma endscop
}
