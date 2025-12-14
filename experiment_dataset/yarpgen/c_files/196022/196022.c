/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 7;i_1 += 1) /* same iter space */
        {
            arr_5 [1] [3] [i_0] = ((-2738188169942768740 < (48 % 1)));

            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                var_11 = (max(var_11, ((((1 ? var_6 : (arr_0 [i_1]))) >= (7847683 && 1)))));
                var_12 = ((((53 ? 1 : -48)) * (!1)));
                var_13 = (((((arr_0 [i_2]) ? 1 : -23)) <= 1));
                var_14 = (((((arr_6 [i_0] [i_1]) ? 1 : var_6)) + -27));
            }
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                arr_11 [i_3 + 1] = 4140771447519491335;
                var_15 = (max(var_15, (((var_6 ? (((arr_9 [i_0] [i_0] [i_0] [i_3]) + (arr_6 [i_3] [i_0]))) : (((-(arr_0 [i_3])))))))));
            }
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_16 = 1;
                            var_17 = var_4;
                        }
                    }
                }
            }
        }
        for (int i_7 = 2; i_7 < 7;i_7 += 1) /* same iter space */
        {
            arr_24 [i_0] = -8;
            var_18 = (min(var_18, ((((((1 * (-26 >= 1)))) ? (((90 + 205) ? (-34 | 56386) : var_8)) : (((+(((arr_6 [i_7 + 4] [i_0]) ? 0 : -10121))))))))));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_28 [i_0] = (((arr_4 [i_0] [i_0] [5]) - ((((124 - var_6) ? (1 + 195) : (2147483647 - 511161211))))));
            var_19 = ((((max((arr_22 [i_0] [i_0] [i_8]), ((var_7 ? var_8 : (arr_15 [i_0])))))) ? -2147483627 : ((((87 - 206) >= ((1 ? 1976368201 : -14)))))));
        }
        var_20 = (arr_10 [i_0] [i_0] [i_0] [i_0]);
        var_21 = ((var_10 ? var_5 : ((((arr_26 [i_0] [i_0]) - (((arr_14 [i_0] [i_0] [i_0] [i_0]) + -24234)))))));
        arr_29 [i_0] |= min((254 * -16), ((((min((arr_7 [i_0]), (arr_2 [i_0])))) ? (min(4297537711522133755, (arr_8 [i_0] [i_0] [i_0]))) : ((var_7 << (((-511161211 + 511161227) - 16)))))));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    arr_36 [i_0] [i_0] = (min((((((arr_12 [i_0] [i_9 + 1] [i_10] [i_10]) ? -4 : -22525)) % ((-(arr_10 [i_0] [i_9] [i_9 - 1] [i_10]))))), (((187 + 1) - (2147483647 + -109)))));
                    var_22 = (max(var_22, ((min(27859497, var_9)))));
                    var_23 = (min(var_23, (((!(!-45))))));
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
    {
        arr_41 [i_11] = var_4;
        var_24 = (max(var_24, ((min((arr_6 [i_11] [i_11]), (((var_5 / 1) | ((4 ? 48 : var_3)))))))));
    }
    for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
    {
        arr_44 [i_12] [i_12] = max((((-12 >= -48) - 263882790666240)), ((((19127 + var_4) && (1 + 1)))));
        var_25 = (((((1 + (arr_9 [i_12] [i_12] [i_12] [i_12])))) + ((((!(arr_40 [i_12] [i_12])))))));
    }
    for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            var_26 = 416040487;
            arr_51 [i_14] = (-((234 << (((arr_9 [i_13] [i_14] [i_14] [i_14]) - 6280607620986492072)))));
        }
        var_27 = min(((+(((arr_20 [i_13] [i_13] [i_13]) ? -537789637531882352 : 1)))), ((((arr_47 [i_13] [i_13]) - ((min(31, 8182)))))));
        var_28 = (max(var_28, (((((max((max(var_2, 22)), (((var_1 < (arr_8 [8] [i_13] [i_13]))))))) * ((((190 & (arr_1 [i_13]))) + ((((arr_26 [i_13] [i_13]) == 154))))))))));
        var_29 = ((((var_8 ? ((97 ? var_8 : var_2)) : ((var_0 ? 15 : var_7)))) * ((((((3603492823 ? 18446744073709551598 : 224))) ? ((-81 / (arr_30 [i_13]))) : -14)))));
    }
    var_30 = ((17 ? var_1 : ((177 / ((var_7 ? 55363 : var_9))))));
    #pragma endscop
}
