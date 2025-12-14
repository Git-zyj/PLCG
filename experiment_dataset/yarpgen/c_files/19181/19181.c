/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_13 = ((-(arr_0 [i_0] [i_0])));
            arr_6 [i_0] [5] = ((!(arr_4 [i_1] [i_0] [i_0])));
        }
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                arr_11 [i_0] [7] [i_2] [i_3] = ((-25533 - (((arr_10 [i_2] [i_2 + 2] [i_2]) ? (arr_2 [i_0] [i_2]) : (arr_1 [1] [i_2])))));
                var_14 = (!926904315765475403);
                arr_12 [i_2] [0] [i_0] [i_2] = var_6;
            }
            for (int i_4 = 2; i_4 < 12;i_4 += 1) /* same iter space */
            {
                arr_16 [1] [i_2] [i_2] = var_6;
                arr_17 [i_0] [i_0] [i_2] [6] = (min((((arr_5 [i_2 + 1] [i_2 + 1]) ? (arr_5 [i_2 + 3] [i_2 + 2]) : (arr_5 [i_2 + 3] [i_2 + 2]))), (((arr_5 [i_2 - 1] [i_2 + 2]) + (arr_5 [i_2 + 1] [i_2 + 1])))));
            }
            for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
            {
                arr_20 [i_0] [i_0] [i_2] [i_2] = (((((arr_14 [i_0] [i_2] [i_5] [i_5 - 1]) != (arr_10 [i_2] [i_2 + 2] [i_2 + 2]))) ? var_9 : (arr_10 [i_2] [i_0] [10])));
                var_15 = (arr_7 [i_2] [i_2 + 1]);
                arr_21 [6] [8] [i_0] &= (max(((var_10 ? (arr_9 [i_0] [i_2] [i_2 - 1]) : (arr_9 [i_0] [i_0] [i_0]))), (((arr_9 [1] [i_2 - 1] [i_2 + 3]) ? (arr_9 [i_5] [8] [10]) : (arr_9 [i_2] [i_2 - 1] [i_5 + 1])))));
            }
            arr_22 [i_2] [5] [i_2] = ((max(var_10, ((((arr_9 [i_0] [i_0] [i_0]) <= (arr_0 [i_0] [8])))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_28 [i_0] [i_2 + 3] [0] [i_0] [i_2] = ((var_9 ? ((max((arr_0 [i_2 - 1] [i_7]), (arr_0 [i_2 + 3] [i_2])))) : (max((arr_10 [i_2] [i_2 - 1] [i_2 - 1]), ((168 ? -69 : var_0))))));
                        var_16 = (min(var_16, var_1));
                        arr_29 [i_2] [i_2] [i_6] [i_7] = var_1;
                        var_17 = ((((min((arr_15 [i_2 + 2]), ((var_4 ? 25523 : var_2))))) ? ((~(max(var_7, (arr_27 [1] [i_6] [i_2 + 3] [8]))))) : (arr_27 [i_0] [i_0] [i_6] [i_7])));
                        arr_30 [i_2] [i_2] = (((max((arr_25 [i_2] [i_2 + 2] [i_6]), (!var_1)))) ? ((-((1846623755 - (arr_23 [i_0] [i_0] [i_0]))))) : (arr_15 [0]));
                    }
                }
            }
        }
        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            var_18 = (arr_8 [i_0] [i_0] [0]);
            arr_33 [13] = ((((-926904315765475403 > (!-1023021361))) ? ((((min((arr_2 [i_0] [i_8 + 1]), (arr_23 [i_0] [i_8] [i_0])))))) : (max(926904315765475403, -25524))));
            var_19 = ((var_0 - ((-12 ? (((arr_31 [i_8]) ? var_0 : (arr_9 [i_0] [i_0] [i_8 - 1]))) : (arr_3 [i_8 + 1] [i_8 + 1])))));
        }
        var_20 = (max(((9595338663182436579 ? 926904315765475394 : -877137772)), (((((max(-78, 0))) % (arr_14 [i_0] [i_0] [i_0] [i_0]))))));

        /* vectorizable */
        for (int i_9 = 4; i_9 < 10;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    {
                        var_21 = (min(var_21, (arr_5 [i_0] [i_9])));
                        arr_45 [i_0] [i_0] [i_10 + 2] [12] = ((((1 >> (255 - 252))) | (arr_42 [i_9] [i_9 + 1] [6] [i_9] [12] [i_9])));
                        arr_46 [i_10] [i_10] [i_0] [i_9] [i_0] [i_0] = (((((!(arr_43 [i_9] [i_9 - 3] [i_9 - 2] [i_9])))) == (arr_13 [i_9] [i_9 + 2])));
                        var_22 = (arr_34 [i_9 - 2] [i_9 - 4] [i_10 + 1]);
                    }
                }
            }
            arr_47 [i_9] = (((arr_8 [6] [i_9] [i_9 + 1]) >> (64512 - 64455)));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
        {
            var_23 = (!var_2);
            arr_50 [i_0] [i_12] = 112;
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
        {

            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                arr_57 [i_0] [1] [4] = (0 ? ((var_10 ? (arr_44 [i_0] [i_13] [i_14] [i_13] [i_0] [i_13]) : (arr_43 [1] [6] [10] [4]))) : (((var_0 ? var_6 : var_7))));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 12;i_16 += 1)
                    {
                        {
                            var_24 ^= var_7;
                            var_25 = arr_49 [5] [i_15] [i_16];
                            arr_62 [i_0] [i_0] [i_14] [i_14] [i_15] = ((~(arr_26 [i_0] [i_15] [i_15] [i_15] [i_16 - 1] [i_15])));
                        }
                    }
                }
            }
            arr_63 [i_0] = (((arr_34 [i_0] [i_13] [i_0]) && (((~(arr_39 [i_0] [i_0] [i_13] [i_0]))))));
            arr_64 [12] [i_0] [4] = ((-20309 ? (arr_49 [i_0] [i_0] [2]) : (!1023)));
            var_26 = ((698883505 >> (((arr_31 [i_0]) - 173))));
        }
        arr_65 [7] = 49939;
    }
    #pragma endscop
}
