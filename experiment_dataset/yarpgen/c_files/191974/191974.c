/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_1] = ((var_13 ? (var_11 < var_5) : var_8));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_15 [i_1] = (((var_13 & var_3) ? (((var_3 ? var_10 : var_6))) : var_11));
                            arr_16 [i_0] [i_1] [i_4] [i_3] [2] = (((var_2 ? ((var_5 ? var_8 : var_14)) : var_14)));
                        }
                        for (int i_5 = 1; i_5 < 24;i_5 += 1)
                        {
                            arr_20 [i_0] [i_1] = var_9;
                            arr_21 [i_0] [i_0] [i_2] [i_2] [i_2] = ((5452440633535815014 ? 13786 : -12090));
                        }
                        for (int i_6 = 3; i_6 < 22;i_6 += 1)
                        {
                            arr_25 [1] [1] [i_1] [i_2] [1] [i_3] [i_6 - 1] = (((((var_14 ? var_3 : var_8))) ? ((553572831 ? 268304384 : 2612342426558079303)) : (var_12 * var_10)));
                            arr_26 [0] [0] [i_0] [i_0] [14] = (((var_10 | var_14) ? var_3 : var_9));
                            arr_27 [i_1] [i_1 + 1] [i_1 + 1] [i_3] [i_1] = (((((var_4 ? var_3 : ((var_14 ? var_3 : var_9))))) ? ((-1167379866 ? 59897 : -1167379866)) : ((-1 ? 0 : 5639))));
                            arr_28 [i_0] [i_1] [i_2] [i_1] [i_6] = (((var_11 / var_11) <= -1868));
                            arr_29 [i_0] [i_1] [i_0] [i_0] [i_1 + 2] = ((-1 ? ((((var_12 < (var_4 && var_1))))) : ((var_12 ? var_10 : var_3))));
                        }
                        arr_30 [i_0] [i_0] [i_2] &= ((var_4 || var_10) / ((1023 & ((11 ? -75 : 288229276640083968)))));
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                    {
                        arr_33 [i_0] [i_0] [i_2] [i_7] = (((((((0 ? 1612979244 : 103))))) % (((((var_14 ? var_7 : var_0))) ? var_7 : var_11))));
                        arr_34 [i_0] = (((var_5 + (((-58 ? 3988034689882576779 : -1023))))));
                        arr_35 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1] = (var_4 ^ var_6);
                        arr_36 [i_0] [i_1] [i_1] [i_1] = ((((14267398087883949117 ? 536870911 : 11913175513042309439))) ? 1023 : (var_8 / var_14));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                    {
                        arr_39 [i_0] [i_1] [i_2] [i_1] = var_13;
                        arr_40 [i_1] [24] [i_0] [i_1] [i_1] = var_9;
                    }
                    for (int i_9 = 2; i_9 < 21;i_9 += 1)
                    {
                        arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] |= var_1;
                        arr_45 [i_0] [i_0] [i_2] [i_2] [i_1] [i_2] = var_8;
                    }
                    arr_46 [i_1] [i_1 + 1] [i_1] = var_12;
                    arr_47 [i_0] = (((((var_12 ? var_14 : var_11))) ? var_13 : ((var_13 ? var_12 : var_13))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            {
                arr_55 [i_11] = (((((var_3 ? var_0 : var_13))) ? (((var_13 ? var_8 : var_4))) : ((var_0 ? var_13 : var_1))));
                arr_56 [i_10] [i_10] [i_10] = ((((((var_5 ? var_0 : var_13)) < (var_1 != var_5))) ? ((((var_4 ? var_8 : var_9)) ^ 66576226980512503)) : 1868));
                arr_57 [i_10] [i_10] [i_11] = ((var_9 < ((var_14 ? var_11 : var_14))));
            }
        }
    }
    #pragma endscop
}
