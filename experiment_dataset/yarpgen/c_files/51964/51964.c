/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_9 ? (((((var_0 <= var_6) != (min(var_5, var_8)))))) : var_17);
    var_21 = (max((((var_9 + -1) ? ((((-722459916 + 2147483647) >> (var_3 - 20790)))) : (var_13 - var_5))), (max(((var_3 ? var_4 : var_7)), var_8))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_14 [1] = ((((-7021488164990402612 ? 7021488164990402606 : (!var_4)))) && ((max((arr_5 [i_1] [i_0]), (var_11 && 7021488164990402617)))));
                            arr_15 [i_0] [i_1] [i_0] [i_1] [i_1] [i_3] [i_2] = ((((min((arr_3 [i_2]), var_4))) <= ((max((arr_11 [i_0] [i_4]), (var_15 >= var_3))))));
                            var_22 = (max(((((arr_5 [i_0] [i_3]) > ((max(var_7, (arr_9 [i_0] [i_0] [i_1] [i_0]))))))), (((arr_4 [6] [i_2]) - (arr_4 [i_1] [i_2])))));
                            var_23 = (((7021488164990402603 % 1125899906842623) != var_17));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_24 = (min(var_24, ((max(((((arr_2 [i_0] [i_0]) ? (arr_2 [i_2] [i_2]) : (arr_6 [i_5] [i_1])))), (((arr_4 [i_0] [i_1]) + (arr_4 [i_5] [i_1]))))))));
                            var_25 = (min(var_25, (-735538453 || 1)));
                            var_26 = (((((~(arr_9 [i_3] [i_1] [i_2] [i_1])))) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (!var_11)));
                            arr_19 [i_3] [i_3] = (max(((max((arr_2 [i_1] [i_0]), var_14))), -var_18));
                            var_27 = (min(var_27, (max(((~(max(var_8, (arr_0 [i_0]))))), (((~(arr_8 [i_0] [i_0]))))))));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_28 = ((((min(7021488164990402618, 3366652522365666590)))));
                            arr_23 [i_0] [i_1] [i_0] = var_16;
                        }
                        var_29 = min((arr_1 [i_0] [i_1]), ((max((-3366652522365666615 >= 32767), 255))));
                        arr_24 [i_0] [i_1] = ((((23404 ? -77 : 32767)) << (((arr_21 [i_0] [i_1] [i_2] [i_3] [i_0]) + 1830276312))));

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_30 = (max(var_30, var_3));
                            var_31 = ((!((min(((((arr_1 [i_2] [i_2]) - (arr_26 [i_3] [i_3] [i_3] [i_3] [i_0] [i_3] [i_0])))), (min((arr_9 [0] [i_1] [i_1] [i_1]), var_6)))))));
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_32 = (arr_0 [i_3]);
                            arr_32 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((~(((!(arr_21 [i_0] [i_1] [i_2] [i_2] [i_8]))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_33 += -2990413883704674524;
                            var_34 -= (((arr_27 [i_9] [i_3] [i_2] [i_1] [3]) - (arr_10 [i_0] [i_1] [i_2] [i_2] [i_9])));
                            var_35 = (max(var_35, (((arr_25 [i_0] [7] [i_2] [i_2] [i_9]) ? var_9 : ((var_14 ? (arr_2 [i_0] [i_0]) : (arr_1 [i_3] [i_2])))))));
                        }
                        arr_36 [i_0] = (max((((((max(-3366652522365666619, (arr_21 [i_0] [i_1] [i_2] [2] [i_0])))) ? ((-2052798675 ? -3366652522365666596 : 74)) : ((((arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [i_1] [i_1]) : -87)))))), (((((arr_25 [1] [i_3] [i_2] [i_1] [i_0]) ? var_13 : (arr_17 [i_0] [i_1] [i_2] [i_3] [2]))) ^ ((min(var_3, var_5)))))));
                    }
                }
            }
        }
        var_36 ^= (min(var_17, (arr_29 [8] [8] [8] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_10 = 4; i_10 < 20;i_10 += 1)
    {
        var_37 = ((((((arr_38 [i_10 - 4]) && (arr_37 [i_10] [i_10])))) <= (arr_38 [i_10 + 3])));
        arr_39 [i_10] = ((arr_37 [i_10] [i_10]) ? var_15 : var_17);
    }
    #pragma endscop
}
