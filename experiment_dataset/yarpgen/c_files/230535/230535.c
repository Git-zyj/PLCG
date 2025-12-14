/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (min(var_9, -31352));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_0] [i_0] = ((~(arr_6 [i_0])));
                        var_15 = var_10;
                        var_16 = ((~(arr_3 [i_0] [i_0] [11])));
                        var_17 = (arr_7 [i_0] [1] [i_0] [i_0]);
                        arr_10 [i_0] [1] [i_2] [i_3] [7] = ((~(~8988888367641504556)));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        var_18 = ((((((!(arr_3 [i_0] [i_0] [i_0])))) != (61314 != 2365738497289960482))));

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            arr_16 [i_0] [i_0] [i_2] [i_4] [i_0] = -447110218501946660;
                            var_19 ^= var_0;
                            var_20 = 103;
                        }
                        var_21 = 29166;
                        arr_17 [i_4] |= var_13;

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            var_22 *= (29955 != -95);
                            var_23 = -var_6;
                        }
                        for (int i_7 = 1; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            var_24 = (max(var_24, ((min((((!(var_4 != var_5)))), (((-(arr_13 [i_0] [i_1] [i_2] [i_2] [10] [i_4])))))))));
                            var_25 *= (((min((!-5), -447110218501946667)) != 19684077));
                            var_26 *= 13284339581972901595;
                            var_27 = ((-(arr_3 [i_0] [i_2] [12])));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 4; i_8 < 19;i_8 += 1)
                    {
                        var_28 = 95;
                        var_29 += ((-((((arr_20 [i_2] [i_2] [i_2] [i_2]) != (arr_3 [i_0] [i_8] [i_2]))))));
                        var_30 = (min(var_30, -7308));
                    }

                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        arr_26 [i_0] = (min((arr_20 [i_9] [i_2] [i_1] [i_0]), ((((arr_20 [i_0] [i_1] [i_2] [i_9]) != (arr_11 [i_0] [12] [i_2] [12]))))));
                        var_31 = (arr_3 [i_0] [i_1] [i_9]);
                        var_32 ^= -84;
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        var_33 ^= min(((min(var_5, (29323 != -1478392737362973398)))), var_6);
                        var_34 = arr_19 [i_0] [i_1] [i_2] [i_2] [9];
                    }
                }
                for (int i_11 = 2; i_11 < 21;i_11 += 1) /* same iter space */
                {
                    var_35 = (min(var_35, ((((min((arr_3 [10] [15] [i_11]), (arr_4 [i_0] [i_11 - 2]))) != (((((var_13 != var_6) != (min((arr_0 [4]), var_9)))))))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_36 = ((-(((3321243536 != (-1237142228 != -2091849896))))));
                                var_37 *= (((~65535) ^ ((~(arr_6 [i_12])))));
                            }
                        }
                    }
                }
                for (int i_14 = 2; i_14 < 21;i_14 += 1) /* same iter space */
                {
                    arr_40 [i_0] [i_1] [13] [i_0] = var_7;
                    var_38 *= (min((arr_0 [i_14 - 1]), (min(118, (arr_0 [i_14 - 2])))));
                    var_39 = ((((var_5 ? -1237142225 : (arr_30 [3] [3] [3])))) != (min(-1073741824, var_10)));
                }
                arr_41 [i_0] = ((-1237142211 != (!var_10)));
                var_40 ^= (-649507327 ? -103 : 105);
                arr_42 [i_0] [i_0] = 67108848;
            }
        }
    }
    #pragma endscop
}
