/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = (((!var_3) * (!-var_3)));
                    var_12 -= ((!(--5371817368002161758)));
                }
            }
        }
        var_13 = ((min((~var_3), (~var_2))));
        arr_9 [i_0] = (min((min((var_4 == var_8), var_2)), (((!((min(var_3, var_9))))))));
        var_14 -= -var_4;
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        arr_22 [i_4] [0] [i_5] [i_6] = ((((-var_3 / (((max(var_2, var_2)))))) | (0 <= 471698222296209483)));
                        arr_23 [i_3] [i_4] [i_5] [i_4] = (max(((max(5371817368002161757, var_0))), (min(var_3, var_9))));
                        arr_24 [i_4] [3] [i_4] [i_5] = var_4;
                    }
                }
            }
        }
        var_15 = var_10;
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
    {
        var_16 = (var_6 + var_3);
        arr_27 [i_7] [i_7] = (((((((~var_2) && var_6)))) * (min((!var_5), (min(var_8, var_5))))));
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        {
                            var_17 -= var_6;
                            arr_39 [11] [i_9] [i_9] [i_9] = ((!((min((!var_3), var_8)))));
                            var_18 = (min((var_7 / var_1), (((-((max(var_8, var_7))))))));
                            var_19 ^= var_8;
                        }
                    }
                }

                for (int i_12 = 2; i_12 < 14;i_12 += 1)
                {
                    var_20 = (max(var_20, (!var_4)));

                    for (int i_13 = 2; i_13 < 16;i_13 += 1)
                    {
                        arr_45 [i_9] [i_12] [i_9] [i_9] = ((((+((((-32767 - 1) || 42956))))) | -var_4));
                        var_21 = var_2;
                    }
                    for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
                    {
                        var_22 -= (((!var_7) == (var_9 ^ var_1)));
                        var_23 = (((-(~-471698222296209488))) > (var_1 & var_1));
                        var_24 -= ((((var_3 / var_4) * var_10)));
                        var_25 = ((!(var_0 ^ var_3)));
                        arr_48 [i_12] [i_9] = var_5;
                    }
                    for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
                    {
                        var_26 = ((-471698222296209483 * (4016 == 471698222296209515)));
                        var_27 = var_3;
                    }

                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        var_28 ^= (((((var_2 / var_3) / var_3)) / var_7));
                        arr_54 [i_9] [i_8] [i_8] = (!var_8);
                        var_29 = var_6;
                    }
                    for (int i_17 = 2; i_17 < 16;i_17 += 1)
                    {
                        var_30 ^= (min((var_5 || var_2), var_4));
                        var_31 = var_0;
                        var_32 = 0;
                        var_33 = (~var_2);
                        arr_59 [i_17] [i_9] [i_12] [i_9] [i_8 + 2] = (var_5 * var_3);
                    }
                }
                for (int i_18 = 0; i_18 < 18;i_18 += 1)
                {
                    arr_64 [i_18] [i_9] = var_10;
                    var_34 = (max(-var_4, (max((var_8 - var_9), (!var_4)))));
                    var_35 *= ((!(((4294967287 % (471698222296209505 || 192))))));
                    arr_65 [i_9] = ((-(((((max(var_1, var_7)))) % var_1))));
                    arr_66 [i_9] [i_18] [i_18] [i_9] = (!var_10);
                }
                arr_67 [i_8] [i_9] = ((!(-var_6 - var_3)));
                arr_68 [i_9] = ((!(!var_4)));
                arr_69 [i_9] [i_9] = (((((max(var_7, (min(var_8, var_6)))))) <= var_8));
            }
        }
    }
    #pragma endscop
}
