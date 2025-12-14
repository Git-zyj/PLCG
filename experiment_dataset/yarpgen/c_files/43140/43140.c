/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((53 ? 0 : 1)))));
    var_12 = (max(var_12, ((!((max(1, (42 & 0))))))));
    var_13 = ((((max(((min(0, var_8))), var_5))) ^ (max((var_3 ^ var_1), var_10))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((min((((arr_0 [i_0]) ? var_8 : var_8)), (((arr_0 [i_0]) ? var_8 : (arr_1 [i_0] [i_0])))))) ? var_4 : (arr_1 [i_0] [i_0])));
        var_14 = (max(var_14, (((~(max((arr_0 [6]), (((arr_1 [6] [6]) << var_9)))))))));
        arr_3 [i_0] = (min((((arr_1 [i_0] [i_0]) & var_7)), (min(var_7, (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_15 = (max(var_15, ((min((arr_8 [i_1] [i_1] [i_1]), 1)))));
            arr_9 [i_2] [i_1] [1] = var_6;

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_16 -= (arr_11 [i_1] [i_1] [2] [i_3]);

                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    var_17 = (max(var_17, (!1)));
                    var_18 = (min((((arr_11 [i_4] [4] [i_2] [i_1]) ? 1 : ((-(arr_10 [i_1] [8] [i_1] [i_4]))))), (arr_10 [i_4 + 1] [i_4 + 1] [i_1] [i_4 + 1])));
                    var_19 = ((((arr_4 [i_1] [i_1]) | (((arr_13 [i_4 - 1] [i_3] [i_2] [i_1]) ? (arr_15 [i_1] [i_4] [1] [i_4]) : (arr_0 [i_1]))))));
                }
            }
            var_20 += (((arr_11 [i_1] [i_2] [i_2] [i_2]) + (((arr_15 [i_1] [1] [5] [1]) ? (arr_7 [6] [i_2] [8]) : 90))));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {
            arr_20 [i_1] = ((1 / ((((239 + var_4) >= (var_8 & var_7))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        var_21 = (((182 != (((arr_26 [i_1]) ? 1 : (arr_8 [i_5] [i_6] [1]))))));
                        var_22 = ((((var_9 & (arr_24 [i_7] [i_6] [i_1] [i_1] [8] [i_1])))));
                    }
                }
            }
            var_23 = (max(var_23, (arr_8 [i_5] [i_5] [i_5])));
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
        {
            var_24 = (min((((0 != (arr_10 [i_1] [1] [i_1] [i_1])))), (arr_22 [i_8] [i_1] [i_1] [i_1])));
            var_25 = (max(7839433143351533461, var_1));
            arr_30 [i_1] [i_1] [i_1] = ((7 ? 17 : -7839433143351533462));
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
        {
            var_26 = (max(var_26, (((((((((-106 ^ (arr_13 [i_1] [i_1] [1] [i_9])))) ? -64 : ((var_1 ? var_10 : var_6))))) ? ((~(arr_28 [i_1]))) : (min(((min((arr_27 [i_1] [i_9]), (arr_8 [9] [9] [i_1])))), ((101 ? (arr_29 [i_1] [i_1]) : var_3)))))))));
            arr_34 [i_1] = (max((max((arr_16 [i_9] [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_24 [i_9] [i_9] [i_1] [i_1] [i_1] [i_1]))), (((arr_32 [i_1] [i_1]) & (min(-7839433143351533461, var_1))))));
        }
        /* LoopNest 3 */
        for (int i_10 = 3; i_10 < 6;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            var_27 = arr_10 [i_1] [i_10] [i_1] [6];
                            var_28 = ((((min(var_7, ((((arr_1 [i_1] [i_12]) & (arr_35 [i_12]))))))) ? (max((((23 && (arr_38 [i_13] [i_1] [i_1] [i_10])))), 68)) : 1));
                            var_29 = (min(var_29, ((((~var_0) & ((((var_7 ? (arr_26 [i_13]) : var_7)))))))));
                        }
                        var_30 = (min(var_30, ((min(((var_4 ? ((((arr_21 [i_1] [i_12] [i_1] [i_12]) >= 32758))) : var_2)), (arr_8 [6] [i_10 - 1] [i_10 - 1]))))));
                    }
                }
            }
        }
        arr_45 [i_1] [i_1] = ((((((104 ^ (arr_31 [i_1] [i_1] [i_1]))) | (arr_22 [i_1] [i_1] [i_1] [i_1]))) / (arr_13 [i_1] [i_1] [i_1] [i_1])));
    }
    var_31 = ((((min(var_4, var_4))) ? var_2 : ((min(1, 1)))));
    #pragma endscop
}
