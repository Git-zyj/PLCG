/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_0 == (((var_12 ? var_13 : var_9)))));
    var_19 = var_7;
    var_20 = var_10;

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((var_12 + 2147483647) >> (var_0 - 2424)));
        arr_3 [i_0] [i_0] = (((max(254, ((var_14 ? var_3 : 238)))) / (arr_1 [i_0])));

        for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
        {
            var_21 += (((((arr_0 [12]) ? (arr_7 [i_0 + 1] [i_1 + 1]) : (arr_0 [12])))) ? (((((arr_0 [4]) && (arr_7 [i_0 + 1] [i_1 + 1]))))) : (min(var_15, (arr_7 [i_0 - 1] [i_1 + 4]))));
            var_22 = ((((var_16 != (arr_7 [i_1] [i_1 - 2]))) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_7 [i_0] [i_1 + 1]))) : (((arr_0 [i_0]) ? (arr_7 [i_1 - 2] [i_1 + 3]) : (arr_7 [i_1 - 1] [i_1 + 3])))));

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_23 = 627936780;
                var_24 *= (((arr_9 [i_2] [i_1 - 2] [i_2]) | (~6569)));
            }
            arr_11 [i_0] [19] = ((max((~var_8), var_12)));
        }
        for (int i_3 = 2; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_25 -= (arr_12 [i_0 + 1] [i_3 + 2]);
            var_26 = (arr_12 [i_0 + 1] [i_3 - 2]);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_27 = (max(var_27, (~var_15)));

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_28 = 1023;

                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    var_29 = 21;
                    arr_22 [i_0 - 1] [i_0] [i_5] [i_6] = (var_7 * 1080798656);
                }
            }
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_30 ^= ((((((arr_15 [18]) ? var_12 : var_3))) ? (((arr_15 [0]) ? (arr_16 [i_7] [i_0 - 1] [i_7]) : (arr_16 [i_0] [12] [i_7]))) : (arr_16 [i_0 + 1] [i_0] [18])));
            arr_25 [i_0] = (var_14 ^ var_11);
            arr_26 [1] &= (max(((+(((arr_15 [2]) ? 35426 : var_8)))), (min((11 >> var_3), (var_7 * 255)))));
            var_31 = (min(var_31, 1));
            arr_27 [i_0] [16] [i_0] = (((~65515) ^ 0));
        }
    }
    for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
    {
        var_32 = (+-4499);
        var_33 = (min(var_33, (((((max((arr_19 [i_8 - 1] [i_8] [i_8]), var_2))) ? ((((var_14 != (arr_19 [i_8] [i_8] [i_8 + 1]))))) : ((~(arr_19 [i_8] [i_8] [i_8 + 1]))))))));
    }
    for (int i_9 = 3; i_9 < 8;i_9 += 1) /* same iter space */
    {
        arr_34 [i_9] [i_9] = min(1801835746, ((-(arr_14 [i_9 - 2] [i_9 - 3]))));
        arr_35 [i_9 + 2] = var_0;
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        var_34 = (min(var_34, ((max(((((3214168634 ? var_14 : 30110)) * 1)), ((((35390 ? 1 : var_1)))))))));
                        var_35 = (54 ? (arr_41 [i_9] [8] [i_9] [i_10] [i_11] [i_12]) : (max(((var_14 ? (arr_0 [i_11]) : 255)), (~var_8))));
                        var_36 = (max(118, ((var_14 ? (~var_2) : (arr_28 [i_9 - 1] [i_9 + 2])))));
                        arr_44 [i_9 + 2] [i_10] [i_11] = max(((~(arr_28 [i_9 + 1] [i_9 - 3]))), (min(var_7, ((~(arr_5 [i_10] [i_12]))))));
                    }
                }
            }
        }
        arr_45 [i_9 + 2] [2] = ((var_11 || ((((arr_36 [i_9] [i_9 - 3] [i_9 + 2]) ? (arr_36 [i_9 - 1] [i_9 + 1] [i_9]) : (arr_1 [10]))))));
    }
    /* vectorizable */
    for (int i_13 = 3; i_13 < 8;i_13 += 1) /* same iter space */
    {
        arr_49 [i_13] = (((((~(arr_46 [i_13])))) ? var_0 : 1));
        var_37 = ((var_3 ? ((-(arr_30 [21]))) : var_9));
    }
    #pragma endscop
}
