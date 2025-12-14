/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (arr_2 [i_1] [i_0]);
                var_14 -= (min(((51404 ? var_1 : (arr_2 [i_1] [i_1 - 3]))), ((((arr_2 [i_1 + 1] [i_1 + 1]) ? (arr_2 [i_1] [i_1 + 1]) : (arr_2 [i_1] [i_1 - 3]))))));
            }
        }
    }
    var_15 -= 3583920034670293971;
    var_16 = (((((-740793449 ? var_12 : (~var_3)))) ? (min((5045028168521838589 == var_6), ((-9223372036854775802 ? var_9 : var_1)))) : (((var_5 ? var_3 : (!-867371803))))));

    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {

            /* vectorizable */
            for (int i_4 = 2; i_4 < 8;i_4 += 1)
            {
                var_17 = ((((81 ? var_12 : -573912969960878084)) + (!var_3)));
                arr_16 [i_4] [i_3] [i_3] [i_2] = (((arr_8 [i_3] [2]) && 14));
            }

            /* vectorizable */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                arr_19 [4] [i_3] [0] [i_3] = (var_9 ? (arr_8 [i_3 + 1] [i_3 - 1]) : (!var_1));
                var_18 += -6320799078997964815;
            }
            arr_20 [i_3] = (4 != 3086831048067796939);
            var_19 = (min(((2147483634 ? 1 : 15)), (((arr_4 [i_3 + 1]) ? (var_10 >= var_4) : ((6 ? 0 : (arr_3 [i_3])))))));
        }
        var_20 = 733792239;
        arr_21 [i_2] [i_2] = ((-(((!var_1) ? 251 : var_1))));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] = ((((arr_8 [i_6] [i_6]) ? (arr_8 [i_6] [i_6]) : (arr_8 [i_6] [i_6]))));
        arr_25 [i_6] = var_0;

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_21 -= 44;
            arr_30 [i_6] [1] [i_7] = -var_12;
            var_22 = var_4;
        }
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            var_23 = var_8;
            arr_34 [11] [i_8] [i_8 + 1] = (((max((arr_32 [i_8] [i_8 - 2]), (((var_7 ? 184 : (arr_1 [i_8])))))) >= ((((1366937573 ? (arr_33 [i_6] [i_8] [i_8]) : var_3))))));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            var_24 = ((((((~15607063735904292313) ? (arr_23 [i_10]) : var_6))) ? var_6 : ((~((-1631188465 ? (arr_41 [i_6] [i_8] [5] [2] [i_11]) : (arr_6 [i_11])))))));
                            arr_44 [i_6] [i_8] [i_8] [i_9] [i_10] [i_8] [i_11] = (max((((arr_13 [i_8 + 1] [i_8] [i_10 + 1]) ? (arr_13 [i_8 - 2] [i_8] [i_10 - 1]) : (arr_13 [i_8 - 1] [i_8] [i_10 - 1]))), (115 == 3649429360)));
                            arr_45 [i_8] [i_10] [i_8] = (((((~(arr_29 [i_9])))) ? (-232 & -408016141) : 1));
                            var_25 = (arr_9 [10] [1]);
                        }
                    }
                }
            }
        }
        var_26 = (-2095451025 ? ((4236593871 ? (arr_39 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) : (min(3101501404, 9223372036854775807)))) : 242);
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 9;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                {
                    arr_54 [i_13] [i_13] = (arr_42 [i_12] [i_13] [i_14]);
                    var_27 = var_7;
                }
            }
        }
        arr_55 [i_12] [6] = var_7;
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 11;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 11;i_16 += 1)
            {
                {
                    var_28 = (max(var_28, -1));
                    var_29 = (((((var_10 ? (arr_10 [i_15]) : var_8))) ? -20651 : ((-(arr_47 [i_12])))));
                    var_30 = (((((-20747 ? var_8 : var_11))) ? -3224760601619597973 : ((6320799078997964815 ? 71 : -20399))));
                }
            }
        }
        arr_61 [6] = var_11;
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 12;i_17 += 1)
    {
        var_31 = ((var_8 ? (((~(arr_14 [i_17] [i_17] [i_17])))) : (((arr_6 [11]) ^ 45261))));
        var_32 = (arr_6 [i_17]);
    }
    var_33 = var_4;
    #pragma endscop
}
