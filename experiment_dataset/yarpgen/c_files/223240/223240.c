/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [7]);
        var_19 = (((((-2147483647 - 1) + 2147483647))) % (min((max(var_3, var_2)), ((max(var_3, (arr_0 [i_0] [i_0])))))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 - 1] = ((((-2147483647 - 1) != -1)) ? ((((var_4 ? (arr_4 [i_1]) : (arr_4 [i_1 + 2]))) - (arr_3 [i_1] [i_1]))) : (arr_5 [5]));
        arr_7 [i_1] = (((((min((arr_3 [i_1 + 1] [14]), var_5))) ? (min(var_14, var_17)) : var_7)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        var_20 = (((arr_12 [i_2] [i_3] [i_4]) - (min(6, 175289476350290364))));
                        var_21 = (arr_10 [i_3] [i_2] [i_1 - 1]);
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 16;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] [i_5] = (~((var_14 ? var_17 : var_11)));
        arr_21 [i_5] [i_5] = (max(((min((arr_8 [i_5 - 2] [i_5 - 1] [i_5 - 2]), (arr_8 [i_5 - 2] [i_5 - 1] [i_5 - 2])))), (min(var_4, (arr_12 [i_5 - 1] [i_5] [i_5])))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                {
                    arr_29 [i_5] [i_6] [13] = var_4;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_22 *= (((6 / 11111661151413458981) == (((min((((!(arr_4 [i_5 + 2])))), var_8))))));
                                var_23 = (~var_3);
                                arr_34 [i_5] = var_12;
                                var_24 = var_13;
                            }
                        }
                    }
                    arr_35 [i_5] = (254238558 ^ -1927794937);
                    var_25 *= ((((((!((min((arr_16 [i_5 - 2] [i_5] [i_6] [i_6] [i_7]), var_18))))))) != (max((((var_10 == (arr_12 [i_5] [i_6] [i_7 + 1])))), var_17))));
                }
            }
        }
    }
    for (int i_10 = 2; i_10 < 16;i_10 += 1) /* same iter space */
    {
        arr_38 [i_10 - 1] = (max(17197, 169));

        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            var_26 = var_15;
            arr_41 [i_10] [i_10] [i_10] = ((-(((arr_31 [i_10 - 1] [i_11]) ? (arr_31 [i_10 - 1] [i_11]) : var_16))));
            var_27 += (arr_28 [14] [i_10 + 2] [14] [14]);
        }
        for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
        {
            var_28 *= (~var_16);
            var_29 = ((((-var_8 ? var_10 : ((~(arr_44 [i_10] [i_10 + 1] [i_10]))))) >> (2147483623 - 2147483584)));
            var_30 = ((!(((var_3 / (2147483647 % -660471539))))));
            arr_46 [i_10] [i_12] [i_12] &= (arr_17 [i_10] [i_10] [i_10 + 1] [i_10]);
            arr_47 [i_10] [i_12] = (min(var_4, ((((var_9 / (arr_23 [i_12])))))));
        }
        for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
        {
            var_31 = (arr_11 [11] [i_13]);
            var_32 = var_1;
            arr_50 [i_10] = var_6;
        }
        arr_51 [i_10 - 1] [i_10] = (((arr_8 [i_10] [i_10 - 1] [i_10]) < ((min((arr_40 [i_10]), (-21 <= 48350))))));
    }
    var_33 |= -var_5;
    var_34 -= min(((var_7 ^ (var_5 ^ var_9))), ((min((~var_3), (var_9 & var_14)))));
    var_35 = ((~(min((var_5 - var_5), ((min(var_7, var_3)))))));
    #pragma endscop
}
