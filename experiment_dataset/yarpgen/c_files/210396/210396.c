/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_10 -= (((arr_1 [i_0]) / (arr_1 [i_0])));
        var_11 = (!-19046);
        var_12 -= (arr_1 [i_0]);
        var_13 -= 255;
        var_14 -= ((var_3 - (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_15 = ((var_9 < (arr_2 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_16 = ((-((var_7 & (arr_6 [i_1] [i_1] [i_1])))));
                    var_17 = var_6;
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_18 -= (((arr_2 [i_4 - 1]) ? var_5 : -19043));
                                var_19 -= (((!var_7) >> (((arr_14 [i_4 + 1] [i_5] [i_5 - 1] [i_1] [i_1]) - 203))));
                                var_20 -= (((!(arr_0 [i_3] [i_3]))));
                                var_21 = ((var_2 ? (arr_0 [i_4 + 3] [i_4 - 1]) : (arr_14 [i_4] [i_4] [i_4] [i_3] [15])));
                                var_22 -= ((~(arr_11 [i_1] [i_4 - 1] [i_4 - 1] [4])));
                            }
                        }
                    }
                    arr_15 [i_1] [i_1] [i_3] [i_3] = var_0;
                    var_23 -= (((arr_1 [i_1]) ? (arr_1 [i_3]) : (arr_1 [i_1])));
                }
            }
        }
        var_24 -= (((0 ? 255 : 6)));
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            {

                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    var_25 = (((((-((min(var_0, var_0)))))) ? var_3 : (((49603 ? (arr_22 [i_6 - 2] [i_6 + 1] [i_6]) : var_6)))));
                    arr_24 [i_6] [i_7] [i_8] = (((var_6 + 9223372036854775807) >> 19));

                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        var_26 = ((~(max(9223372036854775807, -1210496223514978733))));
                        var_27 = (min(var_27, (((-74 * ((+((var_9 >> (((arr_7 [i_6 - 2] [i_6 - 1]) - 498603688)))))))))));
                        var_28 = (((arr_12 [i_6] [i_6] [i_6]) == (min((arr_5 [i_6 + 1]), var_7))));
                        var_29 -= 47953;
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        var_30 = ((237 ? (((var_8 ? -16384 : ((47 ? 255 : (arr_26 [i_6 + 1] [i_6] [i_8] [i_8])))))) : (((arr_19 [i_6 - 2]) ? var_7 : (arr_19 [i_6 + 1])))));
                        var_31 -= (((49603 ? 19075 : 40660)) & ((-(arr_11 [i_7] [i_7] [i_8] [i_10]))));
                    }
                }
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    var_32 = 1;
                    var_33 = (max(1878907237, (!46)));
                    var_34 -= (max(((max((arr_14 [18] [i_7] [i_6 - 2] [i_7] [i_6]), (arr_17 [i_6 - 1])))), ((~(arr_9 [i_11] [i_6])))));
                    var_35 = (arr_31 [i_6] [i_7] [i_11] [i_11]);
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            {
                                arr_39 [i_6 - 2] [i_6] [i_11] [i_6 - 2] [i_12 - 1] [i_11] [i_13] = (min(((var_5 ? var_1 : 56)), ((((max(var_3, (arr_17 [i_7]))) != ((((arr_25 [i_6 - 1] [i_7] [i_11] [i_6] [i_13]) & var_4))))))));
                                var_36 = (((max(462470895, (arr_31 [i_12 - 1] [i_13] [i_13] [i_12 - 1]))) | (((-(arr_31 [9] [i_13] [i_12 - 1] [i_12 - 1]))))));
                            }
                        }
                    }
                }
                var_37 = 9223372036854775807;
            }
        }
    }
    #pragma endscop
}
