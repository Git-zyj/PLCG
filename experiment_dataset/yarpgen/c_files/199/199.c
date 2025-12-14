/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((-1967578253 ? 235914247286544042 : 7)) ? (74 >= var_5) : (var_6 ^ var_3)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            arr_4 [i_0] = (((arr_0 [i_0]) * (arr_0 [i_0])));

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_2] = ((-(arr_7 [i_1 + 1] [i_1 - 3] [i_1] [i_1 - 3])));
                arr_9 [i_0] [i_1 - 3] = (((((arr_6 [20]) ? -2992173465204541970 : var_10))) ? 1030171621 : (~175));
                arr_10 [i_0] [i_0] [i_2] [i_2] = ((var_8 == (arr_3 [i_1 - 3] [i_1 - 2] [i_0])));
            }
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_12 = var_0;
            var_13 = ((((18768 ? 74 : -1030171622)) > var_2));
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    arr_24 [i_6] [i_0] [i_0] [i_0] = ((!(((7 ? (arr_19 [5] [i_4] [5] [i_6]) : 1405453548)))));
                    var_14 = (max(var_14, (arr_18 [i_0] [i_4] [i_5] [i_6])));
                }
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    var_15 = (max(var_15, 6798149588514452508));

                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        var_16 = 67;
                        var_17 = (-1030171621 >= -var_8);
                        arr_32 [i_0] [i_0] [i_4] [i_5] [12] [i_0] [i_0] = ((!(arr_25 [i_8] [i_7] [i_7 + 1] [1])));
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        arr_36 [i_0] [i_0] [i_4] [i_0] [i_5] [1] [i_9] = (((arr_22 [i_9] [i_7 - 1] [i_4] [i_0]) + 46));
                        arr_37 [i_0] [i_0] [i_4] [0] [i_7] [i_0] [i_0] = 135;
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                    {
                        arr_40 [i_0] [i_4] [i_5] [i_0] [i_5] [i_7 - 1] [17] = ((~(arr_17 [i_0] [i_4])));
                        arr_41 [i_0] = (arr_12 [i_7] [i_7 + 1]);
                        var_18 = (max(var_18, ((((arr_5 [i_7 - 1] [i_7 - 1] [i_10]) ? (((~(arr_5 [i_0] [5] [5])))) : (arr_3 [i_0] [i_4] [i_5]))))));
                        arr_42 [i_0] [i_4] [i_4] [i_0] [i_7 + 1] [i_10] = (((arr_33 [i_4] [i_4] [i_0] [11] [i_7 - 1] [i_4] [4]) + 1183448156));
                    }
                    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                    {
                        var_19 = (((var_2 ? 0 : 0)));
                        var_20 = var_7;
                    }
                }
                var_21 += ((((((arr_26 [i_4] [i_4]) || 248))) << (((arr_33 [i_0] [i_5] [i_4] [i_0] [i_0] [i_5] [i_0]) + 4301580281666913236))));
                var_22 = (max(var_22, (((((((arr_39 [i_0] [i_4] [i_5] [i_4] [i_4]) ? 0 : 1030171621))) ? (arr_38 [i_5]) : var_8)))));
                arr_45 [i_0] [6] [i_0] = -var_7;
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            var_23 = (arr_35 [i_0] [i_12] [i_5] [i_0] [i_0]);
                            var_24 = 41895;
                        }
                    }
                }
            }
            for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
            {
                arr_54 [i_0] [i_4] [i_0] [2] = (((~0) ? (arr_47 [i_0] [i_0] [i_14] [i_0]) : 6798149588514452508));
                var_25 = 49038;
                var_26 = (((~var_5) ? ((-22 ? (arr_49 [i_0] [11] [i_14] [i_14] [i_14]) : var_1)) : (248 != var_4)));
            }
            /* LoopNest 3 */
            for (int i_15 = 4; i_15 < 18;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 20;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 0;i_17 += 1)
                    {
                        {
                            var_27 = -91;
                            arr_64 [i_0] [i_0] [i_4] [i_15] [i_16] [i_17] = (!31);
                            var_28 ^= (((9007199254216704 == var_4) ? (((56751 != (arr_13 [i_0] [i_15 + 2] [i_4])))) : ((10770274128119538902 ? var_2 : -1555896551))));
                            var_29 = (arr_43 [i_16 - 1] [i_15 - 2] [i_15]);
                        }
                    }
                }
            }
            var_30 = 2889513747;
        }
        var_31 = var_7;
        var_32 = (min(var_32, (((arr_20 [8] [i_0] [i_0]) ^ 2889513747))));
    }
    #pragma endscop
}
