/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_8 [i_3] = var_4;
                        arr_9 [i_0] [i_1] [i_2] [i_3] = ((var_4 < (((~(arr_6 [i_1] [i_2 + 1] [i_2 - 1]))))));
                        arr_10 [i_0] [i_1] [i_0] [i_3] = ((+(((arr_4 [i_0] [i_1 - 2] [i_2] [i_2]) ^ (((arr_4 [i_0] [i_0] [i_0] [i_0]) ? var_7 : (arr_1 [8])))))));
                        var_16 *= (((((1047644998 % 1047644998) < var_0)) ? ((((((var_13 / (arr_1 [i_0])))) / (arr_0 [i_0])))) : (((min(var_11, var_12)) / (arr_1 [i_3])))));
                    }
                    var_17 *= ((((min((~1047645004), ((-1526604573 ? 1047645000 : (arr_5 [i_0] [i_0] [i_1] [i_0])))))) != ((~((~(-9223372036854775807 - 1)))))));
                    var_18 = (2097151 && 3611953670);
                }
            }
        }
        var_19 = (max(var_19, (((1047644980 - ((-1047644999 * (arr_0 [i_0]))))))));
        var_20 *= var_4;
        var_21 |= ((~(-1341932915 || 1047645012)));
    }
    for (int i_4 = 1; i_4 < 10;i_4 += 1)
    {
        var_22 *= (min((arr_0 [1]), (((arr_3 [i_4 - 1]) / var_15))));
        var_23 = ((((((-9223372036854775807 - 1) * (2147483634 / -362225513625051078)))) ? (((10377868474179077438 / -27253) ? (362225513625051095 / 95) : 1977324692517675939)) : -764467805));
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    var_24 = (((((var_4 ? var_12 : (arr_4 [i_5] [i_6] [i_7] [i_7])))) ? ((var_4 * (arr_17 [i_5] [i_6]))) : (-127 > var_11)));
                    var_25 = (max(var_25, (((+(((arr_1 [i_5]) + var_7)))))));
                    var_26 = (min(var_26, (var_4 + var_0)));
                    arr_22 [i_6] [i_7] = -var_8;
                }
            }
        }
        arr_23 [i_5] [i_5] &= (10377868474179077438 || -2131381274);
    }
    for (int i_8 = 1; i_8 < 20;i_8 += 1)
    {
        arr_26 [i_8] [i_8 + 3] |= (max(((((((arr_1 [i_8]) * 1))) ? (((-362225513625051080 ? (arr_2 [i_8] [i_8]) : var_9))) : ((var_10 ? var_5 : 0)))), (((arr_7 [i_8 - 1] [i_8 + 2] [i_8 + 3] [i_8]) / (arr_7 [i_8 + 4] [i_8 + 3] [i_8 + 3] [i_8 + 3])))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                {
                    var_27 = var_3;
                    arr_34 [i_9] [i_10] |= 0;
                }
            }
        }
    }
    var_28 = (var_0 | 9215374835431658183);
    var_29 = var_13;
    #pragma endscop
}
