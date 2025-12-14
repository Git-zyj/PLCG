/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 = ((((((((max(11318, var_9)))) | ((2280848938 ? var_11 : var_3))))) > -8379710511662908180));
    var_17 = (~-1099754167);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (255 < 1);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_18 += 27;
            var_19 = ((var_12 ? var_13 : (((56 << (229334494 - 229334470))))));
            var_20 = ((!(arr_2 [i_0 + 2])));
        }

        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            var_21 = ((5220412545083574710 ? 1322797937 : var_13));
            var_22 = (arr_8 [i_0 + 1]);
            var_23 = (max(var_23, var_10));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_14 [i_0] [i_0 + 1] = var_12;
            var_24 = (((!8379710511662908191) ? ((((!(arr_12 [i_0 + 1] [i_0] [i_0]))))) : var_13));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_25 = (arr_16 [i_4]);
            var_26 = ((242 ? 57 : 127));

            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                var_27 ^= (arr_19 [i_6] [i_6]);
                var_28 += ((var_2 > (!var_2)));
            }
            for (int i_7 = 3; i_7 < 22;i_7 += 1)
            {
                arr_23 [1] [i_5] [i_4] [19] = (arr_20 [i_7] [i_7 - 1] [i_7 + 1]);
                var_29 = (max(var_29, (!34)));
                arr_24 [i_4] [22] [i_5] [i_7 - 3] |= (((arr_20 [i_7 - 2] [i_7 + 1] [i_7 - 1]) ? 0 : (arr_22 [i_7] [6] [i_7 + 1] [i_7 - 1])));
                arr_25 [6] [i_5] [i_5] |= (((arr_22 [i_4] [1] [i_4] [i_7 + 1]) + 58259));
            }
        }
        for (int i_8 = 2; i_8 < 22;i_8 += 1)
        {
            var_30 |= 2972169359;
            var_31 = (max(var_31, ((((arr_21 [i_4] [i_8 + 1]) & var_0)))));
            var_32 = (max(var_32, (((!(arr_26 [12] [i_8 + 1] [i_8 - 1]))))));

            for (int i_9 = 1; i_9 < 22;i_9 += 1)
            {
                var_33 = 67108863;
                arr_31 [18] [i_4] [i_9] = ((!(arr_21 [i_8 - 1] [i_8 - 2])));
                arr_32 [i_4] [i_8] = (arr_18 [i_4]);
                var_34 = (max(var_34, (var_14 || var_13)));
            }
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    var_35 = (+(((arr_15 [i_4] [i_4]) ? (arr_18 [i_11]) : -5094265233669346237)));
                    arr_39 [4] [4] [i_4] [16] = ((!(arr_15 [i_4] [i_4])));
                    var_36 = (max(var_36, -var_11));
                }
                var_37 = var_1;
            }
        }
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            arr_42 [i_4] [i_12] = var_5;
            arr_43 [i_4] [i_4] [i_4] = ((var_7 ? var_3 : var_8));
            var_38 = ((var_11 ? (~var_10) : var_12));
            var_39 = (!5997517439377869550);
        }
        for (int i_13 = 2; i_13 < 20;i_13 += 1)
        {

            for (int i_14 = 1; i_14 < 20;i_14 += 1)
            {
                var_40 |= (((((arr_30 [i_13] [i_13] [i_13 - 1] [i_13]) - 1)) < (arr_15 [i_13 + 1] [i_13])));
                arr_52 [i_4] [i_13] = ((-(arr_20 [i_4] [i_4] [i_14])));
                arr_53 [i_4] [i_4] [i_4] [i_14] = var_12;
                arr_54 [i_4] [i_13] = ((!(((65519 ? var_0 : var_6)))));
            }
            arr_55 [i_4] [i_4] [i_4] = ((~54) ? (arr_35 [i_4] [i_13] [i_4] [i_13 + 2] [5] [i_13 - 2]) : (~6));
            var_41 = ((~(arr_19 [i_4] [i_13 - 1])));
            arr_56 [i_4] [i_4] = (arr_33 [i_4] [i_13 - 2] [i_13 + 1]);
        }

        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            arr_60 [i_15] [i_4] [1] = ((-(arr_21 [i_4] [i_15])));
            arr_61 [i_4] [i_4] [i_4] = ((~(arr_45 [i_4])));
        }
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            var_42 = (max(var_42, 0));
            var_43 = (max(var_43, (~var_14)));
            var_44 = (arr_59 [i_4]);
            arr_66 [i_4] [i_4] [18] = (!var_4);
            var_45 -= (arr_57 [i_4] [i_4] [16]);
        }
        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {
            arr_70 [i_4] = (arr_46 [i_4]);
            arr_71 [i_4] = ((var_5 ? (arr_49 [i_4] [i_17] [i_4] [i_4]) : var_14));
            arr_72 [i_4] [i_4] [1] = ((-(arr_30 [i_17] [i_17] [i_17] [i_17])));
        }
    }
    #pragma endscop
}
