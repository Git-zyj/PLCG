/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 ^= ((var_3 ? var_8 : (arr_0 [i_0])));
        var_13 ^= (!(((~(arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_14 = (arr_0 [i_0]);
            var_15 = var_11;
            arr_4 [i_1] [i_0] [i_1] = (arr_3 [i_0] [i_1]);

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_16 = (((arr_12 [i_4] [i_1] [i_1] [i_0]) ? (arr_12 [i_4] [i_1] [i_1] [i_0]) : (arr_12 [i_0] [i_1] [i_2] [i_3])));
                        var_17 = 591975930;
                        var_18 = (max(var_18, -7046771856235169947));
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_5] [i_1] = (arr_8 [i_5]);
                        var_19 = -161244555545548089;
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = (((12060703836653730000 ? var_4 : 3240)));
                        var_20 -= ((~(arr_3 [i_2] [i_3])));
                    }
                    var_21 -= 1;
                    var_22 = (((18285499518164003516 ? 4294967280 : 15)));
                    var_23 ^= 0;
                    var_24 = (max(var_24, (arr_7 [i_0] [i_2])));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                {
                    arr_20 [i_1] [i_6] = ((((-2129552944 ? var_10 : var_3)) + ((((arr_13 [i_6] [i_6] [i_6] [i_2] [i_1] [i_0]) - var_1)))));
                    var_25 ^= (arr_5 [i_0] [i_2] [i_0]);
                }
                var_26 = (min(var_26, var_1));
                arr_21 [i_1] = (!5566114863395982425);
                arr_22 [i_1] = var_5;
            }
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_26 [i_0] [i_7] [i_7] = ((1888250460 ? ((((arr_13 [i_0] [i_0] [i_0] [i_7] [i_7] [i_7]) ? -1 : var_7))) : (arr_2 [i_0] [i_7] [i_7])));
            var_27 = (arr_19 [i_7] [i_7] [i_7] [i_7]);
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 9;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 8;i_10 += 1)
                {
                    {
                        var_28 = ((~(arr_15 [i_8] [i_10] [i_10 + 2] [i_10] [i_10])));
                        arr_36 [i_0] [i_8] [i_9] [i_10] [i_10] = ((!(58986 | 18446744073709551608)));
                    }
                }
            }
            var_29 += (arr_6 [i_0] [i_0] [i_8] [i_8]);
        }
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    {
                        var_30 = (((((var_9 ? (arr_23 [i_11] [i_13]) : (arr_44 [i_0] [i_0] [i_0] [i_0])))) ? 2406716852 : ((((!(arr_1 [i_0])))))));
                        var_31 += (((arr_44 [i_0] [i_11] [i_12] [i_13]) != var_1));
                    }
                }
            }

            for (int i_14 = 0; i_14 < 0;i_14 += 1)
            {
                arr_48 [i_0] [i_11] [i_14] = var_7;
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 8;i_16 += 1)
                    {
                        {
                            var_32 *= 4421500548202812621;
                            arr_53 [i_15] = (arr_24 [i_0] [i_14]);
                        }
                    }
                }
                var_33 += (arr_41 [i_0]);
                var_34 = 18446744073709551615;
            }
            for (int i_17 = 0; i_17 < 10;i_17 += 1)
            {
                var_35 *= 2406716864;
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 7;i_19 += 1)
                    {
                        {
                            var_36 = (min(var_36, (arr_38 [i_0] [i_0] [i_0])));
                            arr_61 [i_18] [i_19] [i_17] [i_17] [i_19] [i_17] [i_18] = (arr_43 [i_19] [i_19] [i_19] [i_19 + 1] [i_19]);
                            arr_62 [i_19] = ((28225 * (arr_13 [i_0] [i_11] [i_11] [i_17] [i_18] [i_19])));
                            var_37 = (max(var_37, (arr_54 [i_0] [i_11])));
                        }
                    }
                }
            }
        }

        for (int i_20 = 0; i_20 < 10;i_20 += 1)
        {
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 10;i_21 += 1)
            {
                for (int i_22 = 3; i_22 < 7;i_22 += 1)
                {
                    {
                        arr_69 [i_20] [i_20] = (arr_13 [i_22] [i_22] [i_22] [i_22] [i_22 - 2] [i_22 - 1]);
                        arr_70 [i_0] [i_20] [i_20] [i_20] [i_0] = (~var_3);
                        var_38 *= (arr_19 [i_21] [i_22] [i_22 - 1] [i_22]);
                    }
                }
            }
            var_39 = ((38222 ? (arr_50 [i_20] [i_20] [i_20] [i_0]) : (((arr_40 [i_20] [i_20] [i_0]) / var_10))));
            var_40 = 7046771856235169972;
            var_41 = (min(var_41, (arr_45 [i_20])));
            var_42 = (min(var_42, (arr_6 [i_0] [i_0] [i_20] [i_20])));
        }
    }
    var_43 = (max(var_43, (((~(12060703836653730008 | -518478203563869568))))));
    var_44 ^= (min(((~((var_4 ? 2900779245175298035 : var_2)))), var_5));
    var_45 ^= (min(6386040237055821609, 6386040237055821613));
    #pragma endscop
}
