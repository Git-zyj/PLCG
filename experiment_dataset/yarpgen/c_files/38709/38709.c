/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 6;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_11 = (arr_5 [i_1 + 3] [i_2] [i_2] [i_3]);
                        var_12 = (min(((-(arr_4 [i_1 + 4] [i_0]))), (var_6 >= -32766)));
                        var_13 *= (((arr_3 [i_0] [i_0]) ? 43566 : 42592));
                        var_14 &= ((~(max((max(var_1, (arr_6 [i_3] [i_0] [i_0] [i_0]))), (arr_2 [i_3] [i_1 - 1] [i_1 - 1])))));
                        arr_9 [i_2] = 25564;
                    }
                }
            }
            arr_10 [i_0] [i_0] [5] = ((-8855329185321949775 ? (~var_9) : ((((min((-2147483647 - 1), var_3))) + ((-(arr_6 [i_1] [i_1 + 1] [i_1 - 3] [i_1])))))));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_15 &= (max(((((max(var_6, (arr_5 [i_0] [i_4] [i_0] [i_0])))) ? 2 : var_9)), (((-103927353 ? (arr_2 [i_0] [i_0] [i_0]) : var_9)))));

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_16 = (((arr_14 [i_0] [i_4]) ? 53737 : (((arr_3 [i_0] [i_0]) ? ((-(arr_7 [i_0] [i_4] [i_0]))) : var_2))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_17 = ((!(((var_6 ? var_1 : (min(-103927352, 4294967287)))))));
                            var_18 = (!8);
                            arr_21 [i_0] [i_4] [i_0] [i_0] [i_6] [i_7] = (arr_4 [2] [i_4]);
                        }
                    }
                }
                var_19 = (arr_20 [i_4]);
                var_20 = (((((8 ? (arr_5 [i_0] [i_5] [i_5] [i_4]) : (arr_5 [i_5] [i_5] [i_5] [i_0])))) && (((((min(var_2, var_2))) ? (!9223372036854775807) : var_6)))));
            }
        }
        var_21 = var_3;
        arr_22 [i_0] = 249;
        var_22 &= (((-(arr_12 [i_0]))));
        arr_23 [i_0] &= ((var_10 && ((max(var_5, -7)))));
    }
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        var_23 = (max(var_23, ((((!9) & (max((arr_25 [4]), (arr_24 [16]))))))));
        var_24 = ((~(arr_25 [i_8])));
    }
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        arr_29 [i_9] = (max((((((arr_26 [13]) + (arr_26 [i_9]))))), (((((arr_27 [i_9]) % 4095)) >> (((arr_26 [i_9]) - 63598))))));
        var_25 = (min(var_25, ((((((~(arr_26 [i_9])))) * ((15 >> ((((4294967289 ? (arr_26 [i_9]) : var_6)) - 4092065858)))))))));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    {
                        var_26 *= 31;
                        var_27 = (max(var_27, (((-(arr_31 [i_12] [i_10] [i_9]))))));

                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            arr_42 [i_12] [i_12] [i_12] [i_12] [11] = -var_3;
                            var_28 = ((~((((((var_3 ? (arr_28 [i_9] [i_9]) : var_5))) && var_6)))));
                            arr_43 [i_9] &= ((+(((arr_25 [i_10]) ? var_6 : 4096))));
                            var_29 *= 30509;
                            var_30 = (max(var_30, (((((((arr_36 [13] [i_12] [i_11] [i_12] [i_12]) % var_6))) ? (((!(arr_40 [i_13] [i_13] [i_11] [i_13] [i_13])))) : (((((min((arr_31 [i_9] [i_9] [0]), (arr_33 [i_10])))) && (arr_35 [i_9] [i_9])))))))));
                        }
                        for (int i_14 = 2; i_14 < 15;i_14 += 1)
                        {
                            arr_46 [i_9] [i_10] [i_9] [i_12] [i_9] |= (arr_39 [i_10] [i_10] [i_10] [i_14 + 2] [i_10]);
                            var_31 = (arr_25 [i_12]);
                            var_32 = ((!(((((4294967284 ? (arr_40 [i_9] [i_9] [3] [15] [i_9]) : -29688)) + var_8)))));
                            var_33 = (((~((-(arr_27 [i_9]))))));
                            arr_47 [13] [i_10] = ((757644270686176741 < (arr_34 [i_9] [i_9])));
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 17;i_15 += 1)
                        {
                            var_34 = (arr_26 [i_9]);
                            var_35 = -19259;
                            var_36 |= ((-(arr_33 [i_11])));
                            var_37 &= (arr_39 [i_9] [i_9] [i_11] [i_12] [i_15]);
                            var_38 -= ((29238 ? (((var_5 ? 2147483648 : (arr_34 [i_10] [i_15])))) : ((~(arr_36 [i_15] [i_15] [i_15] [i_15] [i_15])))));
                        }
                        arr_51 [i_9] [i_9] [i_11] [i_10] = ((~(arr_49 [15] [15] [i_11] [13] [i_11] [i_11] [13])));
                    }
                }
            }
        }
        arr_52 [i_9] |= var_7;
    }
    var_39 += ((!((((var_4 % 4267) ? ((min(var_2, var_8))) : (var_6 == var_2))))));
    #pragma endscop
}
