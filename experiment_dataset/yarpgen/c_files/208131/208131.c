/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = var_11;
        var_14 = ((+((max((202 && var_10), 32429)))));

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                var_15 = (((arr_0 [i_1 + 1] [i_0 + 1]) ? ((var_6 ? (arr_7 [i_1] [i_1 + 2] [5] [i_1]) : var_9)) : (var_8 * 60)));
                var_16 -= var_10;
                var_17 = (((var_1 & ((var_4 & (arr_0 [i_0] [i_0]))))));
                arr_8 [i_0] [i_0] = ((((((arr_0 [i_1 - 1] [i_1 - 1]) && ((min((arr_0 [i_1] [i_0]), var_13))))))) > (arr_4 [i_0] [i_1] [i_2]));
            }
            var_18 += (max(18446744073709551587, (((((arr_7 [i_1] [i_0] [3] [i_0]) != var_11))))));
            var_19 -= ((!(((arr_4 [12] [12] [16]) && (arr_3 [i_0] [i_0 + 1] [i_1])))));
            arr_9 [i_0] = ((((((arr_3 [i_1 + 1] [i_1 + 4] [i_1 + 4]) >= (arr_3 [i_1 + 4] [i_1 + 3] [i_1 + 2])))) << (((max((arr_3 [i_1 + 3] [i_1 + 1] [i_1 + 3]), (arr_3 [i_1 + 2] [i_1 + 4] [i_1 + 4]))) - 6493869142232056362))));
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            var_20 = (max(var_20, ((((max((arr_5 [i_0] [6] [i_3]), ((var_13 ? var_12 : var_12)))) ^ (((((max(148, var_10))) > (arr_11 [14] [14] [4])))))))));
            arr_12 [i_0] [i_0] = ((-((var_4 ? (max(var_2, 2372143570)) : ((((var_3 >= (arr_3 [i_0] [i_3] [i_3])))))))));
            var_21 = ((((max(var_12, (arr_5 [i_0 - 2] [i_0] [i_3 - 1]))) ^ ((((arr_0 [i_3 - 1] [8]) * var_8))))) < ((((arr_6 [i_0] [i_0 - 2] [i_0 + 1]) % (arr_6 [i_0] [i_0 - 2] [i_0])))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_22 ^= 9223372036854775797;
                        arr_23 [i_0] [i_0] [i_4] [i_6] = 7766185173357395406;
                        var_23 = (max(var_23, (((15925581202269087719 ? (arr_18 [i_5] [i_6] [i_5] [i_5]) : (arr_7 [i_0 - 1] [i_4] [9] [i_6]))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    {
                        arr_30 [i_0] [i_4] [i_8] [i_7 - 2] [i_4] = var_5;

                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_24 &= (arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                            arr_33 [i_0] [i_0] [i_0] = (arr_11 [i_0] [i_8] [i_0]);
                            arr_34 [i_0] [i_4] [i_7] [10] [i_0] &= (((((arr_17 [10] [10] [i_7 - 1]) || var_13)) && (var_0 < var_2)));
                            arr_35 [i_0] [2] [i_0] [i_0 - 2] [i_0] &= arr_32 [i_8 + 1] [i_8 + 1] [i_7 - 2];
                        }
                        arr_36 [i_0] [i_4] [i_0] [i_0] [i_0] = (((((arr_24 [i_0] [i_0 - 1] [i_0] [i_0]) ? var_3 : var_6)) == (arr_0 [i_8] [i_4])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        arr_42 [i_0 - 2] [i_0] [i_0 - 1] [4] |= (((arr_40 [i_0 + 1] [i_0 - 2] [22] [i_0] [i_0 - 2]) > (arr_21 [i_0 - 1] [i_0] [i_0] [i_0] [i_0])));
                        arr_43 [12] [i_11] &= ((+(((arr_5 [i_0] [10] [i_10]) ? (arr_15 [i_0] [10] [i_0] [i_11]) : var_5))));
                        var_25 = 55287;
                        var_26 = (((arr_13 [i_0 + 1] [i_0 - 1]) ? 0 : (arr_13 [i_0 - 1] [i_0 + 1])));
                    }
                }
            }
        }
        arr_44 [i_0] = (arr_19 [i_0] [i_0 - 1] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 20;i_12 += 1)
    {
        arr_48 [i_12] [i_12 + 1] = (((arr_21 [i_12] [i_12] [i_12] [i_12 - 1] [i_12]) && (arr_21 [13] [i_12 + 2] [i_12] [i_12 + 2] [i_12 - 1])));
        var_27 += (((arr_13 [i_12] [i_12 + 2]) ? var_8 : (((arr_41 [10] [i_12] [i_12] [10]) & var_5))));
    }
    var_28 = (min((min((var_13 ^ var_9), var_5)), var_4));
    var_29 = (+(((var_11 * var_5) * (var_8 * var_11))));
    #pragma endscop
}
