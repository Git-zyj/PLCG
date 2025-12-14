/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((((min(var_4, var_6))) ? (-5609980200364359227 / 10083) : (((var_1 ? var_9 : var_13))))), ((var_7 ? var_4 : var_12))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_0] &= ((~((max((arr_2 [i_1 + 1] [i_1 - 2]), (arr_2 [i_1 + 1] [i_1 - 2]))))));
            arr_7 [i_0] [i_0] [i_1] &= ((var_5 ? ((((!(((arr_3 [i_0] [i_1] [i_1]) && 5723670981105017954)))))) : (arr_5 [i_0])));
            arr_8 [i_0] [i_0] [i_0] = (((((10 ? 5609980200364359211 : 139611588448485376))) ? (-5609980200364359211 <= 54702876) : (arr_2 [i_0] [i_1])));
            arr_9 [5] [4] [6] &= ((((1917683271881179680 ? 2244900721 : -283701271))));
            var_15 = (max(1, 8468996991295735071));
        }
        arr_10 [i_0] [i_0] = (min(((((max(1, 15))) ? 10536278381724888158 : var_6)), ((((((arr_3 [i_0] [i_0] [1]) > (arr_4 [i_0] [0]))) ? (arr_1 [i_0]) : ((max(283701270, 1))))))));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            var_16 = (min(var_16, (((((-1 ? 9026093834887523609 : -17))) ? ((1 ? 1707198371939594776 : 1350454612478491328)) : 283701252))));
            arr_13 [i_0] [i_0] [i_2] = ((-(arr_5 [i_2])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_17 = ((((1 ? 21 : 13)) | (((1 ? var_11 : -3811695)))));
            arr_18 [i_0] [i_0] = -112;

            for (int i_4 = 2; i_4 < 16;i_4 += 1) /* same iter space */
            {
                arr_21 [i_4 + 2] [i_3] = (((arr_19 [i_0] [i_0] [i_4 - 1]) > (arr_19 [i_0] [i_4 - 1] [i_4])));

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_18 = ((((((arr_11 [i_0] [i_0]) + var_9))) ? (((-(arr_15 [i_0])))) : (arr_5 [i_0])));
                    var_19 ^= (((arr_4 [i_0] [i_3]) > (var_6 <= -10102)));
                    var_20 = (min(var_20, ((((((((arr_19 [i_0] [i_0] [3]) > (arr_22 [i_5] [i_0]))))) | ((var_2 ? var_11 : var_3)))))));
                }
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    arr_27 [i_4] [i_6] [i_4] [8] = ((~(arr_22 [i_6] [i_3])));
                    arr_28 [i_0] [i_3] [i_4] [i_3] [i_6] [i_3] = (((arr_20 [i_4 - 1] [i_4 + 2] [i_4 + 1]) ? (arr_20 [i_4 + 2] [i_4 - 1] [2]) : (arr_20 [i_4 + 1] [i_4 + 1] [i_4 + 2])));
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    arr_31 [i_3] [i_7] = ((16128 % (((arr_14 [i_7] [i_0]) ? var_2 : var_9))));

                    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                    {
                        arr_36 [i_0] [i_0] [i_4] [i_7] [i_7] = 3560539029;
                        var_21 = arr_19 [i_4 - 1] [i_4 - 1] [1];
                        arr_37 [i_8] [i_7] [i_4] [6] [i_7] [i_0] = ((~((var_3 & (arr_1 [i_0])))));
                        arr_38 [i_3] [i_4 - 1] [5] [i_7] = ((-2016998012 ? ((((arr_32 [i_4] [i_3]) & var_11))) : ((0 ? (arr_35 [i_8] [i_7] [i_4] [i_0]) : var_8))));
                    }
                    for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                    {
                        var_22 = (max(var_22, ((((arr_11 [i_9] [i_3]) ? (arr_11 [i_0] [i_7]) : (arr_11 [i_0] [i_3]))))));
                        arr_41 [i_7] = ((-(((arr_19 [i_0] [11] [i_0]) ? var_7 : var_12))));
                        var_23 = (arr_4 [i_0] [i_3]);
                        var_24 = (max(var_24, (arr_19 [i_4 - 2] [i_7] [14])));
                    }
                }
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {

                    for (int i_11 = 2; i_11 < 15;i_11 += 1)
                    {
                        arr_46 [i_0] [i_3] = (arr_14 [2] [7]);
                        var_25 = (min(var_25, (((var_5 ? (1 ^ 255) : var_3)))));
                        arr_47 [i_0] [i_0] = 8595984017805747879;
                        arr_48 [i_0] [6] [i_4] [i_10] [i_0] = (var_2 & 0);
                    }
                    var_26 = var_13;

                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {
                        var_27 = (max(var_27, (((-(arr_33 [i_12]))))));
                        var_28 = 1770868179;
                    }
                }
            }
            for (int i_13 = 2; i_13 < 16;i_13 += 1) /* same iter space */
            {
                var_29 = (min(var_29, (arr_3 [i_0] [i_3] [i_13])));
                var_30 = (min(var_30, 10458688476556719900));
            }
        }
    }
    var_31 = var_5;
    #pragma endscop
}
