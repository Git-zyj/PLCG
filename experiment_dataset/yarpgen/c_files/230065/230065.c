/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    var_21 = 2069634092;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_22 = (((26689 ? (min(89, (arr_1 [0] [i_0])) : ((4294967295 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))))));
        var_23 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_24 = ((~((~(arr_4 [i_1])))));
        var_25 = -var_16;
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_26 = (-var_10 - 6);

        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    var_27 = (((arr_5 [i_3 - 3] [i_3]) ? (arr_5 [i_3 - 3] [1]) : (arr_5 [i_3 - 2] [i_2])));
                    var_28 = (((529 ^ (arr_7 [i_3] [i_3]))));
                    var_29 = ((((var_15 ? 89 : (arr_11 [i_2] [i_2] [i_2] [i_2]))) | (23 / 65014)));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_30 = var_6;
                        var_31 -= (((var_19 && (arr_11 [i_7] [i_4] [i_2] [i_2]))));
                        var_32 = -var_11;
                        var_33 = ((+((var_2 ? (arr_15 [i_3] [i_4] [i_4] [i_4] [2] [i_3]) : 4294967290))));
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_34 = ((-(arr_7 [i_3] [i_3])));
                        var_35 = (arr_21 [i_4] [i_2]);
                        var_36 *= (arr_17 [i_2] [i_6] [i_3 + 1] [i_2]);
                        var_37 = (((~(arr_24 [i_2] [i_3] [i_4] [i_6] [i_8]))));
                    }
                    var_38 = ((var_6 ? (arr_21 [i_3 - 2] [i_3 + 1]) : (arr_21 [i_3 - 1] [i_3 + 1])));
                    var_39 = (((arr_17 [i_2] [i_2] [i_4] [i_3]) ? (arr_20 [i_3 - 2] [i_3]) : (arr_20 [i_3 + 1] [i_3])));
                    var_40 = (~3905445884);
                    var_41 = (239 * 4106480676);
                }
                var_42 = (arr_14 [i_2] [i_2] [i_2] [i_2]);
                var_43 = 14;
            }
            var_44 = (var_16 - ((((arr_11 [i_2] [i_2] [i_2] [i_2]) + var_12))));
            var_45 = ((-var_18 / (arr_17 [i_2] [8] [i_2] [i_3])));
            var_46 = (arr_11 [10] [9] [i_2] [i_2]);
            var_47 = (arr_24 [i_2] [i_2] [i_2] [i_2] [10]);
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {
                    var_48 |= 104;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            {
                                var_49 = var_13;
                                var_50 = (arr_31 [i_9 - 1] [i_9 + 2]);
                                var_51 = ((4294967286 & (arr_22 [i_10] [i_9 + 1] [i_9 + 1] [i_9] [i_2])));
                            }
                        }
                    }
                    var_52 = (arr_12 [i_9 - 1] [i_2] [i_9 + 1] [i_9 + 1] [i_9]);
                    var_53 += ((!(arr_33 [3] [i_9 + 2] [i_9 + 1] [i_9] [i_9 + 1])));
                }
            }
        }
        var_54 ^= (~(arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]));
    }
    #pragma endscop
}
