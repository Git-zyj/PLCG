/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [7] [i_2] [i_2] [i_3] [i_2] = (max(((((min(var_8, -2546065889375868616)) >= var_4))), 432843562));
                                arr_14 [i_0] [i_0] [i_0] [i_4] = (((min(var_12, (arr_2 [i_3])))) ? (((var_6 & (var_5 | var_12)))) : var_14);
                                arr_15 [i_2] [i_1] [i_2] [i_4] = (min(var_4, (~1588570617)));
                            }
                        }
                    }
                    arr_16 [i_2] = ((((max(1, (arr_6 [i_0] [i_0] [i_1] [i_0] [i_2])))) ? (min(1594227950, -22052)) : (arr_6 [i_0] [i_1] [i_1] [i_2] [10])));
                    arr_17 [i_0] [i_2] = (var_6 & var_11);
                    arr_18 [i_0] [i_0] [i_2] = var_15;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] = ((arr_19 [i_5] [i_5]) ? ((var_4 ? (arr_20 [12]) : (arr_20 [i_5]))) : (~var_1));
        arr_22 [1] = ((var_14 > (min((!-1523363896), (arr_19 [i_5] [i_5])))));
        arr_23 [i_5] = (arr_20 [6]);
        arr_24 [i_5] = (((!3863047490) ? (((arr_20 [i_5]) ? (arr_20 [i_5]) : (arr_20 [i_5]))) : ((max(37807, (arr_20 [i_5]))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {
        arr_28 [i_6] [i_6] = ((31 ? (arr_19 [i_6] [i_6]) : var_4));
        arr_29 [12] = (((arr_25 [i_6]) ? -var_6 : ((var_1 ? var_2 : var_11))));
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
    {
        arr_34 [i_7] [i_7] = (arr_27 [i_7]);
        arr_35 [i_7] = -152;
    }

    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        arr_38 [i_8] = ((var_14 || ((!(!var_6)))));
        arr_39 [i_8] [i_8] |= (((((((max(33372, -1594227950))) ? var_14 : var_4))) && ((((((arr_0 [i_8]) && 11136722837824209732)) ? (((var_9 ? 23143 : var_4))) : ((8639 ? -1651957698 : 2546065889375868629)))))));
        arr_40 [i_8] [i_8] = ((27701 >> (1594227945 - 1594227936)));
        arr_41 [i_8] = var_1;
        arr_42 [i_8] [i_8] = ((((1 ? (arr_37 [i_8] [i_8]) : var_6)) | var_2));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
    {
        arr_45 [12] = ((((((arr_44 [i_9]) ? 27701 : -2546065889375868616))) ? ((((arr_27 [i_9]) ^ -7038185627570871246))) : ((var_5 ? var_3 : (arr_31 [8] [8])))));
        arr_46 [i_9] [6] = arr_30 [i_9];
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
    {
        arr_50 [i_10] [10] = (min((~var_17), (((var_3 ? var_11 : (arr_44 [i_10]))))));
        arr_51 [i_10] [i_10] = (max((((-103 ? (arr_27 [i_10]) : (arr_44 [i_10])))), (max((((var_2 ? var_12 : var_9))), ((var_16 ? var_12 : (arr_19 [i_10] [i_10])))))));
        arr_52 [i_10] = ((((min((arr_25 [i_10]), -1594227946))) || (((var_9 ? ((min(var_10, var_9))) : (arr_32 [i_10]))))));
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        arr_55 [i_11] = (((((arr_32 [i_11]) ? var_4 : (arr_32 [i_11]))) ^ (!var_5)));
        arr_56 [i_11] = (-3414679954567992653 & 1441783524);
        arr_57 [i_11] = (((max(33, -1)) + var_2));
    }
    var_18 = (min(-30693, -1));
    var_19 = ((var_7 ? var_2 : (((((61440 ? -96 : var_6))) ? ((var_14 ? 230 : var_2)) : ((min(var_0, 253)))))));
    #pragma endscop
}
