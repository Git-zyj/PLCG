/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_10 = ((21709 < ((-(arr_0 [i_0 + 1] [i_1 + 1])))));
                var_11 = (max(((((arr_4 [i_1 + 3] [i_0 - 1]) * (arr_4 [i_1 - 1] [i_0 + 1])))), (min((arr_3 [i_1 - 1] [i_0 - 1]), (arr_4 [i_1 + 2] [i_0 - 1])))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_12 = (arr_5 [i_4]);
                    var_13 -= (((arr_4 [i_2] [i_2]) ? (arr_4 [i_3] [i_4]) : var_5));
                }
            }
        }
        arr_14 [i_2] [i_2] = ((-(arr_4 [i_2] [14])));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 8;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 10;i_8 += 1)
                {
                    {
                        arr_26 [i_8] [2] [i_7] [i_8] = 2324301684;
                        arr_27 [i_8] [0] [i_8] [i_8] = 262143;
                    }
                }
            }
        }
        arr_28 [i_5] [i_5] = ((var_4 ? 262143 : ((((21693 || ((min((arr_13 [i_5] [i_5] [i_5]), (arr_24 [i_5] [3] [i_5] [i_5]))))))))));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
    {
        arr_31 [i_9] |= ((!((min(var_8, 262143)))));
        var_14 = (min(var_14, (min(((~(!-21729))), ((~(arr_5 [i_9])))))));
    }
    for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
    {
        arr_34 [i_10] = (arr_23 [i_10] [i_10] [i_10] [i_10] [i_10]);

        /* vectorizable */
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            var_15 = 21709;
            var_16 ^= -21709;
            arr_38 [9] [i_11] [i_11] = (!var_8);
        }

        for (int i_12 = 3; i_12 < 7;i_12 += 1)
        {

            /* vectorizable */
            for (int i_13 = 1; i_13 < 9;i_13 += 1)
            {
                arr_44 [i_10] [i_13] [i_10] [i_10] = 262146;
                var_17 &= ((((21705 ? var_8 : 16777215)) > (arr_13 [i_10] [i_12 + 1] [i_13])));
                var_18 = ((!(!var_8)));
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                arr_47 [i_10] [i_12] [i_12] = (arr_4 [i_12 + 3] [i_12]);

                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    var_19 = ((9582825971582328871 == (arr_45 [i_10])));
                    arr_50 [i_10] [i_12] [i_10] [i_14] = ((var_4 || (arr_23 [i_10] [i_12 + 3] [3] [i_15] [i_12])));
                }
                for (int i_16 = 2; i_16 < 8;i_16 += 1)
                {
                    var_20 = var_3;
                    var_21 = (!65528);
                    var_22 = (((arr_51 [i_10] [i_12]) ? ((var_2 >> (((arr_21 [i_16]) - 706451777406309456)))) : (~1870902710)));
                    var_23 = (max(var_23, (((~(arr_21 [i_14]))))));

                    for (int i_17 = 0; i_17 < 11;i_17 += 1)
                    {
                        var_24 = (~-1);
                        var_25 = 5567886259153849471;
                        var_26 = ((((0 || (arr_13 [i_16] [i_12] [i_10]))) ? (var_0 == 65535) : -31815));
                    }
                }
                for (int i_18 = 0; i_18 < 11;i_18 += 1)
                {
                    var_27 = (min(var_27, var_0));
                    var_28 = (((((arr_54 [10] [i_12 + 4] [i_12] [i_12] [i_12]) || (arr_7 [10]))) ? (24155 || var_3) : (!21709)));
                }
                var_29 = ((-var_2 || (!var_8)));
                arr_58 [9] [i_14] [i_14] [i_12] = ((var_9 ? var_9 : 3241));
                arr_59 [i_10] [i_10] [i_12] [i_14] = ((-(arr_18 [i_10])));
            }
            arr_60 [1] [i_10] [0] = ((((((!(arr_6 [i_12 + 1] [i_12]))))) ^ (max((arr_6 [i_12 - 3] [i_12 - 3]), 8863918102127222745))));
        }
    }
    #pragma endscop
}
