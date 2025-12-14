/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_7;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_19 = var_14;
                        var_20 = (!-4294967276);
                        var_21 ^= (arr_8 [i_0 - 1] [i_0 + 1]);
                        arr_10 [1] [i_1] [7] [i_3] = 4294967285;
                    }
                }
            }

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                arr_13 [i_4] [i_4] = (((arr_9 [i_0 + 1]) ? (arr_9 [i_0 + 1]) : (arr_9 [i_0 + 1])));
                arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((var_10 ? (4294967279 == -7272157550854515621) : (arr_6 [i_0 - 1] [i_0 + 1])));
            }
        }
        for (int i_5 = 3; i_5 < 8;i_5 += 1)
        {

            for (int i_6 = 2; i_6 < 6;i_6 += 1)
            {
                var_22 = (((arr_9 [i_0 + 1]) >> ((((0 ? 22477 : (arr_5 [i_5 - 2] [i_0 + 1] [i_6 - 2]))) - 11323883901961877315))));
                arr_20 [i_0] [i_5] [i_0] = 15244108830187555963;
                var_23 = (((((var_7 ? (arr_0 [i_0 + 1] [i_5 - 1]) : (arr_0 [i_0 + 1] [i_5 - 1])))) ? (arr_16 [i_0 + 1]) : (arr_0 [i_0 + 1] [i_5 - 1])));
                arr_21 [i_5] = ((((arr_9 [i_0 + 1]) ? (arr_9 [i_0 + 1]) : (arr_9 [i_0 + 1]))));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                var_24 *= 0;
                var_25 ^= (arr_18 [i_0] [i_0] [i_5 - 1] [i_0]);
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        var_26 = (min(var_15, (((arr_4 [i_0 + 1] [i_5 + 2] [i_8]) + (arr_4 [i_0 + 1] [i_5 + 2] [i_5 + 2])))));
                        var_27 = 4930069441761073990;

                        for (int i_10 = 4; i_10 < 9;i_10 += 1)
                        {
                            arr_31 [i_0] [i_5] [i_8] [i_10] [i_10] [i_9] = (!274925938);
                            arr_32 [i_8] [i_10] [i_0] = ((3695512899 ? (arr_24 [i_0 + 1] [2] [i_0 - 1] [i_0 + 1]) : ((~(~4294967276)))));
                        }
                    }
                }
            }
            arr_33 [i_0 + 1] = (arr_5 [i_5 - 2] [i_5 - 2] [i_0 - 1]);
            arr_34 [i_0 + 1] [i_5 - 2] = ((!(((-(max(0, (arr_11 [i_0 + 1] [0]))))))));
        }
        var_28 = (arr_8 [i_0] [i_0 + 1]);
    }
    for (int i_11 = 0; i_11 < 19;i_11 += 1)
    {
        arr_37 [i_11] = (min((arr_36 [i_11]), -2377181092578959407));
        var_29 = (min(var_29, ((max((((arr_36 [i_11]) ? 1958407149 : (((arr_36 [i_11]) ? 2983842139 : -6877632207670780001)))), ((~(arr_35 [2]))))))));
    }
    for (int i_12 = 2; i_12 < 19;i_12 += 1)
    {
        arr_42 [i_12 + 2] [i_12] = (~-7468490962825943514);
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 21;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 19;i_14 += 1)
            {
                {
                    var_30 = (max(var_30, (arr_40 [i_13] [i_13 - 2])));
                    var_31 *= ((!((!(!3862905423)))));
                }
            }
        }
        arr_48 [i_12] [i_12] = ((var_14 ? ((-(min(18446744073709551615, -1536995312786466516)))) : ((min((arr_45 [3]), 4294967294)))));
    }
    for (int i_15 = 2; i_15 < 16;i_15 += 1)
    {
        arr_51 [11] [i_15] = (((arr_44 [i_15] [6]) - (var_8 + var_3)));
        arr_52 [i_15] = 2;
    }
    #pragma endscop
}
