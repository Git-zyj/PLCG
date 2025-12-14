/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_13 = ((((max((arr_1 [i_0 + 1] [i_0]), 65535))) ? (arr_1 [i_0 + 1] [i_0]) : ((max((arr_1 [i_0 + 1] [i_0]), var_8)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = ((((((var_6 + 479060372) ? (((arr_6 [i_0 - 1] [i_1] [i_0 - 1]) - 1)) : 47650024))) - (((min(var_11, var_10)) - 2))));
                    arr_7 [i_2] [i_2] [i_1] [0] = (arr_6 [i_0 + 1] [i_1] [i_2]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_10 [i_3] [i_3] = (((arr_9 [i_3]) ? var_1 : 479060369));
        var_15 = ((((((max((arr_4 [i_3] [i_3] [i_3] [i_3]), 479060371))) ? (((-479060369 & (arr_5 [i_3] [i_3] [i_3] [i_3])))) : (((arr_0 [i_3]) ? var_6 : (arr_0 [i_3])))))) ? ((-4756547994645168401 ? (arr_5 [i_3] [i_3] [i_3] [i_3]) : -13)) : ((max((arr_6 [i_3] [i_3] [i_3]), (17 | -4)))));
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_16 = (max(var_16, (arr_12 [i_4] [i_4])));
        arr_13 [i_4] [i_4] = ((((((max(70, (arr_11 [i_4])))) ? 1 : (255 - 3540815118))) <= (((max((max(-2, 7)), (arr_11 [i_4])))))));
        var_17 = ((-43 / (((arr_12 [i_4] [i_4]) ? var_9 : (((arr_12 [i_4] [i_4]) ? (arr_11 [i_4]) : var_7))))));
        var_18 = (((max((arr_11 [i_4]), -1))) ? ((var_1 ? (((-1 ? 65509 : 1))) : ((8106026336528814035 ? var_10 : var_1)))) : ((((((arr_11 [i_4]) + 2147483647)) >> ((((8895757691063477750 ? (arr_12 [i_4] [i_4]) : var_2)) - 2648))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {

        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            var_19 = var_0;
            arr_20 [i_5] [7] = (arr_17 [i_5] [i_5] [i_5]);
            var_20 = (((((arr_17 [i_5] [i_5] [i_6]) == (arr_14 [i_5]))) || (((var_4 ? (arr_16 [i_5] [i_5]) : 1)))));
        }
        arr_21 [i_5] [i_5] &= ((-(!var_2)));
        var_21 = 479060397;
        var_22 = (arr_17 [i_5] [i_5] [i_5]);
    }

    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {
        arr_24 [i_7 - 1] = (max((arr_22 [i_7 - 1]), (arr_23 [i_7 - 1])));
        var_23 = (min(var_23, (arr_22 [i_7 + 2])));
        var_24 = (max(var_24, 1));
    }
    for (int i_8 = 1; i_8 < 15;i_8 += 1) /* same iter space */
    {
        var_25 = ((4135546991 / (arr_19 [i_8 + 1])));
        arr_28 [i_8 + 1] [i_8 + 1] = (((((~(((-3047804364103367488 + 9223372036854775807) << (6194178704348963177 - 6194178704348963177)))))) ? var_6 : (max((min(-3111263414889851043, (arr_26 [i_8] [i_8]))), ((((arr_27 [i_8 - 1]) ? (arr_15 [i_8]) : 62)))))));
        arr_29 [i_8] [i_8] = ((((((43229 ? 5208 : var_1))) >= (max(var_10, 8170623392594099111)))));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 15;i_9 += 1) /* same iter space */
    {
        arr_32 [i_9] [i_9] = -9056;
        var_26 = (max(var_26, ((var_11 ? 8895757691063477767 : (arr_17 [i_9 + 1] [i_9 + 1] [i_9 + 1])))));

        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            arr_35 [i_9] [i_10] [i_9] = ((13077002312587602363 && (((arr_18 [i_9] [i_10] [i_9]) && (arr_19 [i_10])))));

            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                arr_39 [i_9] [i_10] [i_10] = var_11;

                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    var_27 = (max(var_27, 1));
                    var_28 ^= 2619692651321271087;
                    var_29 = (~1);
                }
            }
            arr_42 [i_10] [i_9] [i_9] = (arr_33 [i_10]);
            var_30 = 4135546985;
        }
    }
    #pragma endscop
}
