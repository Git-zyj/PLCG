/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((-((min(21479, var_9))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = (max(var_12, (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = -6568627400414066393;

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_1] = var_1;
            var_13 = ((-(var_3 ^ -6568627400414066393)));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((44056 ? (arr_8 [i_3] [i_3] [i_1]) : (((arr_8 [i_3] [i_2 + 1] [i_2 - 1]) ? (arr_8 [i_2] [i_2 + 3] [i_1]) : var_5))));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_19 [16] [i_1] [i_1] [i_1] = -34;
                            var_14 += ((((((-(arr_5 [7] [i_3] [i_2 + 4]))) + 2147483647)) << (var_9 - 4)));
                            var_15 = var_4;
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_16 = (min(var_16, ((min((arr_13 [i_2 + 4]), (arr_13 [i_2 - 1]))))));
                            arr_24 [i_5] = (arr_20 [13] [i_1] [i_1] [i_1] [i_5] [i_1]);
                            arr_25 [4] [i_5] [i_2] [i_2] [i_3] [i_2] = -var_4;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            arr_30 [i_0] [i_1] [7] [i_2] [6] [i_6] [i_6] = ((max(-34, (arr_22 [i_2 + 3] [i_2 + 2] [i_2 + 3]))));
                            var_17 = (min((arr_13 [0]), var_5));
                            arr_31 [i_1] &= 21479;
                            var_18 = ((~(((!((var_9 != (arr_4 [i_3] [i_1]))))))));
                        }
                    }
                }
            }
        }
        var_19 = var_5;
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        arr_34 [i_7] &= (((arr_33 [i_7]) % (min(3971671985, -6568627400414066393))));
        var_20 = (arr_33 [i_7]);

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_38 [i_7] [3] = ((-(~16382)));
            var_21 = ((-(((-65535 + 2147483647) << (!65535)))));
            var_22 += -35408;
        }
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            arr_45 [i_9] [i_9] [i_10] = (arr_41 [i_9] [i_9] [i_9]);
            var_23 += -1593485328;
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            var_24 = (min(var_24, (arr_40 [i_11])));
            arr_48 [i_11] = ((-(arr_40 [i_9])));
        }
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            var_25 = ((-(min(var_9, (arr_41 [i_12] [i_12] [i_9])))));
            var_26 = (max(var_26, 9));
        }
        arr_51 [1] = ((!((!(arr_44 [i_9] [i_9])))));
        arr_52 [i_9] [i_9] = ((-(max(7, ((1 ? (arr_46 [i_9] [14]) : 0))))));
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 3; i_15 < 15;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 15;i_16 += 1)
                {
                    {
                        arr_65 [8] [i_16] [i_15] [i_14] [i_13] = ((((max(-2618620400703242066, 44056))) ? var_4 : (~62843)));
                        var_27 = (max(var_27, (((((((!0) ^ ((-4254053289287161437 ? (arr_1 [i_13]) : (arr_4 [i_16] [0])))))) ? (-6568627400414066393 <= -39) : (max((arr_33 [i_15 + 2]), (arr_55 [i_16 - 1]))))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 0;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 17;i_18 += 1)
                {
                    {
                        var_28 = (min(var_28, ((max(-6568627400414066393, (min((arr_22 [i_17 + 1] [i_18] [i_18]), (arr_22 [i_17 + 1] [i_17] [i_18]))))))));
                        var_29 = (min(var_29, (((((!var_6) & (arr_28 [i_17 + 1] [i_17] [i_17] [i_14])))))));
                    }
                }
            }
        }
        var_30 = (!-26094);
        var_31 += arr_23 [i_13] [i_13] [i_13] [i_13] [i_13];
        var_32 += ((((156 - (arr_40 [i_13]))) & ((min(-1, (!231542456))))));
        var_33 = (-((-2792330006718014614 + (arr_15 [i_13] [i_13] [i_13] [i_13] [i_13]))));
    }
    #pragma endscop
}
