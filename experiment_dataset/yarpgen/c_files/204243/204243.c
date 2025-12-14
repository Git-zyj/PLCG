/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_11;
    var_14 = ((min(((1073741823 ? 1681188528860096991 : 2689679860)), var_12)));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_15 = ((((arr_0 [i_0 - 1]) * 1605287436)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_16 = (arr_0 [i_0 + 2]);
            var_17 = (arr_2 [i_0 + 2] [i_0 - 2] [i_0 + 1]);
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            arr_9 [i_0 - 2] = (4194300 >> (1644506893 - 1644506863));
            var_18 = (min(var_18, ((((((arr_6 [i_0] [i_2] [i_0 + 1]) * var_3))) ? 1644506899 : var_3))));
        }
        var_19 *= (min((((arr_5 [i_0 + 2]) ? (arr_4 [i_0 + 2] [0]) : (arr_5 [i_0 + 1]))), ((((arr_4 [i_0 + 1] [8]) && (arr_5 [i_0 - 2]))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_20 *= ((-(arr_16 [i_0 - 2] [0] [i_4] [i_4])));
                        var_21 = arr_7 [i_0 + 2];
                        var_22 = (var_0 & (arr_11 [i_0] [i_0 - 1] [i_0]));
                        arr_17 [i_0] [i_0] [0] [3] [i_5] [i_5] = 4294967286;
                        var_23 = (min(var_23, (~var_10)));
                    }
                    for (int i_6 = 2; i_6 < 6;i_6 += 1)
                    {
                        var_24 = ((var_11 ? (arr_8 [i_0 + 1]) : (arr_2 [i_0 + 1] [i_0 + 1] [i_6 + 1])));
                        var_25 = (((((max(var_3, (arr_15 [i_6] [i_4] [i_4] [0] [i_3] [2]))) >> (((((arr_0 [i_0]) + (arr_11 [8] [i_3] [i_4]))) - 13716933571099989878)))) * var_10));
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_26 = max(var_11, (min(5862547501722609901, (arr_0 [i_0 - 2]))));
                        var_27 = var_7;
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_28 = (arr_22 [i_0] [3] [i_4] [i_8]);
                        var_29 = ((~(arr_8 [i_0 + 2])));
                        arr_27 [5] [3] [i_3] [3] [3] = ((arr_10 [i_8]) ? ((((arr_18 [i_8] [i_4] [i_3] [i_0]) >> (var_5 - 13409957027552462193)))) : (arr_8 [i_0 - 2]));
                    }
                    var_30 = ((-(!2689679860)));
                    var_31 = arr_12 [i_0 - 2] [i_3] [i_4];

                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_32 = var_7;
                        var_33 = (min(var_33, (min((((var_8 * (arr_19 [i_9] [i_9] [8] [i_3] [i_3] [8])))), 1644506916))));
                        var_34 = min(((~(((arr_0 [i_0]) - var_8)))), (arr_26 [i_0] [2] [i_0 + 2] [i_0]));
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        arr_34 [i_10] = min((arr_33 [6]), (max((arr_33 [i_10]), (arr_33 [i_10]))));
        arr_35 [21] = (arr_31 [i_10]);
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    {
                        var_35 &= (max((((!(((var_3 >> (((arr_30 [3]) - 8034823602034055850)))))))), (((min(var_8, var_7)) >> (((((arr_40 [21] [i_12] [17] [i_10]) ? var_9 : 3294307216)) - 2343761624))))));
                        arr_43 [12] [i_11] [i_10] = max((var_8 + 3573196649), -5335262819817861162);
                        var_36 = (arr_37 [6] [6]);
                    }
                }
            }
        }
    }
    for (int i_14 = 3; i_14 < 21;i_14 += 1)
    {
        var_37 = var_4;
        var_38 = (max(((~((-(arr_30 [i_14]))))), 2650460410));
    }

    for (int i_15 = 0; i_15 < 11;i_15 += 1)
    {
        var_39 &= max(((var_2 ? (arr_37 [i_15] [i_15]) : var_2)), 1000660080);
        var_40 = ((-var_11 ? (((min(var_5, 1644506893)) >> (min((arr_36 [12] [7]), 0)))) : 0));
        var_41 = 3573196649;
        /* LoopNest 3 */
        for (int i_16 = 2; i_16 < 9;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 10;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 7;i_18 += 1)
                {
                    {
                        arr_59 [10] [i_16] [i_17] = (max((arr_33 [i_16]), var_5));
                        arr_60 [i_15] [8] [i_15] = 855994316;
                    }
                }
            }
        }
        var_42 = ((max((min((arr_33 [14]), (arr_44 [i_15] [i_15]))), var_4)));
    }
    #pragma endscop
}
