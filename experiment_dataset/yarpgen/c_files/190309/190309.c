/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(-727150838 + 8)));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_18 = (max(var_18, ((max(18446744073709551607, 191)))));
        var_19 = (max((((64 + ((max(251, (arr_2 [i_0] [i_0]))))))), ((727150850 ? ((121 ? var_11 : 65528)) : 65512))));

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_20 = (68 + var_15);
            arr_6 [i_0] [i_1] = 112;
            arr_7 [i_0] [6] = ((+(max((arr_4 [i_0] [i_1]), 6))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_21 = (((15964 ? (arr_4 [i_0] [i_2]) : 1531698217390034378)) | 63873);
            arr_11 [i_0] = (~(arr_2 [i_0] [i_0 + 1]));
            var_22 = (var_10 & 881020212);
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_23 = ((((((arr_9 [i_0 - 3]) / (arr_9 [i_0 - 3])))) ? ((max(1, 1663))) : 29828));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    arr_22 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0] = var_1;
                    arr_23 [i_5] [16] [16] [i_5] [i_0] = var_8;
                    arr_24 [i_0] [i_0 - 3] [i_0] [i_0] [i_0] [i_0 - 2] = var_2;
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    arr_27 [i_0] [i_6] = ((24 ? (max(var_11, (((8414 ? var_14 : 31))))) : ((191 ? (~var_9) : 3))));
                    arr_28 [i_0] [i_0] [i_4] [i_6] = 217;
                }
                arr_29 [i_0] [i_0] [i_4] = (((((arr_3 [i_0] [i_0]) / var_16)) >= (arr_3 [i_0] [i_0])));
            }
            for (int i_7 = 3; i_7 < 17;i_7 += 1)
            {
                var_24 = (((arr_15 [i_0 - 2] [i_7 - 2]) * 114));
                var_25 = (min(0, 0));
            }

            /* vectorizable */
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                arr_35 [i_0] [i_0] [i_0] = var_0;
                var_26 = 13150895570333985745;
                var_27 = 35707;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_28 = 13295864060147803509;
                            arr_42 [1] [1] [i_8] [i_9] [i_9] [i_0] [i_0] = 103;
                            var_29 *= 0;
                            arr_43 [i_0 - 2] [i_10] [i_8] [6] [i_0] [i_3] = var_3;
                        }
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
        {
            var_30 = ((27 || (((var_13 ? 1 : (arr_33 [17] [i_0 + 1] [i_11] [i_11]))))));
            arr_47 [i_0] [i_11] = (((max(var_10, 18446744073709551615)) > ((((arr_21 [i_0] [i_0 - 3] [1] [16]) ? (arr_21 [i_0] [i_0 - 2] [i_11] [0]) : (arr_1 [i_0] [i_0]))))));
            arr_48 [i_0] [i_0] = -636634293;
            var_31 &= ((var_15 ? (((arr_4 [4] [i_0 + 1]) ? (arr_5 [i_0 - 1] [10]) : var_2)) : ((~(arr_26 [i_0 - 1] [i_11] [i_11])))));
        }
        var_32 = -65432;
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        arr_51 [i_12] = ((~((min(var_0, var_16)))));

        for (int i_13 = 1; i_13 < 1;i_13 += 1) /* same iter space */
        {
            arr_55 [1] [i_12] [11] = ((-var_16 ? ((((arr_54 [i_12] [i_13] [19]) + var_8))) : ((8 ? 48 : 16944242236669557385))));
            arr_56 [i_12] = (min((((0 ^ (arr_53 [1] [i_12] [i_13 - 1])))), var_7));
            var_33 = -var_16;
        }
        /* vectorizable */
        for (int i_14 = 1; i_14 < 1;i_14 += 1) /* same iter space */
        {
            var_34 = (max(var_34, ((((((arr_50 [i_12]) <= var_9))) + 1))));
            var_35 |= (((arr_53 [i_14 - 1] [6] [i_14 - 1]) ? 13041226727877677641 : (arr_53 [i_14 - 1] [1] [i_14 - 1])));
        }
    }
    #pragma endscop
}
