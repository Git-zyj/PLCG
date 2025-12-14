/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(max((var_12 != 4311109837710391754), (16383 - 63)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = (((((~((var_9 ? (arr_1 [i_0]) : (arr_1 [i_0])))))) ? (((min((arr_0 [i_0] [i_0]), (arr_1 [i_0]))) ^ (arr_1 [i_0]))) : (((((var_16 ? (arr_0 [15] [i_0]) : var_8)))))));
        arr_2 [i_0] = (min((arr_1 [i_0]), -602919175));
        var_22 &= (max(var_11, var_9));
        var_23 = ((((((var_18 ? 190 : 33170)))) + (min((var_5 ^ var_5), ((var_3 ? (arr_1 [i_0]) : 224))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_24 = (33183 <= var_11);
        var_25 = (1170005729 | 58538);
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_26 = ((((min((!var_14), 1))) | ((((arr_12 [i_2] [i_3] [i_2]) && var_1)))));
                    var_27 -= ((((((arr_8 [20] [i_3 + 2]) & var_15))) & (max(var_4, (arr_12 [i_3 + 2] [i_3 - 1] [i_3 - 1])))));

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 24;i_5 += 1)
                    {
                        var_28 = -1;
                        var_29 = (((((~(arr_11 [i_5] [i_3] [i_4])))) ? var_9 : (arr_8 [i_2] [i_4])));
                    }

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_18 [i_2] [i_2] [i_4] [i_6] [i_2] = var_12;
                        var_30 &= ((((((arr_15 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3]) ? var_8 : (arr_7 [i_3 + 1] [i_3])))) - (max((var_19 ^ var_0), (arr_14 [i_3 + 1] [i_3 - 1])))));
                        var_31 += ((~((((arr_13 [i_3 + 2] [23]) < (arr_13 [i_3 + 2] [i_3 - 1]))))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                        {
                            var_32 |= (arr_20 [i_2] [i_3 + 2] [i_4]);
                            var_33 = (!221);
                            var_34 = (((-602919175 ? 10513702372890277944 : (arr_12 [i_2] [i_2] [i_2]))));
                            var_35 = (max(var_35, var_0));
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                        {
                            var_36 = (((arr_22 [i_2] [i_6] [i_4] [i_3] [i_3] [i_2]) ? (arr_19 [i_2] [i_2] [i_4] [i_6] [i_8] [i_8]) : (arr_7 [i_2] [i_3 + 2])));
                            var_37 *= ((-50 ? ((((((!(arr_16 [i_2] [i_3] [i_2] [i_6] [i_8])))) <= (((arr_23 [i_8] [16] [16] [i_4] [16] [i_2]) ? 20407 : var_3))))) : (((!(((128 ? (arr_12 [i_3] [i_6] [i_8]) : (arr_12 [i_2] [i_2] [i_6])))))))));
                            arr_25 [i_2] [i_2] [i_2] [9] [i_2] = (~((-((~(arr_19 [i_8] [i_2] [i_4] [i_3] [i_2] [i_2]))))));
                        }
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            var_38 = var_0;
                            var_39 = (min(var_39, (arr_16 [i_2] [22] [i_4] [i_6] [i_9])));
                            var_40 = ((((((~7475146429468846583) - (!3)))) ? (~var_0) : ((var_17 ? ((var_9 >> (var_17 + 1462111723))) : (!var_8)))));
                            var_41 = var_2;
                        }
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                    {
                        var_42 = (min((((arr_22 [i_3] [19] [i_3 - 1] [i_3] [i_3 + 2] [i_2]) ? (arr_22 [i_3] [i_3] [i_3] [i_3] [i_3 - 1] [i_2]) : var_6)), var_12));
                        var_43 = ((~(max(-1490374274, ((26822 ? -8541812732959678416 : 232))))));
                        var_44 += 0;
                    }
                    for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                    {
                        var_45 = (min((((arr_32 [i_3 + 1] [i_3] [i_4] [i_11]) ? -3578103820411902533 : var_18)), ((var_17 ? (arr_32 [i_3 - 1] [i_3] [i_4] [i_11]) : -1490374271))));
                        arr_35 [i_2] [i_3 + 1] [i_4] [i_11] = (((+((98 ? (arr_6 [i_2]) : var_5)))));
                        var_46 += var_9;
                        var_47 &= 2699152547;
                    }
                }
            }
        }
    }
    #pragma endscop
}
