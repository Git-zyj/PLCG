/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0 - 2] [i_0] = (~var_15);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 *= (((((-26 ? var_17 : (arr_0 [i_0])))) >> ((((min(var_17, var_12))) + 12554))));
            arr_7 [i_1] [i_1] = (-1171992140 - var_7);
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_20 = (max(var_20, ((max(((min((arr_6 [i_2] [i_0] [i_2]), (max((arr_1 [i_2]), (arr_4 [i_0] [i_2] [i_2])))))), (max(var_17, (((arr_8 [i_0] [i_2]) ? (arr_6 [i_2] [i_2] [i_0]) : 26)))))))));
            var_21 *= (((arr_4 [i_0] [i_0] [i_0]) | (arr_0 [i_0 - 3])));
        }
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                var_22 = (((193 ? var_18 : var_7)));
                var_23 = var_1;
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        var_24 = 8461770136000995484;
                        arr_19 [i_6] [i_3 + 1] [i_3 + 1] [i_6] = (+((((arr_16 [i_0] [i_3] [i_5] [i_3 + 2]) >= (arr_0 [i_0 - 3])))));
                        var_25 = ((((((arr_3 [i_0]) + (var_9 + 116)))) ? (~var_2) : var_3));
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
        {
            var_26 = (max((arr_5 [4] [4] [i_7]), -39));
            var_27 = 140;
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
        {
            arr_26 [i_0] [i_8] [i_8] = ((((((arr_21 [i_0 + 1]) ? (arr_6 [i_0] [i_8] [i_8]) : (arr_11 [i_0 + 2] [i_0 + 2])))) ? (max((arr_20 [i_0 + 2]), (arr_6 [i_0] [i_8] [i_8]))) : 1171992139));
            arr_27 [i_8] = ((~(max((arr_25 [i_0 - 1] [i_0 - 2] [i_0 - 1]), ((var_15 << (((arr_11 [i_8] [i_0]) - 39))))))));
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 16;i_11 += 1)
                {
                    {
                        arr_36 [i_9] = var_4;
                        arr_37 [i_11 + 3] [i_9] = 1;
                    }
                }
            }
            arr_38 [i_0] = (((arr_28 [i_0 + 1]) || (((((max((arr_20 [i_0]), 140))) ? ((((arr_15 [i_0] [i_9]) & 115))) : (min(var_7, var_12)))))));
            /* LoopNest 2 */
            for (int i_12 = 2; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    {
                        arr_45 [i_0] [i_9] [i_9] &= ((((((arr_40 [i_12 - 2]) ? -73 : (arr_40 [i_0 - 4])))) ^ (min((arr_0 [i_13]), var_6))));

                        for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
                        {
                            var_28 ^= (arr_23 [2]);
                            arr_48 [i_0] [i_0] [i_13] [i_14] [i_14] &= var_16;
                            arr_49 [i_13] [i_13] [i_13] [i_14] [i_13] [i_14] [i_13] = ((((((arr_32 [i_0] [i_0] [i_0 + 1] [i_12 - 2]) ? (arr_32 [i_0] [i_0 - 2] [i_0 + 1] [i_12 - 2]) : var_10))) ? var_1 : ((44 & (max(-1171992140, var_10))))));
                        }
                        for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
                        {
                            var_29 = (((min(211, (((arr_28 [9]) ? (arr_1 [i_12]) : -29234)))) < (arr_41 [i_0 - 4])));
                            var_30 = var_13;
                            var_31 = (((var_9 ? (arr_21 [i_12 - 2]) : 1663549941669830543)));
                        }
                        var_32 = (((var_11 + var_13) | ((((!(arr_35 [1] [6] [i_0] [i_0]))) ? 4294967295 : (((((arr_21 [i_9]) && (arr_16 [i_0] [i_0] [i_0] [i_0])))))))));
                    }
                }
            }
            arr_53 [i_0] = (((arr_21 [i_0]) ? ((((var_6 ? (arr_30 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : var_14)))) : (((arr_15 [i_0] [i_0 + 2]) ? ((((arr_24 [i_0]) ? (arr_22 [i_0] [i_0] [i_9]) : (arr_44 [i_9] [17] [i_9] [i_0] [17] [i_0])))) : (arr_35 [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0 - 2])))));
        }
    }
    /* vectorizable */
    for (int i_16 = 2; i_16 < 8;i_16 += 1)
    {
        arr_56 [i_16] = 1;
        arr_57 [i_16 + 1] [i_16 + 1] = -15988;
        arr_58 [i_16 + 1] = ((((103 ? (arr_9 [i_16 - 2] [i_16] [i_16]) : var_9)) == (((-79801594 ? var_12 : (arr_54 [i_16]))))));
        var_33 = 63;
    }
    var_34 ^= var_0;
    var_35 = ((!(((var_6 ? var_17 : var_7)))));
    var_36 = var_15;
    var_37 = (((!var_1) ? var_0 : ((((max(-1171992144, var_2))) ? (!var_11) : ((0 ? 6 : var_14))))));
    #pragma endscop
}
