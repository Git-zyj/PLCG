/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_10 ? -407037013 : var_2)) % 127));

    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_16 = (!213);
            arr_6 [i_0] [i_1] [i_0] = (((((((arr_2 [i_0 + 1]) || 1)))) * ((15170 ? 14591951762650681742 : (arr_2 [i_1])))));
        }
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_17 = var_0;
            var_18 *= ((max(((!(arr_4 [i_2 - 1] [i_2] [i_2 - 1]))), (7400373551707316828 || 0))) ? (0 != var_6) : var_14);

            /* vectorizable */
            for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
            {
                arr_13 [i_0] [i_0] [i_3] = ((arr_1 [i_2 + 2] [i_2 + 1]) && (arr_1 [i_2 + 2] [i_2 + 1]));
                var_19 = (arr_2 [i_2 + 2]);
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
            {
                arr_18 [i_2] = (((arr_14 [i_0] [i_2]) >> (((((arr_9 [i_2 + 2] [i_0 - 3]) >> (1572102435 - 1572102434))) - 15982))));
                var_20 *= (((((((arr_3 [i_0]) << (((arr_16 [i_0] [i_2 - 1] [13]) - 1819731326)))))) ? (((((-20123 / -20124) <= (min((arr_1 [i_0] [1]), (arr_14 [i_0 + 1] [i_0 + 1]))))))) : 805306368));
            }
        }
        arr_19 [i_0] [i_0] = (arr_11 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_5 = 3; i_5 < 18;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5 - 3] = (max(((((((arr_20 [i_5 + 1]) + 2147483647)) << (((((arr_15 [i_5] [i_5] [i_5 - 2]) + 16041)) - 23))))), 18446744073709551615));
        arr_23 [i_5] = (arr_9 [i_5] [i_5 - 3]);
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_27 [i_6] = (arr_26 [i_6]);

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_21 = (arr_30 [i_7]);
            var_22 = (((((var_5 ? 3489660927 : (arr_24 [i_7])))) || (arr_24 [i_6])));
        }
        arr_32 [i_6] [i_6] = (max((min(1, 1160437679)), ((max((((arr_26 [i_6]) * -20137)), var_3)))));
        var_23 = ((!((((arr_26 [i_6]) << (((min((arr_28 [i_6] [1] [i_6]), var_7)) + 1123237742)))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    {
                        var_24 = (((((var_8 + 2147483647) >> 0))) ? (arr_35 [i_9 - 1] [i_10]) : (14 + var_1));

                        for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                        {
                            arr_45 [i_8] = 20114;
                            arr_46 [i_8] [i_8] [i_10] = 1447625980;
                        }
                        for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
                        {
                            var_25 -= (((arr_43 [i_8] [i_9] [i_13]) ? var_11 : (arr_49 [i_9] [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 1])));
                            var_26 = ((16 || (arr_40 [i_8] [i_8] [i_8] [i_8])));
                        }
                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            var_27 = ((var_0 ? (arr_31 [i_8] [i_9 - 1] [i_14]) : var_7));
                            var_28 *= ((~(arr_48 [i_9 - 1] [i_10])));
                        }
                    }
                }
            }
        }
        arr_54 [i_8] = (((arr_37 [i_8] [i_8] [i_8]) - -1234098935));

        for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
        {
            var_29 *= 15;

            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                var_30 = (arr_36 [i_8] [i_15]);
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        {
                            arr_66 [7] [i_15] [i_16] [i_16] [i_18] [i_8] [i_16] = (((10996 ? (arr_28 [i_8] [14] [i_16]) : var_12)) / ((var_12 ? 65521 : -1234098935)));
                            var_31 = (arr_56 [i_8]);
                        }
                    }
                }
                var_32 = (!90);
                arr_67 [i_8] [i_8] [12] = ((var_14 ? (arr_61 [i_8] [i_8]) : 18446744073709551615));
            }
        }
        for (int i_19 = 0; i_19 < 21;i_19 += 1) /* same iter space */
        {
            var_33 &= -14245;
            var_34 = (max(var_34, ((((arr_41 [i_8] [i_8] [i_8] [i_8]) || 0)))));
        }
        for (int i_20 = 0; i_20 < 21;i_20 += 1) /* same iter space */
        {
            arr_75 [i_8] = 1;
            var_35 = (arr_50 [i_8] [i_8] [i_20] [i_8] [i_20]);
        }
    }
    #pragma endscop
}
