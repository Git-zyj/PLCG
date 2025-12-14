/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((min((min(436237632, var_13)), var_11)));
    var_18 -= (min((~15786421483838796683), var_14));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] = (((arr_2 [i_1 + 2] [i_1 + 3]) ? var_6 : 1));
            arr_5 [i_0] = arr_0 [i_0];
        }
        for (int i_2 = 1; i_2 < 8;i_2 += 1) /* same iter space */
        {
            var_19 = (arr_0 [i_0]);
            var_20 = (1 ? (arr_3 [i_2 - 1] [i_2 + 1]) : -18446744073709551609);
            var_21 = 1;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_22 ^= (arr_9 [1] [i_2 + 1] [i_3]);
                            var_23 = (arr_13 [i_0] [i_3] [i_4 - 3] [i_5]);
                        }
                        var_24 = -14;
                        arr_17 [i_0] [i_0] = (arr_16 [10] [1] [i_3] [i_3] [i_3]);
                        var_25 = (min(var_25, ((((arr_16 [0] [1] [0] [i_4 + 2] [i_4]) ? (arr_2 [i_2 - 1] [i_4 + 1]) : 63430)))));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_26 |= 1;
            arr_21 [i_0] = ((-((-1 ? 1 : 7192573463822881058))));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            arr_24 [i_0] = 0;
            arr_25 [i_0] [i_0] = (5010 ? (arr_7 [i_0] [i_0] [i_7]) : (arr_14 [i_0] [i_0] [i_0] [1]));
            arr_26 [i_0] [i_0] [i_0] = 1;
            var_27 = (min(var_27, (arr_13 [i_0] [i_0] [i_0] [i_0])));
            var_28 = -var_5;
        }
        arr_27 [i_0] = (((arr_14 [i_0] [i_0] [i_0] [i_0]) ? ((-(arr_3 [i_0] [i_0]))) : var_16));
        var_29 = (((arr_13 [i_0] [i_0] [i_0] [i_0]) ? 13754747924671924818 : (((arr_14 [i_0] [i_0] [i_0] [i_0]) ? 288230376151711744 : var_2))));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        arr_31 [i_8] = (((((((((arr_29 [i_8]) ? (arr_29 [i_8]) : (arr_30 [i_8])))) ? ((((!(arr_29 [i_8]))))) : 15932822846928480305))) ? ((((!(((~(arr_30 [i_8])))))))) : ((((min((arr_29 [i_8]), var_15))) ? ((1 ? -29984 : var_0)) : (((~(arr_30 [i_8]))))))));
        var_30 = (min((~4148053027), (min(((1820845425 ? var_6 : (arr_28 [i_8]))), (!1)))));
        var_31 -= var_12;
        arr_32 [i_8] [i_8] = ((((~((0 ? -1 : -17107))))) ? ((var_5 ? (arr_29 [i_8]) : var_13)) : var_3);
    }
    for (int i_9 = 0; i_9 < 0;i_9 += 1) /* same iter space */
    {
        var_32 = (((arr_33 [i_9]) ? (((((~(arr_33 [i_9])))) ? var_9 : var_9)) : 1));
        var_33 |= 255;
        var_34 += ((0 ? -1 : (min((((((arr_34 [i_9] [13]) + 2147483647)) >> (((arr_33 [i_9 + 1]) - 2028036693002636347)))), ((var_4 ? 63636 : (arr_34 [i_9] [i_9 + 1])))))));
    }
    for (int i_10 = 0; i_10 < 0;i_10 += 1) /* same iter space */
    {
        var_35 = (min(var_35, ((max(((((arr_33 [i_10 + 1]) ? 1 : 33304))), ((((arr_36 [i_10] [i_10]) ? 0 : (arr_35 [i_10])))))))));
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 24;i_12 += 1)
            {
                {
                    var_36 = (arr_34 [1] [i_12]);
                    var_37 += (max((((arr_37 [16] [i_12 - 2]) - (arr_39 [i_10 + 1]))), 12750810865730075507));
                    var_38 = (min(var_38, (arr_34 [i_10] [i_10])));
                    var_39 = (arr_34 [i_11] [i_12]);
                }
            }
        }

        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            arr_46 [i_10] [17] [i_10] = var_16;
            var_40 = (min(var_40, (((~((3 ? (arr_44 [i_10] [i_10] [i_13]) : (!var_9))))))));
            var_41 = (min(var_41, (((((min((arr_42 [i_10 + 1] [i_10 + 1] [i_10 + 1]), (arr_42 [i_10 + 1] [19] [i_10 + 1])))) ? var_2 : (arr_42 [i_10 + 1] [i_10] [i_10 + 1]))))));
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 22;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 22;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 21;i_16 += 1)
            {
                {
                    var_42 = var_5;
                    arr_53 [i_16] [i_14] [i_14] = ((max(0, (arr_52 [i_14] [i_15] [i_15] [1]))));
                }
            }
        }
    }
    #pragma endscop
}
