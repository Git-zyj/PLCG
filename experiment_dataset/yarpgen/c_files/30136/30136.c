/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = 1119765292;
                var_17 = (((((arr_1 [i_0 - 3]) ? ((88 ? -30516 : (arr_0 [i_0] [i_1]))) : (((arr_1 [i_0]) ? 280157616 : var_14)))) & (arr_0 [i_0 + 3] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 = ((((min((min(var_8, (arr_2 [i_1]))), ((max(117, (arr_7 [i_0] [i_3]))))))) >> (41 - 19)));
                            arr_11 [i_3] = ((-(max((((arr_6 [6] [6] [6]) ? -41 : 41)), (arr_2 [i_3])))));
                        }
                    }
                }
                var_19 = (arr_10 [i_0] [i_1] [0]);
            }
        }
    }

    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_20 = (((arr_1 [i_4]) ? (arr_1 [i_4]) : (((arr_1 [i_4]) & (arr_1 [i_4])))));
        var_21 += min(((+((25 ? (arr_13 [i_4]) : var_7)))), -42);
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
    {
        var_22 = ((arr_16 [i_5 + 2]) ? (arr_15 [i_5 + 1]) : (arr_16 [i_5 - 1]));
        var_23 = ((-((((arr_15 [i_5]) && (arr_16 [i_5 - 1]))))));
        arr_17 [i_5 + 1] = (arr_15 [i_5]);
        var_24 = (arr_15 [i_5 - 1]);
        var_25 += (((arr_15 [i_5 + 2]) - -638951121));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 23;i_6 += 1) /* same iter space */
    {
        var_26 = 41;
        var_27 = (((!40) + ((((arr_15 [i_6]) < (arr_15 [i_6]))))));
    }
    for (int i_7 = 1; i_7 < 23;i_7 += 1) /* same iter space */
    {
        var_28 = (max(var_28, ((((arr_16 [i_7]) ? (((arr_22 [i_7 + 1] [4]) ? var_3 : (arr_19 [i_7]))) : (arr_15 [i_7]))))));
        arr_24 [i_7] = ((~(arr_20 [i_7])));
    }
    var_29 = 53;
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 19;i_11 += 1)
                    {
                        arr_35 [8] [i_9] [i_8] [i_8] [11] [i_9] = (arr_0 [i_10] [i_11 - 1]);

                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_30 = (arr_37 [i_8] [i_10] [i_8] [i_11 + 1] [i_8] [i_11]);
                            arr_38 [i_8] [i_9] [i_10] [i_8] [i_8] [i_10] [i_8] = 232;
                            var_31 = ((~(arr_8 [i_8] [i_9] [i_10] [i_11])));
                        }
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            var_32 += ((!(arr_8 [0] [2] [i_10] [i_11 + 1])));
                            var_33 = (((arr_9 [i_8] [i_10] [i_11 + 1] [i_11] [i_11] [i_11 - 1]) >> (((arr_2 [i_11 + 1]) - 45))));
                            var_34 &= (arr_33 [i_10] [i_9] [i_10] [i_11 - 1]);
                            var_35 = (arr_32 [i_8] [i_9] [i_8] [i_11 - 1] [i_13]);
                        }
                    }
                    var_36 = (min(var_36, 1065413014));
                    arr_41 [i_8] [i_9] = (((~(arr_19 [i_8]))));
                }
            }
        }
    }
    #pragma endscop
}
