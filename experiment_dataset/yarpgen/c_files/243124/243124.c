/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((+((((-1 <= var_8) && var_4)))));
    var_12 = 1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    arr_10 [1] [i_0] = (arr_9 [i_0 + 2]);
                    arr_11 [i_0] [i_1] [14] = ((var_9 ? (((max(3104301171, 62548)))) : ((((((arr_0 [i_0]) ? (arr_2 [i_0]) : var_2)) == ((min(19257, var_5))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (!var_6);
                                var_14 = ((((min(var_9, var_3))) + (((~var_10) + (((((arr_17 [i_0] [i_1] [13] [i_3] [i_1] [i_3] [13]) <= var_3))))))));
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            var_15 = 6482876567853422942;
                            arr_27 [i_7 - 1] [i_7 + 1] [i_0] [i_5] [i_0] [1] [i_0] = 11963867505856128691;
                        }

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_16 = -var_6;
                            arr_30 [i_0] [i_0 - 1] [i_0 + 2] [i_0] [i_0 + 1] [i_0] = ((-(arr_15 [i_5 - 1] [i_1] [17] [i_6 - 1] [i_0 + 2])));
                            arr_31 [i_8] [i_0] [i_6] [i_5] [i_5] [i_0] [i_0 + 1] = 2862215814402300062;
                            arr_32 [12] [12] [i_1] [i_0] [i_0] [11] = (var_1 != 11963867505856128666);
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            arr_35 [i_9] [i_0] [i_0] [i_1] = ((-5740046941475312816 + -818162225) ? (((62556 ? var_4 : var_2))) : var_0);
                            var_17 = 2305843009213693951;
                            var_18 = (arr_23 [i_0] [i_0] [18] [i_0]);
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_39 [i_0] [i_0] [i_0] [i_0] [0] = (((((arr_18 [i_0] [i_1]) / var_3)) <= (~var_10)));
                            var_19 = var_2;
                            arr_40 [i_0] [i_1] [0] [i_5] [i_10] [i_10] [i_0] = (arr_13 [i_6 + 1] [i_0] [i_5 + 1] [16] [i_0] [i_5]);
                            var_20 = var_3;
                        }
                        var_21 = var_2;
                    }
                    var_22 = (min((((-var_7 ? ((33030144 ? (arr_3 [i_0] [i_0 + 1] [8]) : var_5)) : ((175 << (var_3 - 582685405)))))), (min((arr_0 [16]), ((13866 & (arr_6 [i_0] [i_1] [i_5 - 1])))))));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 20;i_12 += 1)
                        {
                            {
                                var_23 |= (max((3 + var_4), 1));
                                var_24 = (min(((246 ? 4611686018427387903 : -1)), ((6482876567853422949 + ((min(var_8, (arr_25 [i_0]))))))));
                                var_25 = ((((arr_34 [9] [9]) && (arr_44 [i_12] [i_11 - 1] [16] [i_0 + 2]))));
                            }
                        }
                    }
                }
                for (int i_13 = 1; i_13 < 21;i_13 += 1) /* same iter space */
                {
                    var_26 = (max((((arr_41 [i_0] [i_1] [i_1] [1]) | ((var_9 ? 40 : var_8)))), ((-(((var_2 == (arr_19 [i_0] [i_1] [i_13]))))))));
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 21;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 21;i_15 += 1)
                        {
                            {
                                arr_56 [i_15 - 1] [i_0] [i_0] [i_0] [i_0] [i_0] = (min(((-((((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) <= (arr_55 [12] [i_1] [i_13] [i_1] [i_15])))))), (((var_8 <= (arr_16 [i_15 + 2] [i_15 + 2] [i_15 + 2] [i_15 + 1] [i_15 - 1] [i_15 + 2]))))));
                                var_27 = (arr_18 [i_0] [i_0]);
                            }
                        }
                    }
                }
                arr_57 [i_0] [i_0] = ((1 != (((((min(var_2, (arr_34 [i_0] [1])))) && (1181838472 + var_2))))));
            }
        }
    }
    var_28 = var_10;
    var_29 = (max((max((var_7 || 2933126883), (max(var_10, 818162228)))), ((min(var_2, -var_6)))));
    #pragma endscop
}
