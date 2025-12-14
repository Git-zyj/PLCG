/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [7] = ((!((!((max(var_12, var_7)))))));
        var_14 = (var_10 + -var_9);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [12] [12] = (max((var_3 > var_13), (max(var_3, var_11))));
        arr_7 [8] = (((!var_0) > var_2));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_15 = (max(var_15, var_12));
            arr_14 [i_2] [1] [21] = ((var_0 && (1805672857 + 0)));
        }
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            var_16 = var_5;

            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {

                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        var_17 = (var_6 / var_3);
                        var_18 -= (var_4 <= var_12);
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        arr_29 [i_2] = var_4;
                        var_19 = var_5;
                        var_20 = (~var_7);
                        var_21 = (max(var_21, var_2));
                    }
                    for (int i_9 = 4; i_9 < 19;i_9 += 1)
                    {
                        var_22 = -var_0;
                        arr_32 [0] [i_4] [i_9 - 4] [i_6] [i_2] [i_2] = ((~((var_12 >> (var_4 - 1031279129)))));
                    }
                    arr_33 [i_2] [i_2] [i_2] = var_3;

                    for (int i_10 = 1; i_10 < 21;i_10 += 1) /* same iter space */
                    {
                        var_23 = (var_2 | var_10);
                        var_24 = (var_7 == var_5);
                        arr_37 [i_2] [i_6] [0] [12] [i_2] = var_0;
                        var_25 = -var_7;
                    }
                    for (int i_11 = 1; i_11 < 21;i_11 += 1) /* same iter space */
                    {
                        arr_40 [i_2] [i_4] [i_2] [i_6] [i_2] [i_2] [13] = var_2;
                        arr_41 [i_2] [i_4] = var_5;
                        arr_42 [i_2] = var_8;
                    }
                    var_26 = var_6;
                }
                arr_43 [i_2] [i_2] [12] = var_3;
                var_27 = -0;
                var_28 = (min(var_28, (var_2 <= var_6)));
            }
        }
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            arr_47 [i_2] = (var_7 + var_5);
            var_29 = (max(var_29, -var_5));
            arr_48 [i_2] = (var_9 * 16181360227098503591);
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_30 = (min(var_30, -var_8));
            var_31 = (max(var_31, (!var_9)));
            arr_51 [i_2] = var_4;
        }
        arr_52 [i_2] = var_3;
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
    {

        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            var_32 = var_9;
            var_33 = (max((var_0 | var_1), (var_2 ^ var_12)));
            arr_60 [i_15] [i_15] = (min((((((min(var_6, var_9)))) % (var_4 + var_9))), (var_12 == var_13)));
        }
        for (int i_16 = 2; i_16 < 22;i_16 += 1)
        {
            var_34 = (((min(41, 8197388600442838701)) == (min(var_5, (min(var_8, var_5))))));
            var_35 = (max(var_35, var_7));
            var_36 = (min(var_36, ((((2717352958 >> 0) >= (~var_10))))));
        }
        arr_63 [i_14] = var_8;
    }
    var_37 -= var_1;
    var_38 = ((var_0 | (max(var_4, (min(var_11, var_5))))));
    var_39 *= (min(var_0, var_5));
    var_40 *= ((~(!var_0)));
    #pragma endscop
}
