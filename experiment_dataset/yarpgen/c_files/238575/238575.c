/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_3);
    var_16 = (max(var_16, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((-1243377582 ? (min(((var_9 ? -1 : 57)), (0 < 9))) : (-127 - 1)));
                var_17 = (min(var_17, (((min((arr_2 [i_0]), var_13))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_18 = (max(var_18, ((((min((min(var_5, var_5)), (63488 & var_12))) > (arr_7 [i_2] [i_2]))))));
        var_19 = (((3 ? 9234129031710200143 : 4026531840)));
        var_20 ^= (min((arr_8 [i_2] [i_2]), (min((max(var_10, (arr_7 [i_2] [i_2]))), 199))));

        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            var_21 ^= ((((!(arr_1 [i_3 + 1] [i_3 - 1])))));
            var_22 = (max((((183 && ((min(30224, (arr_10 [i_2] [i_3 + 1]))))))), ((var_2 + (arr_1 [i_3 + 1] [i_3 - 1])))));

            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {

                /* vectorizable */
                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    var_23 = ((~(268435455 <= 1923604953291170768)));

                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        var_24 = ((-30224 ? (arr_3 [i_4]) : var_13));
                        arr_21 [i_6] [i_5] [i_2] [i_4] [i_2] [i_3] [i_2] = (((((0 & (arr_10 [i_2] [i_2])))) & (arr_12 [i_3 - 2])));
                        var_25 = (((arr_14 [i_3 - 2] [i_3] [i_4] [i_2]) != (arr_14 [i_3 - 2] [i_3] [i_4 + 2] [i_2])));
                        var_26 = (max(var_26, (((var_7 ? (arr_2 [i_4 + 1]) : (arr_16 [i_3] [i_3 - 1] [i_4 + 2] [i_3]))))));
                    }
                    var_27 = ((var_9 || (arr_0 [i_3 + 1])));
                }
                var_28 -= (((((((16757 < (arr_10 [i_3] [i_4 + 2])))) | (arr_10 [i_3] [i_4 + 3]))) <= var_11));
            }
            /* LoopNest 3 */
            for (int i_7 = 3; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_29 = ((((-var_6 ? ((0 ? (arr_15 [i_2] [i_2] [i_7 + 1]) : var_14)) : ((2242325697971350892 ? 127 : 1077704450))))) ^ (max((arr_0 [i_2]), ((max(var_7, (arr_2 [i_2])))))));
                            var_30 = (min(var_30, (((-30233 ? -30224 : 124)))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 2; i_10 < 18;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 17;i_13 += 1)
                    {
                        {
                            var_31 -= ((max((arr_2 [i_10]), ((((arr_1 [i_13] [i_12]) & var_8))))));
                            var_32 = 4294967292;
                            arr_39 [i_2] [i_2] = ((arr_1 [i_10 - 2] [i_10 + 2]) | (min((arr_13 [i_10 - 1] [i_10 - 1] [i_10 + 1]), (arr_16 [i_2] [i_13 + 3] [i_10 + 1] [i_2]))));
                        }
                    }
                }
            }
            var_33 ^= ((-(arr_37 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
            var_34 = ((~(((min(4294967292, var_8))))));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            var_35 = (min(var_35, (((97 / (arr_14 [i_2] [i_14] [i_14] [4]))))));
            var_36 = (arr_0 [i_2]);
        }
    }
    var_37 = var_13;
    #pragma endscop
}
