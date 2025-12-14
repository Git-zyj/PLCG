/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [0]))) : (((arr_1 [i_0]) | (arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_13 = 20;
                        var_14 = (((((arr_0 [i_0]) ? (arr_6 [8] [8] [8]) : (arr_0 [i_3]))) + ((17 ? (arr_10 [i_1] [9] [i_1] [i_1] [2] [i_1]) : var_11))));
                        arr_12 [i_1] = 0;
                        var_15 = ((+(((arr_5 [6] [5] [6]) + 216))));
                    }
                }
            }
            var_16 = (arr_0 [i_0]);
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            var_17 -= ((((((arr_13 [i_0]) + (arr_4 [i_0] [i_0] [i_0])))) ? 65532 : (arr_5 [0] [i_4] [i_0])));
            var_18 = (((-1 - (arr_3 [i_4] [i_0] [2]))));
            var_19 = (min(var_19, ((((arr_6 [i_0] [i_0] [i_0]) ? (arr_6 [i_4] [i_4] [3]) : (arr_11 [i_0]))))));
            var_20 -= (arr_11 [i_0]);
            arr_16 [i_0] [i_4] = (arr_3 [i_4] [i_0] [i_4]);
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {
            var_21 = var_4;
            var_22 = ((var_2 < ((((arr_13 [i_0]) && -72)))));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            arr_22 [i_6] [i_6] [i_0] = (((arr_4 [i_0] [i_0] [i_0]) && (arr_4 [i_0] [i_6] [i_6])));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        var_23 = (arr_18 [i_7 + 1] [i_7 - 1]);
                        var_24 = (min(var_24, (((var_3 | (arr_25 [i_7 - 2] [i_7 - 2] [i_7 - 1] [i_7 - 2] [i_7] [i_7 - 1]))))));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_25 &= (min((((((1 ? var_1 : 65534))) ? (max((arr_28 [i_9]), (arr_28 [i_9]))) : (((arr_28 [22]) ? (arr_28 [i_9]) : 255)))), (max((((arr_28 [i_9]) / (arr_28 [21]))), (((arr_28 [5]) ? (arr_27 [20]) : (arr_28 [i_9])))))));
        var_26 = ((((max((max((arr_27 [i_9]), (-9223372036854775807 - 1))), (arr_27 [i_9])))) ? (arr_27 [i_9]) : ((var_9 ? (arr_28 [i_9]) : ((65514 ? 7493127314187780267 : (-127 - 1)))))));
    }
    for (int i_10 = 1; i_10 < 20;i_10 += 1)
    {
        arr_32 [1] [i_10] = (min((((((((-2147483628 + 2147483647) >> (((arr_30 [i_10]) + 730507316))))) ? ((((arr_29 [17] [17]) >> (((arr_28 [i_10]) - 2307174881645634795))))) : (((arr_29 [5] [i_10]) | (arr_27 [i_10])))))), ((+(((arr_28 [i_10]) ? (arr_31 [i_10]) : 27))))));
        var_27 = ((!(((-(1 && 3))))));
        arr_33 [i_10] = (min((max((arr_29 [i_10] [i_10 + 1]), (arr_30 [i_10 - 1]))), (arr_31 [i_10])));
        arr_34 [i_10] [i_10] = (arr_31 [i_10]);
    }
    for (int i_11 = 0; i_11 < 19;i_11 += 1)
    {
        var_28 = ((var_10 ? ((var_11 ? ((min((arr_30 [i_11]), var_9))) : (((arr_28 [i_11]) >> (((-127 - 1) + 140)))))) : ((-(arr_28 [i_11])))));
        arr_38 [i_11] [i_11] = (((arr_29 [i_11] [i_11]) < (min(((33080 ? 51 : 32767)), (arr_37 [i_11])))));
    }
    var_29 = var_10;
    #pragma endscop
}
