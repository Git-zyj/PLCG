/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    var_16 = (((((((arr_9 [9] [9] [i_2]) + -9702)) | -var_6))) ? (min((var_2 ^ var_2), (arr_1 [i_0] [i_1]))) : -58);
                    var_17 = (((-75 ? -var_2 : (~var_1))));
                }
                var_18 ^= ((!((((((var_9 ? 75 : (arr_4 [i_0])))) ? (((arr_1 [i_1] [i_0 + 2]) & 81)) : (~-9702))))));
                var_19 = ((((((var_5 ? 0 : 17)) % (((var_14 ? 75 : (arr_8 [i_1])))))) | ((((arr_4 [i_0 + 2]) ? (((arr_5 [i_0]) ? (arr_4 [i_1]) : 73)) : ((73 ? -105 : -9406)))))));
            }
        }
    }

    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = ((var_7 ? var_10 : -26139));
        arr_14 [i_3] [i_3 - 1] = ((((arr_3 [i_3]) >= (arr_4 [i_3 + 1]))));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 8;i_4 += 1) /* same iter space */
    {
        var_20 = var_13;
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 6;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 8;i_8 += 1)
                        {
                            {
                                arr_27 [i_4] [i_5] [i_7 - 1] [i_8 + 2] |= ((((-53 ? -85 : (arr_7 [i_4] [i_4]))) - ((var_4 + (arr_20 [i_8] [i_7 - 2] [i_6])))));
                                arr_28 [i_7] [i_7] [i_6] [i_5] [i_4] = (~-103);
                                var_21 = (min(var_21, (((-58 && ((((arr_7 [i_6 - 2] [i_4]) ? 9223372036854775807 : (arr_10 [i_8])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 9;i_10 += 1)
                        {
                            {
                                var_22 = 72057593501057024;
                                var_23 -= 136;
                                arr_36 [i_4] [i_4] [i_6] [i_10] [i_10] = -1243818178;
                                var_24 |= (!-876624947);
                            }
                        }
                    }
                }
            }
        }
        var_25 -= (((((1 ? 18374686480208494591 : var_13))) ? (((arr_3 [i_4]) ? 75 : (arr_23 [i_4] [i_4] [i_4] [i_4]))) : var_6));
        var_26 = ((31 ? -108 : (arr_31 [i_4] [i_4 - 2] [5] [i_4] [i_4] [i_4])));
        var_27 &= (~1);
    }
    for (int i_11 = 4; i_11 < 8;i_11 += 1) /* same iter space */
    {
        var_28 = (min(var_28, (((~((((arr_34 [i_11] [i_11 - 4] [i_11] [i_11 + 1] [i_11 - 3] [i_11 - 3]) && (arr_12 [i_11] [i_11])))))))));
        arr_39 [4] = (((!8493708047183880707) ? ((min(var_8, var_4))) : 110));
    }
    /* vectorizable */
    for (int i_12 = 2; i_12 < 23;i_12 += 1)
    {
        var_29 = (min(var_29, (arr_41 [i_12 - 1])));
        arr_42 [i_12] = (arr_41 [i_12]);

        for (int i_13 = 1; i_13 < 24;i_13 += 1)
        {
            var_30 = ((!var_13) ? (arr_41 [i_12]) : ((var_12 << (1160479475 - 1160479443))));
            var_31 = (((-9992 / (arr_43 [i_13] [i_12] [i_12]))));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 24;i_15 += 1)
                {
                    {
                        var_32 &= ((~((var_14 >> (-18 + 31)))));
                        var_33 = (max(var_33, (((arr_44 [i_13] [10]) ? (arr_44 [i_12] [10]) : var_9))));
                        var_34 += ((!(arr_43 [12] [i_13 - 1] [i_15 + 1])));
                    }
                }
            }
            arr_53 [i_13] [i_12] [i_13] = ((arr_43 [i_13] [i_13] [i_13]) ? -1160479485 : ((127 >> (127 - 96))));
            arr_54 [i_12] [i_13] = (((arr_47 [i_13 - 1] [i_12 - 1]) & (arr_40 [i_13 - 1] [i_12 - 1])));
        }
        arr_55 [i_12 + 1] = 249;
    }
    var_35 = (max(var_35, (((((((min(3293074198, var_3))) && (((378589253 ? var_10 : 16)))))) + (~var_9)))));
    #pragma endscop
}
