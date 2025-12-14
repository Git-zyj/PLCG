/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (max(((!((min(var_0, var_13))))), ((max(var_10, var_0)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] &= (max((min((arr_4 [i_2] [i_0] [i_0] [i_0]), ((min((arr_2 [i_0]), (arr_2 [i_2])))))), ((~(max(-1, (arr_0 [i_1] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 &= 3340;
                                arr_12 [1] [1] [i_0] [i_3] [i_4] &= (min((((~(max((arr_10 [i_4] [i_3] [i_2] [i_1] [7]), -161644885))))), (max(127, (arr_9 [i_2] [i_0])))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_2] [i_2] = ((~(min((!127), ((~(arr_3 [i_1] [i_1] [i_1])))))));
                }
            }
        }
        arr_14 [1] = ((~(max((arr_11 [i_0] [i_0] [i_0] [i_0] [1]), (arr_3 [i_0] [6] [i_0])))));
        var_16 = (min(706037578, (arr_1 [i_0] [i_0])));
        arr_15 [i_0] = arr_10 [i_0] [i_0] [i_0] [i_0] [i_0];
        arr_16 [8] = (arr_5 [6] [6] [i_0] [i_0]);
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {
        var_17 &= (max(((min((arr_17 [i_5]), (arr_17 [i_5])))), (arr_9 [i_5] [i_5])));
        var_18 &= ((~(max(((max((arr_11 [3] [i_5] [i_5] [i_5] [i_5]), 114))), (((arr_1 [i_5] [i_5]) ? (arr_2 [i_5]) : (arr_1 [i_5] [i_5])))))));
        var_19 = (min((((!(arr_1 [i_5] [i_5])))), (min(((max((arr_2 [i_5]), (arr_11 [i_5] [i_5] [i_5] [i_5] [0])))), (max((arr_4 [i_5] [i_5] [i_5] [i_5]), (arr_4 [6] [i_5] [i_5] [i_5])))))));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {
        arr_23 [1] = ((((((arr_7 [i_6] [i_6] [i_6] [i_6]) | -1))) && ((!(arr_0 [i_6] [i_6])))));
        var_20 = (-89 > 706037578);
    }
    for (int i_7 = 2; i_7 < 14;i_7 += 1)
    {
        var_21 &= (min((min(-1989763532, 4216567135754042427)), (((((max(114, (arr_25 [1])))) > (((arr_25 [8]) ^ (arr_26 [i_7]))))))));
        var_22 = (max(((((arr_24 [i_7 - 1]) && ((((arr_26 [i_7]) ? (arr_24 [0]) : (-2147483647 - 1))))))), (max((((~(arr_25 [i_7])))), ((2147483647 ? (arr_26 [i_7 - 2]) : (arr_26 [11])))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    arr_32 [i_9] [i_7] [i_9] &= ((-11960 < ((-((min(0, 1)))))));
                    var_23 &= (((((arr_28 [i_8]) ^ -114)) + ((-(min((arr_24 [i_9]), (arr_28 [i_9])))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_24 &= ((min(5872068197568801930, (arr_24 [i_7 - 1]))));
                                var_25 &= (min((((~31178) * (((-114 && (arr_27 [i_9])))))), (((((!(arr_24 [i_7]))) && (arr_24 [i_7]))))));
                                var_26 &= ((((max((arr_31 [i_10] [i_9] [i_7] [i_7]), (arr_29 [i_9] [2] [i_8])))) ? (((~(arr_28 [i_9])))) : (((arr_24 [i_11]) ? (((arr_28 [i_7 + 1]) >> (((arr_35 [i_7]) + 681089408874234909)))) : (((max((arr_27 [i_10]), (-127 - 1)))))))));
                                arr_38 [15] [i_7] [i_9] [i_9] [i_11] = (((((arr_37 [i_7]) != 18446744073709551615)) ? (arr_33 [i_7] [i_7] [i_7] [i_7] [i_7] [1]) : ((((0 + 1163604147) != (min(12853034702854779927, 8)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
