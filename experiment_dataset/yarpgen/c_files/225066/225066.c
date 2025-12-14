/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -767741840;
    var_19 ^= 171;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_20 = (max(var_20, var_14));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_1] = ((var_11 * (var_17 < var_7)));
                            var_21 = (min(var_21, var_2));
                            arr_15 [i_0] = ((var_14 ? var_15 : (arr_3 [i_0] [i_0 + 1] [i_2])));
                            var_22 = (((((-(arr_10 [i_0] [i_1] [i_2] [i_4])))) ? var_8 : var_13));
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_20 [i_0] [i_5] [i_3] [i_2] [i_1] [i_1] [i_0] = (((((472191865 ? 7841263720753063207 : 472191865))) ? (arr_6 [i_0] [i_0]) : (arr_4 [i_0 - 2] [i_0 + 1])));
                            var_23 = var_11;
                        }
                        arr_21 [i_0] [i_0] [i_0] [i_0] = (arr_10 [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_0 + 1]);
                    }
                }
            }
        }
        var_24 = ((var_2 ? var_7 : 15785));

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_26 [i_6] [i_0] [i_0] = var_8;
            var_25 = (min(var_25, (~35184363700224)));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_26 = var_0;
            arr_29 [i_0] = (((arr_12 [i_0] [i_7] [i_7] [i_0] [i_0] [i_0] [i_0]) & (~var_9)));
            var_27 = var_15;
            var_28 = var_11;
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_32 [i_0] [i_0] = 0;
            var_29 *= (((arr_27 [i_0 - 2]) ? (arr_22 [i_0 - 2]) : (arr_22 [i_0 - 2])));
            var_30 *= var_16;
            arr_33 [i_0] [i_8] = -2023678575;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    {
                        arr_40 [i_0] [i_0] [i_9] [i_0] [i_0] [i_0] = ((var_8 || (((var_6 >> (var_1 + 21151))))));
                        arr_41 [i_0] [i_9] [i_9] = (~var_2);
                        arr_42 [i_0] [8] [7] [i_8] = var_17;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 24;i_11 += 1)
    {
        var_31 -= ((var_11 ? (arr_43 [i_11 + 1]) : (((arr_44 [i_11]) & var_14))));
        var_32 = (((((3966640686 ? 1 : 57732))) != (((-2147483647 - 1) & 2485504873))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {

        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            arr_51 [21] = var_2;
            var_33 = (1 != 244);
        }
        for (int i_14 = 3; i_14 < 22;i_14 += 1)
        {
            arr_55 [i_12] = (((var_4 ? var_1 : var_0)));
            var_34 |= (((((576460752303423472 ? var_3 : var_1))) ? var_15 : -0));
        }
        var_35 = (min(var_35, (((((var_9 ? var_9 : -8887169388335325561))) ? (((arr_54 [i_12] [i_12]) ? (arr_43 [i_12]) : 1684060451)) : var_1))));

        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            var_36 = var_2;
            var_37 = (((((0 << (3569827036 - 3569827006)))) ? ((var_16 ? var_16 : 328326609)) : (arr_47 [i_12])));
            var_38 = (max(var_38, ((((arr_57 [i_15] [i_12]) ? (arr_57 [i_15] [i_12]) : (arr_57 [i_12] [i_15]))))));
        }
    }
    /* vectorizable */
    for (int i_16 = 3; i_16 < 19;i_16 += 1)
    {
        var_39 = (max(var_39, (((var_7 << (((arr_44 [i_16 - 3]) + 669770714)))))));
        /* LoopNest 3 */
        for (int i_17 = 3; i_17 < 19;i_17 += 1)
        {
            for (int i_18 = 4; i_18 < 20;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 21;i_19 += 1)
                {
                    {
                        arr_70 [i_17 + 1] [i_17 + 1] = var_17;
                        var_40 &= (((arr_43 [i_16]) ? ((var_12 ? var_9 : (arr_47 [3]))) : ((var_10 ? var_3 : (arr_60 [i_18] [1])))));
                    }
                }
            }
        }
        var_41 = (arr_67 [i_16] [6]);
        arr_71 [i_16 - 1] |= var_2;
    }
    #pragma endscop
}
