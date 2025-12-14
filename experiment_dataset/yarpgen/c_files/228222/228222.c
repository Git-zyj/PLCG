/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_10 += (((((arr_1 [i_0 - 1]) % (arr_0 [i_0 + 1]))) % (((arr_0 [i_0 - 2]) / (arr_1 [i_0 + 2])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_11 = (max(var_11, (((var_6 << (min((((arr_5 [i_3] [i_0] [i_0 - 2]) ? 1 : 29079)), var_3)))))));
                        var_12 = (!var_9);

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            arr_13 [8] [i_3] [14] [i_3] [i_1] = ((min((min(-2126857789170659241, (arr_3 [i_0 + 1] [i_1] [i_1])), var_6))));
                            var_13 = (arr_7 [i_0 + 1] [i_1] [i_2] [i_3]);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_16 [4] [i_1] [6] [i_3] [i_3] [8] [i_3] = -2126857789170659242;
                            var_14 = 55965;
                            var_15 = (max(var_15, ((((var_3 << (((-1 + 28) - 18))))))));
                            arr_17 [i_1] [i_3] [i_1] = (((arr_12 [i_1] [i_2 + 2] [i_5] [i_5] [i_5] [i_5]) ? (((arr_9 [i_0 + 2] [i_2 - 2]) ? var_2 : (arr_4 [i_0] [i_1] [13] [13]))) : (((0 ? var_0 : var_8)))));
                            var_16 = var_1;
                        }
                    }
                    var_17 = (arr_6 [i_0 + 2] [i_1] [i_2 - 2]);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        arr_20 [i_6] [i_6] = (((arr_2 [11] [i_6] [11]) + ((min((min(var_3, var_9)), (var_7 % var_6))))));
        var_18 ^= (arr_5 [i_6] [i_6] [i_6]);
        var_19 = (max((((((-2126857789170659241 ? var_8 : 1)) + (max(var_8, var_6))))), ((((41 >= (arr_15 [i_6]))) ? (min((arr_5 [i_6] [i_6] [8]), (arr_18 [i_6]))) : (arr_10 [i_6] [i_6] [i_6] [i_6])))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_20 = -var_3;
        var_21 += (arr_23 [i_7]);
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 8;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {

                        for (int i_12 = 1; i_12 < 8;i_12 += 1)
                        {
                            var_22 -= ((((((min((arr_24 [i_8]), 3604854376))))) / ((var_1 & (max(1, 2036713460120238577))))));
                            arr_41 [i_9] [i_12] = min(1, 2126857789170659256);
                            var_23 = (((((max(690112933, (arr_21 [i_8])))) ? var_9 : var_1)));
                            var_24 = -2126857789170659223;
                        }
                        for (int i_13 = 2; i_13 < 9;i_13 += 1)
                        {
                            arr_44 [i_9] = (((((((2126857789170659229 + (arr_33 [1] [i_9 - 1] [i_10]))) + (arr_38 [i_11] [i_9 - 1] [i_9 - 1] [i_8])))) ? ((((!(((0 - (arr_19 [i_9])))))))) : (var_9 + 1)));
                            arr_45 [i_9] [5] [i_9] [i_9] = (((arr_7 [i_8] [i_9 - 1] [i_10] [12]) && (!5458213933259699009)));
                            var_25 = ((-(((!((max((arr_32 [3] [i_9 + 1] [i_9 + 1] [i_9 + 1]), (arr_40 [i_8] [i_9 + 1] [i_9])))))))));
                            arr_46 [i_9 + 2] [i_9 + 2] [4] [i_9 - 1] [i_9 - 1] [i_9] [i_9 + 1] = ((min((min(var_9, 3604854377)), 0)));
                            arr_47 [i_8] [i_9] [i_10] [i_10] [i_9] = arr_5 [i_8] [i_9] [i_13];
                        }
                        var_26 = (((((arr_35 [i_8] [i_9] [7] [i_11]) % (arr_35 [i_8] [i_9] [i_8] [i_8]))) << ((5458213933259699013 % (arr_35 [i_8] [i_9] [i_8] [i_8])))));
                        arr_48 [0] [i_9] = var_3;
                    }
                    var_27 = ((!((max(1, 11467959239379980640)))));
                    var_28 = ((!((min((((arr_15 [i_8]) ? 3604854377 : (arr_22 [16]))), ((max(14, (arr_32 [i_8] [4] [8] [i_10])))))))));
                }
            }
        }
    }
    var_29 = (max((((((var_4 ? 1777032286 : var_4))) ? var_4 : var_1)), var_4));
    #pragma endscop
}
