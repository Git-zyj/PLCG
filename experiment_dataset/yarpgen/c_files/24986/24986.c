/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (max(((((min(var_9, 8388096))) ? (((8388099 ? var_11 : 8388099))) : -var_14)), var_8));
    var_21 = var_0;
    var_22 = (max(var_22, ((((var_2 != var_15) ? ((max(37, var_8))) : (!var_12))))));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            var_23 = (((((var_4 ? var_9 : ((var_6 ? var_7 : -8900))))) ? (((min(14949317054243806228, 2139095040)) + (-9223372036854775807 - 1))) : (((((arr_3 [14] [14] [10]) ? var_5 : var_7))))));
            var_24 = (((((~(arr_2 [i_0])))) ? (max(var_6, (arr_1 [i_0] [i_0 - 3]))) : ((((var_18 + (arr_2 [i_0])))))));
        }
        var_25 = (((((((min(18446744073709551615, -9))) && 37))) <= 40));
        var_26 = (max(((((4286579185 >= var_18) >= 1))), (((3446891353 | var_18) ? (~var_3) : (arr_1 [i_0] [1])))));
        arr_4 [i_0] = (min(-var_5, (~94)));

        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_27 ^= var_3;
            var_28 = (max(var_28, 123));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_29 = (min((((53 || (98 || 14130125902906012530)))), (max(var_11, (-24 && var_19)))));
            var_30 *= (max(((-((1376989145 ? 3446891335 : 3278592131)))), (((var_3 % (arr_1 [10] [10]))))));
        }
    }
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        var_31 = ((((((0 ? 18446744073709551614 : var_2))) ? (!var_12) : (max(var_19, var_14)))));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {

                    for (int i_7 = 3; i_7 < 16;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            arr_24 [i_6] [10] [9] [6] [1] [14] = ((!((min(var_17, -var_16)))));
                            var_32 = (((((-((min(1, var_5)))))) ? ((((((arr_11 [13]) ? var_8 : var_8))) ? (arr_8 [10]) : var_10)) : (arr_20 [9] [0] [9] [2])));
                        }
                        var_33 += 14486;
                        arr_25 [i_6] [2] [1] [0] [5] [i_6] = (max(var_9, ((var_19 << (var_1 - 11995681949850516871)))));
                        var_34 &= var_9;
                    }
                    for (int i_9 = 4; i_9 < 14;i_9 += 1)
                    {

                        for (int i_10 = 2; i_10 < 16;i_10 += 1)
                        {
                            arr_33 [1] [8] [1] [i_6] [0] = (max((arr_17 [0] [4] [8]), 3446891335));
                            var_35 = ((!(!var_19)));
                            var_36 ^= (max(((min((arr_1 [8] [14]), (arr_1 [0] [2])))), (max(var_11, var_6))));
                            var_37 = (max(((-(arr_32 [i_10 + 1] [13] [3] [11] [13]))), (max(var_18, (arr_31 [i_10 - 1] [i_6] [1] [0] [7] [10])))));
                        }
                        for (int i_11 = 1; i_11 < 15;i_11 += 1) /* same iter space */
                        {
                            arr_38 [i_6] [15] [7] [15] [9] = (((((((max(var_5, (arr_11 [7])))) ? (max(846773641, var_15)) : 76))) ? ((~(min(61, 1442793835958362053)))) : var_1));
                            var_38 += var_8;
                            arr_39 [14] [i_6] [15] [7] [8] [11] = var_17;
                        }
                        for (int i_12 = 1; i_12 < 15;i_12 += 1) /* same iter space */
                        {
                            var_39 = var_16;
                            var_40 = (max(var_40, ((((-var_0 / -18446744073709551600) + var_9)))));
                            var_41 = ((((((8727 ? 64 : var_19))) != -var_6)));
                        }
                        var_42 -= 1;
                        var_43 = ((((max(15, 153))) ? (max(-24, 9)) : (~4294967295)));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            arr_48 [5] [i_6] [1] [i_6] [3] = 1;
                            var_44 += (((arr_37 [16] [4] [4] [i_14] [6]) ? (arr_32 [i_5 - 1] [2] [i_4 + 1] [14] [6]) : (arr_14 [9] [1])));
                        }
                        arr_49 [i_6] = (!1000965001);
                        var_45 = (((arr_32 [1] [i_5 - 2] [12] [i_5 - 1] [16]) ? var_14 : (arr_45 [4] [i_5 + 2] [6] [16] [16])));
                    }
                    arr_50 [13] [14] [0] [i_6] = ((min(-4655335702144333605, 18446744073709551615)));
                    var_46 = (((((125 ? var_6 : var_2))) >> var_18));
                    var_47 = ((2 | -12) ? (((var_4 ? var_18 : 119))) : ((-(arr_12 [i_4 - 2]))));
                }
            }
        }
    }
    #pragma endscop
}
