/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 65535;
    var_13 = 65529;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_4 [i_1] &= 211;
            arr_5 [i_0] = 1721285786;
        }
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            var_14 |= var_6;
            arr_10 [3] [11] [i_0] = ((~(max(var_5, ((var_11 & (arr_7 [7] [i_2])))))));
        }
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            var_15 &= arr_3 [i_0 - 1] [4];
            var_16 = 1069547520;
            var_17 = (-((((var_10 % -1665162950432546597) > (var_1 | 3298387583)))));
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_18 += ((((255 || (!var_11)))));
                    var_19 = (arr_12 [i_0]);
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 22;i_6 += 1)
    {
        var_20 = 242;

        for (int i_7 = 1; i_7 < 19;i_7 += 1) /* same iter space */
        {
            arr_25 [4] &= ((23 ? (arr_23 [15]) : ((((((arr_24 [i_6 + 1]) & 0)) == ((((51328 == (arr_24 [17]))))))))));
            var_21 = var_4;
            var_22 = (min(var_22, ((47 ? ((((~(arr_22 [i_6]))))) : (max(var_0, (arr_24 [i_7 - 1])))))));
        }
        for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 1; i_9 < 22;i_9 += 1)
            {
                arr_33 [12] [i_6 - 2] [18] [20] |= ((-4389903567135582685 * ((112 / (arr_22 [i_6])))));
                var_23 |= (min((arr_32 [10] [i_8] [i_8 + 2] [8]), -2147483637));
            }
            var_24 = (min(var_24, (arr_23 [i_6 - 2])));
            arr_34 [i_8] = (!16);
            arr_35 [i_8] [17] = ((!(248 ^ 225)));
            arr_36 [i_6 - 2] [19] [i_8] = ((((9223372036854775807 ? (arr_30 [i_6 + 1] [i_6 - 2] [i_6]) : 9))));
        }

        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            arr_39 [i_10] = arr_38 [i_10];
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        arr_46 [20] [i_10] [i_10] [i_10] [4] [18] |= 164;
                        var_25 = ((((((arr_24 [1]) < (arr_19 [i_11])))) * ((min(10, 164)))));
                        arr_47 [i_10] = 17;
                        arr_48 [i_11] [i_11] [i_11] [i_10] = ((((min((min((arr_44 [i_6 - 1] [i_6] [i_10] [i_10] [22] [i_12]), (arr_28 [i_12] [15] [9]))), (var_1 % 1665162950432546607)))) ? ((2140798239 ? var_4 : -var_9)) : ((((var_2 ? (arr_20 [i_12]) : (arr_27 [4] [i_10])))))));
                        var_26 = ((((1692471445 ? 1665162950432546607 : (arr_23 [i_6 - 1])))));
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            var_27 = (max(var_27, ((((arr_31 [16] [4]) >> (((arr_42 [i_13]) - 41250)))))));
            arr_52 [5] [1] = (((-655067763 ? (arr_28 [i_6 - 2] [1] [18]) : 121)));
            var_28 |= (arr_41 [i_6] [i_13]);
            var_29 = (((min(65531, (var_11 ^ var_9))) >= ((min(170, var_11)))));
        }
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            var_30 = ((((arr_21 [i_6 - 1]) << (((((arr_50 [18]) + 454245259)) - 3)))) - 1692471452);
            arr_57 [i_14] [i_14] = arr_21 [10];
            arr_58 [i_14] [7] [i_14] = (((((49444 ? 2 : 136))) + (min(-1692471452, var_7))));
        }
    }
    #pragma endscop
}
