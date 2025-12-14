/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = var_1;
    var_15 = (max(((var_1 % (~var_9))), ((((var_2 ? var_2 : var_10)) ^ ((var_4 ? 0 : var_2))))));
    var_16 = (min(4294967293, 4294967295));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((-(((arr_3 [i_1] [i_1]) ? (arr_7 [i_1] [1] [i_2]) : (arr_8 [i_0 - 2])))));
                    arr_10 [i_0 - 1] [i_1] [i_0] = (max((arr_2 [i_0] [i_1]), (var_12 / var_4)));
                }
                for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_16 [i_1] [1] [1] [i_4] [i_3 + 1] = (((arr_1 [i_0 + 1] [i_3 + 2]) == (min(((max(var_4, var_8))), (((var_11 + 2147483647) >> (28672 - 28646)))))));
                        var_17 = (max(var_17, (arr_3 [i_4] [i_4])));
                        var_18 = (max(4294967292, 989635843));
                        var_19 = (max(var_19, (((-(min(((min(var_8, var_8))), ((255 ? (arr_11 [i_0] [i_1] [i_4]) : (arr_12 [i_4] [i_0] [i_0] [i_0]))))))))));
                    }
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {

                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            var_20 = 1;
                            var_21 = (min(var_21, ((min((min(((max(1, 63))), var_1)), (((!(~1)))))))));
                            arr_23 [i_0] [i_1] [i_1] [10] [4] [i_5 - 1] [i_5 - 1] = ((((min((arr_15 [i_0] [1] [i_0 - 2] [11]), (arr_15 [i_3 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 2])))) << (((var_2 == (((min(var_11, var_3)))))))));
                            arr_24 [0] [0] [i_1] [i_5] [i_1] = (min((((var_2 ? (min((arr_22 [i_1]), var_0)) : (min((arr_22 [i_1]), var_0))))), ((((1 ? (arr_6 [i_1]) : (arr_8 [12]))) + ((min(4294967275, 4294967293)))))));
                        }
                        var_22 = arr_8 [i_3 + 3];
                        var_23 *= var_0;
                    }
                    var_24 = (min(var_24, ((((315165373 ? (!-118) : -94))))));
                    var_25 = ((!((max(((((arr_12 [i_0] [i_1] [i_3] [i_1]) && var_3))), (min((arr_3 [i_1] [i_1]), 0)))))));
                }
                for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 4; i_8 < 12;i_8 += 1)
                    {
                        var_26 = (((63 * 117) - (((min(9007199254740992, var_10)) + (((var_11 ? (arr_29 [i_8 - 4] [i_7 + 1] [i_0] [i_0 - 2] [i_0]) : 5216)))))));
                        var_27 = (arr_6 [i_1]);

                        for (int i_9 = 1; i_9 < 11;i_9 += 1)
                        {
                            var_28 = (max(var_28, (((-((~(arr_8 [i_0 + 1]))))))));
                            var_29 ^= ((min(-24576, var_10)));
                            var_30 = (min(((((arr_30 [i_0] [i_1]) && (arr_15 [i_8 + 1] [i_1] [i_1] [i_0])))), ((((((var_12 ? (arr_21 [1] [i_1] [i_7] [1] [1] [i_1]) : 23691))) ? ((var_6 ? (arr_27 [i_8]) : 1536)) : var_11)))));
                            var_31 = (max(var_31, ((((((arr_29 [i_8 - 2] [i_8 - 2] [i_9] [i_8 - 2] [9]) > (arr_33 [i_8 - 1] [i_8 - 1] [12] [i_8 - 2] [i_8]))) ? ((min((arr_29 [i_8 - 4] [6] [i_9 + 2] [i_9] [0]), (arr_29 [i_8 - 3] [i_8] [i_8] [i_9] [i_9])))) : (((arr_29 [i_8 - 4] [i_8 - 3] [i_9] [11] [10]) & (arr_33 [i_8 - 3] [i_8 - 3] [i_9] [i_9] [i_9]))))))));
                        }
                    }
                    var_32 = ((~((~(((arr_29 [i_0] [11] [11] [i_1] [i_1]) ? var_8 : 42))))));
                    arr_34 [i_1] = ((((max(237, -1641933023))) ? ((-(arr_17 [i_0] [i_1] [i_7 + 2]))) : ((var_9 ? (arr_25 [i_0 - 2] [i_1] [i_1] [i_7 - 1]) : (arr_25 [i_0] [i_0] [i_7 + 2] [i_7 + 1])))));
                    var_33 &= ((var_12 & ((((!88) ? ((-6058996769353410720 ? 1 : 12)) : ((4294967277 ? 4294967293 : -118)))))));
                }
                var_34 += ((var_8 ? (arr_15 [i_0 - 1] [i_1] [11] [i_1]) : 2));
                var_35 = (max(var_35, (arr_33 [i_0] [i_0] [i_0] [i_1] [i_0])));
            }
        }
    }
    #pragma endscop
}
