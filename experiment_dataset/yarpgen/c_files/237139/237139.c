/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((23 ? 9225 : 61032));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 |= (((arr_1 [i_0] [i_0]) ? 65535 : ((-(min(23, var_8))))));
        var_13 = (max(var_13, (~var_3)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 ^= ((((min(var_8, 17157394429287648169))) ? ((65507 ^ (max(var_8, var_1)))) : (((-(arr_4 [i_2 - 1] [i_1] [i_0] [i_0]))))));
                    var_15 = (max(var_15, -24));
                }
            }
        }
        var_16 ^= (~-552545233);
        var_17 = (min(var_17, (arr_2 [i_0] [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    {
                        var_18 |= (min((((-(arr_9 [i_4 - 3])))), (min((min(928822867940687029, (-9223372036854775807 - 1))), ((min(var_7, var_10)))))));
                        var_19 |= -2017;
                        var_20 ^= ((~((-(((arr_7 [i_5] [i_5]) ? var_8 : (arr_12 [i_3] [i_4] [4])))))));
                        var_21 = (max(var_21, ((((min((((arr_8 [i_4]) ? 11489 : 16417)), (((arr_17 [i_3] [i_3] [i_5] [i_6 - 1] [i_4]) ? (arr_2 [i_4] [i_4] [i_5]) : var_0)))) == ((min((arr_16 [i_6] [i_6 + 1] [i_3]), (arr_4 [i_4 + 2] [i_5] [i_6 - 1] [i_6 - 1])))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 20;i_8 += 1)
            {
                {
                    var_22 ^= 61038;
                    var_23 = (min(var_23, -1));
                    var_24 |= ((((min(var_4, (arr_1 [i_7 + 1] [i_8 - 1])))) ? (min(var_9, (arr_17 [i_3] [i_8] [i_8] [i_8 - 2] [i_8]))) : (((arr_17 [i_3] [i_7] [i_8] [i_8 - 1] [i_8]) ^ (arr_1 [i_7 - 2] [i_8 - 1])))));
                }
            }
        }
        var_25 ^= var_0;
        arr_22 [i_3] |= (arr_10 [i_3] [i_3] [i_3]);
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
    {
        var_26 = (max(var_26, (((-((1 ? (arr_23 [i_9]) : (arr_23 [i_9]))))))));
        var_27 ^= (min((((((-(arr_7 [i_9] [i_9])))) ? (~var_8) : (((2184474380 ? 1 : (arr_7 [i_9] [i_9])))))), (arr_13 [i_9] [i_9] [i_9])));

        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            var_28 = (min(var_28, (((-(((arr_17 [i_9] [18] [i_9] [i_9] [i_9]) ? (arr_17 [i_9] [i_9] [i_10] [i_10] [i_9]) : (arr_17 [i_9] [i_10] [i_9] [i_10] [i_9]))))))));
            var_29 |= (min(((min((arr_17 [i_9] [i_9] [i_9] [i_10] [i_10]), (arr_17 [i_9] [i_9] [i_9] [i_9] [i_10])))), ((119 ? 127 : 98))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 19;i_12 += 1)
                {
                    {
                        var_30 = (max(var_30, ((((var_6 + 2147483647) >> (((((((0 ? var_4 : (arr_31 [i_10] [i_10] [i_12])))) ? (min((arr_18 [i_10] [i_10] [i_12]), (arr_26 [i_9] [i_11] [i_9]))) : (((127 ? var_5 : (arr_13 [i_9] [i_9] [i_12 + 2])))))) + 7890935735051970352)))))));
                        arr_32 [i_9] [i_10] [i_10] [i_9] [i_10] |= ((~(arr_11 [i_9] [i_12 - 2] [i_12 - 1] [i_12 + 1])));
                        var_31 = (max(var_31, (((((arr_30 [i_10] [i_12 + 2] [i_12 + 2]) ? ((54042 ? 801097710 : var_5)) : (max((arr_30 [i_9] [i_9] [i_12]), var_3)))) ^ (((((((arr_2 [i_9] [11] [i_9]) ? var_10 : (arr_27 [i_9])))) ? ((var_0 / (arr_25 [i_10] [i_11]))) : (((arr_13 [i_9] [i_10] [3]) ^ var_6)))))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    {
                        var_32 = (max(var_32, var_1));
                        var_33 |= ((~(~-801097710)));

                        for (int i_15 = 0; i_15 < 21;i_15 += 1)
                        {
                            arr_39 [i_9] [i_10] [19] [i_15] [i_15] [i_10] [i_10] |= (~(min((arr_27 [i_9]), ((var_10 ? -8804 : (arr_24 [i_9]))))));
                            var_34 = (min(var_34, ((((((~(arr_14 [i_9] [i_9] [i_9] [i_14])))) ? (arr_5 [i_9] [i_9] [i_9] [i_9]) : 1)))));
                        }
                        for (int i_16 = 0; i_16 < 21;i_16 += 1)
                        {
                            var_35 = (max(var_35, (~0)));
                            var_36 |= ((11493 - ((-801097727 | ((-(-32767 - 1)))))));
                            var_37 ^= (~var_9);
                        }
                        for (int i_17 = 0; i_17 < 21;i_17 += 1) /* same iter space */
                        {
                            var_38 |= (62135 - 7);
                            var_39 = (max(var_39, (((arr_2 [i_13] [i_10] [i_17]) ? (((~(arr_10 [i_13] [i_13] [i_13])))) : ((((31626 ? 1 : var_3)) ^ (arr_21 [i_10] [i_13])))))));
                            arr_45 [i_9] [i_10] [i_13] [11] [11] |= ((((min(127, ((~(arr_42 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))) ? (3806 ^ 14) : (min(var_9, -12883))));
                            var_40 = (max(var_40, ((min(((-var_2 ? ((-(arr_0 [i_9]))) : 20638)), var_1)))));
                            var_41 = (max(var_41, (((~((min((arr_21 [i_9] [i_10]), (arr_21 [i_17] [i_10])))))))));
                        }
                        for (int i_18 = 0; i_18 < 21;i_18 += 1) /* same iter space */
                        {
                            var_42 = (max(var_42, ((((((-(arr_24 [i_18])))) && -var_4)))));
                            arr_49 [i_10] [i_18] [i_13] [14] [i_18] |= arr_23 [i_9];
                            var_43 = (min(var_43, ((-(min((arr_42 [i_9] [i_18] [i_18] [i_9] [16] [i_10]), ((var_6 ? (arr_17 [i_9] [i_9] [i_13] [i_14] [i_18]) : (arr_29 [i_10] [i_10] [i_14] [i_18])))))))));
                        }
                    }
                }
            }
            var_44 = (min(var_44, (((-(arr_48 [i_9] [i_10] [i_10]))))));
        }
    }
    #pragma endscop
}
