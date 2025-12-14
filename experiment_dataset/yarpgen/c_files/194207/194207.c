/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_17 = ((var_8 ? 2461 : 0));
            var_18 = (min(var_18, (~var_1)));
            var_19 = ((-(arr_0 [i_0])));
        }
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_20 = (min(var_20, (((((25967 >> (var_10 - 2085010557))) < (arr_6 [9]))))));
        var_21 = (min(var_21, (((((min((((var_7 && (arr_7 [i_2] [i_2])))), var_5))) ? 25967 : (arr_6 [7]))))));
        arr_8 [i_2] = var_7;
        arr_9 [i_2] = ((var_10 < ((var_14 ? (((max(25, 6)))) : var_3))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_22 = (((((~(arr_10 [i_3])))) ? (((arr_10 [i_3]) ? (arr_10 [i_3]) : (arr_10 [i_3]))) : (((arr_10 [i_3]) >> (((arr_10 [i_3]) - 24645))))));
        arr_12 [i_3] [i_3] = (((0 | var_12) ? ((-var_1 ? (arr_10 [18]) : ((var_7 ? var_1 : var_4)))) : ((16267 ? 1 : 3840))));
    }
    var_23 = ((((min((-6700790409933036181 && 64), ((var_4 ? var_8 : var_8))))) ? ((var_12 ? var_13 : (var_12 - var_14))) : (max(((var_11 ? var_10 : var_11)), (~var_11)))));

    /* vectorizable */
    for (int i_4 = 3; i_4 < 11;i_4 += 1)
    {
        var_24 = ((11284 ? 25967 : -2883807229017355853));
        var_25 = (min(var_25, ((((arr_0 [i_4 - 2]) ? (arr_0 [i_4 - 2]) : var_12)))));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_26 = (((((~((max(var_8, var_15)))))) - (1 ^ 4294967285)));
        var_27 = (((-17 && 7) ? (arr_17 [i_5]) : ((3450332216533856178 ? (arr_17 [i_5]) : (arr_17 [i_5])))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        arr_23 [i_6] = (((arr_10 [i_6]) ? (arr_7 [i_6] [i_6]) : var_0));
        arr_24 [i_6] = -var_3;
    }
    for (int i_7 = 1; i_7 < 15;i_7 += 1)
    {
        var_28 = ((-(((arr_21 [i_7 + 1]) >> ((((var_2 ? (arr_25 [0]) : var_7)) - 19824))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    var_29 -= (min(54597, (arr_27 [i_7 - 1])));

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_30 = var_9;
                        var_31 = var_13;
                        var_32 -= (arr_35 [i_8] [i_8] [i_8] [3]);
                        arr_37 [12] [12] [i_7] [i_7] = ((~((((max(var_8, (arr_29 [i_8])))) ? (arr_5 [i_7 - 1]) : ((((var_2 < (arr_34 [i_8] [i_10])))))))));
                    }
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        arr_40 [i_7] [i_9] [i_7] [i_7] = (min(var_8, ((((max(49446, (arr_26 [i_8] [i_8])))) >> (2123263622655052833 + 388166654)))));
                        var_33 = ((-(((arr_30 [i_11] [i_8]) | var_2))));
                        arr_41 [i_11] [i_11] = ((((((arr_34 [i_7 + 1] [i_7 - 1]) | var_13))) ? (max(var_16, (arr_29 [12]))) : (((((arr_11 [i_7 - 1]) > (arr_11 [i_7 + 1])))))));
                        arr_42 [i_8] [i_8] [i_9] [1] [11] [i_11] = ((-var_14 ? var_12 : (arr_7 [3] [i_8])));
                    }
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_34 = (((((arr_33 [i_7 - 1]) ? var_5 : var_2)) >> (((arr_33 [i_7 - 1]) - 16611))));
                        var_35 -= (((((arr_31 [i_7 + 1] [i_8] [1]) ? (((var_10 ? (arr_34 [i_12] [i_12]) : var_2))) : var_13)) | ((((arr_29 [i_12]) - (arr_29 [i_7 + 1]))))));
                        arr_47 [i_9] = (((arr_38 [i_7] [i_8]) ? (((19308 ^ var_16) ? (arr_27 [i_7 - 1]) : (((arr_1 [i_7] [i_12]) ^ (arr_31 [12] [12] [12]))))) : (((17719 ^ (arr_25 [i_8]))))));
                    }
                }
            }
        }
        var_36 = var_13;
    }
    #pragma endscop
}
