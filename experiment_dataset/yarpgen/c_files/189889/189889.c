/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [12]);
        arr_3 [9] [0] &= (max(((18216565150720281267 & (arr_0 [i_0]))), (min((arr_0 [i_0]), (arr_0 [i_0])))));
        var_11 = (min(var_11, ((max(var_3, (~92))))));
        var_12 = (max(863673043682978718, 17583071030026572906));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_13 = (max(var_13, (((((((arr_4 [i_1]) || (arr_4 [i_1])))) == (arr_4 [i_1]))))));
        var_14 += (max((arr_7 [20] [i_1]), ((var_3 ? (~var_1) : var_2))));
    }
    var_15 = var_9;

    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_16 -= var_6;
                        arr_20 [i_3] [i_5] [i_3] = (min(((max((arr_10 [i_2 + 1]), (arr_15 [i_2 + 1])))), (((56 & 0) ? (arr_16 [i_4 + 3] [i_3] [i_4 + 3] [i_5]) : 127))));
                        var_17 = (min(var_17, (((((max((min(17583071030026572913, 127)), (arr_11 [i_5])))) || ((max(((((arr_5 [i_3]) || (arr_7 [i_2] [i_3])))), var_3))))))));
                    }
                }
            }
        }
        var_18 = (arr_15 [i_2]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] [i_6] = -18;
        arr_24 [i_6] [i_6] = (((arr_10 [i_6 + 1]) ? (arr_11 [i_6 + 1]) : (arr_11 [i_6 + 1])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_19 = -112;
                                arr_38 [i_7] = var_10;
                                var_20 |= ((arr_13 [i_11 + 1] [i_8 + 1] [i_7 + 1]) ? var_6 : (arr_13 [i_11 + 1] [i_8 + 1] [i_7 + 1]));
                            }
                        }
                    }
                    arr_39 [i_7] [i_7] [i_7] [i_7] = ((1959280076141429887 ? -106 : 17));

                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        arr_42 [i_7] [i_8] [i_9] [i_12] = (var_6 == var_1);
                        arr_43 [18] [22] [22] [i_7] |= (((arr_4 [i_8 + 1]) ? (arr_4 [i_8 + 1]) : (arr_4 [i_8 + 1])));
                        var_21 = (max(var_21, ((((arr_7 [i_9] [i_8]) ? (~var_5) : (arr_13 [i_12] [i_9] [i_9]))))));
                        var_22 = (((var_8 ? var_0 : var_0)));
                    }
                    var_23 = (max(var_23, var_9));
                }
            }
        }
        var_24 = (((arr_10 [i_7 + 1]) ? (arr_10 [i_7 + 1]) : (arr_10 [i_7 + 1])));
        var_25 = (var_10 ? var_9 : (arr_27 [i_7] [i_7]));
    }
    for (int i_13 = 2; i_13 < 17;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 0;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                {
                    var_26 = (min(var_26, ((max((arr_1 [i_14 + 1] [i_13 - 1]), (min(var_5, (arr_1 [i_14 + 1] [i_13 + 1]))))))));
                    var_27 = (max(-124, 0));
                }
            }
        }
        arr_52 [i_13] = ((min((arr_41 [i_13] [i_13 - 1]), (min((arr_17 [i_13]), var_5)))));

        for (int i_16 = 4; i_16 < 17;i_16 += 1)
        {
            arr_57 [i_13] [i_16] [i_16] = ((!(arr_16 [i_16 - 2] [i_16 - 4] [i_16 - 3] [i_16 + 1])));
            var_28 = (((arr_11 [i_13]) ? (max((arr_45 [i_16 + 1]), var_10)) : (((863673043682978718 ? 40287 : 106)))));
        }
        var_29 *= 32760;
    }
    var_30 = ((((max((var_9 || var_4), var_2))) ? ((var_10 ? var_6 : var_5)) : ((var_3 ? var_8 : ((var_1 ? 16152210546166336387 : -13))))));
    var_31 += var_6;
    #pragma endscop
}
