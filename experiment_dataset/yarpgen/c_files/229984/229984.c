/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = max((((((var_4 ? (arr_4 [i_0] [i_0]) : 255))) ? (arr_2 [i_0] [i_1 - 3]) : (6 >= var_1))), ((var_4 ? (arr_0 [i_0]) : -var_8)));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_14 = (min((~var_9), ((min(var_7, 28646)))));
                            arr_13 [20] [i_2] [20] [i_3] = ((var_3 >> (((~250) + 281))));
                            arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] = ((~((((arr_11 [i_2] [i_2] [i_0] [i_2] [i_1] [i_0]) >= (arr_11 [i_0] [i_1 - 2] [13] [i_1 - 2] [i_3 + 1] [i_3]))))));

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                arr_17 [i_1] [i_1] [i_2 - 1] [i_2 - 1] [i_3] [i_2] [i_1] = var_4;
                                arr_18 [i_2] [21] [21] [i_3 + 1] [i_4] [i_3] [i_3] = var_8;
                                var_15 = var_7;
                                arr_19 [i_0] [i_2] [i_2] [10] [9] = (((~var_0) < (arr_7 [i_2])));
                            }
                            for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_2] = 30720;
                                var_16 = ((5 ? (((((3562923223 ? 6 : -536870912))) ? 250 : -15)) : 3715778251));
                            }
                            for (int i_6 = 3; i_6 < 21;i_6 += 1) /* same iter space */
                            {
                                var_17 = (min(var_17, (((34815 ? 34809 : 30723)))));
                                var_18 = 63;
                                var_19 = 917504;
                                arr_26 [16] [16] [i_2] [i_3] [i_6] = var_0;
                                arr_27 [i_2] [i_2] [i_1] [i_2] = ((0 ? (var_0 - var_7) : 4294967295));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 22;i_7 += 1)
                            {
                                arr_31 [i_2] [i_2] [i_7] = (-var_0 % 1072790500);
                                arr_32 [i_7] [i_2] [i_2 - 2] [i_2 - 1] [i_2] [16] = (((arr_25 [i_1 - 1] [i_1 - 1] [i_2] [i_3] [i_3]) / (arr_6 [i_1] [i_1])));
                                var_20 = (~28646);
                            }
                        }
                    }
                }
                arr_33 [i_0] [i_1 + 2] [i_1 + 2] = (~2147483648);
            }
        }
    }
    var_21 = (((((var_2 / (((min(var_3, var_4))))))) || 2147475456));
    var_22 = (((var_1 ? var_1 : (var_8 / 95061398))));

    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        var_23 -= ((((var_5 ? (arr_10 [i_8 - 1] [i_8 - 2] [i_8 + 3] [i_8 + 2]) : -113)) <= (40563 < -536870912)));
        arr_36 [i_8] [i_8] = ((+(max((4205544199 - var_2), ((64963 ? 29585 : 3897000901))))));
        arr_37 [14] [i_8] = ((-2 | ((((min(2147483645, 243))) ? 1345329790 : (((107 ? var_11 : 107)))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {

                    for (int i_11 = 1; i_11 < 16;i_11 += 1) /* same iter space */
                    {
                        arr_47 [i_9] [i_8] [i_8] [i_11] = var_2;
                        var_24 = (((((((min(30734, var_11))) ? var_5 : -813124304))) ? (-28 - -1) : (max((arr_41 [i_8] [i_9] [i_10] [i_11]), (arr_41 [i_8] [12] [i_10] [i_10])))));
                        arr_48 [i_8] [i_9] [i_8] [i_8] [i_11] [i_11] = (((27 - 2147483645) <= (((4294967295 - var_9) ? 2949637509 : (arr_12 [i_11 + 1] [i_9] [i_10] [i_11])))));
                    }
                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 16;i_12 += 1) /* same iter space */
                    {
                        arr_53 [i_8] [i_9] [i_8] [i_10] [i_12] = (arr_15 [i_8] [i_8] [i_8 - 1] [i_8] [i_12]);
                        arr_54 [i_8] [i_8] [i_9] [i_10] [i_10] = -51214;
                        var_25 = (((arr_44 [i_8 + 3] [i_8 - 1] [i_12 + 1] [i_12 - 1]) ? (((arr_9 [21] [8] [i_10] [i_12]) ? 2147483638 : var_5)) : var_2));
                    }
                    arr_55 [i_8] [i_10] [12] [i_10] = -159;
                    arr_56 [i_8] [i_9] [i_8] = (((((2147483647 ? var_2 : var_0)))) ? ((((~var_4) ? (var_2 != 572068019) : -var_6))) : var_2);
                }
            }
        }
        arr_57 [i_8] = ((-(min(2075659739, (arr_34 [i_8])))));
    }
    #pragma endscop
}
