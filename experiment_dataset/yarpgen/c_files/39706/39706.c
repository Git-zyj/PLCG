/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 4050205779936241967));
    var_13 = var_11;
    var_14 |= var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (min(1, (min(var_11, (arr_0 [i_0] [i_1 - 1])))));
                var_16 = (min(var_16, (((((min(((min((arr_0 [i_0] [i_1 + 2]), (arr_3 [i_1])))), ((var_2 ? var_7 : var_8))))) ? (((max(1, (min(var_2, 60713)))))) : (min(1, var_1)))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 = (max((arr_8 [i_2]), (max((arr_8 [i_2]), -5728723244524673951))));
        var_18 = (min(var_18, ((((((-(arr_7 [i_2] [i_2])))) ? (((arr_6 [i_2]) ? (arr_6 [i_2]) : var_5)) : (max((arr_6 [i_2]), 45659)))))));

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_19 = (max(var_4, (arr_6 [i_2])));
            var_20 = var_5;
        }
        var_21 = ((((~192) ? (arr_7 [i_2] [i_2]) : 3502424874)));
    }
    for (int i_4 = 4; i_4 < 9;i_4 += 1)
    {

        for (int i_5 = 3; i_5 < 7;i_5 += 1)
        {
            var_22 = (arr_7 [i_4 - 1] [i_4 - 1]);
            var_23 = (min(var_23, ((min((((var_1 - var_10) ? ((-(arr_4 [i_4 - 4]))) : (!var_8))), ((-var_1 ? (arr_4 [i_5 - 1]) : -25475)))))));
        }
        for (int i_6 = 2; i_6 < 6;i_6 += 1)
        {
            var_24 = (((max(var_9, (arr_8 [i_6])))));
            var_25 = (((((((((arr_20 [i_6] [9] [3]) ? -12029 : (arr_10 [i_4] [i_6] [i_6 + 1])))) ? 255 : ((1388791982 ? 2434618252 : var_3))))) != (max((min(18446744073709551604, (arr_12 [i_6]))), (arr_19 [i_4] [i_4])))));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 6;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        var_26 += ((((min(2147483639, (arr_7 [i_4 - 1] [i_6 + 4])))) ? ((max((arr_21 [0] [i_7 + 3]), 48))) : (arr_26 [i_4] [i_4] [i_4 - 4] [i_4] [i_4])));
                        var_27 = (((arr_16 [i_7] [i_8]) ? var_3 : ((max((arr_25 [i_4 - 4] [i_4 - 4] [i_4] [i_6] [i_4]), (arr_25 [i_4 - 4] [5] [i_4] [i_6] [i_4 - 4]))))));
                        var_28 = (max((((1 ? 26 : 0))), ((((45659 ? 32 : 14234))))));

                        for (int i_9 = 2; i_9 < 9;i_9 += 1)
                        {
                            var_29 += (max((min(var_9, (arr_4 [i_7 - 1]))), (arr_4 [i_7 + 2])));
                            var_30 = (arr_21 [i_6] [i_7 + 1]);
                        }
                    }
                }
            }
            var_31 = (max(((min(-12317, 19876))), ((2756034923 ? (arr_10 [i_6 + 3] [i_6 + 4] [i_4 - 4]) : (arr_10 [i_4 - 4] [i_4 - 1] [i_4 - 2])))));
            var_32 = 35184338534400;
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_33 = (max(((max((-2147483647 - 1), 16))), (min(((min(var_2, var_1))), (max(15957815727081984188, (arr_21 [i_10] [i_10])))))));
            var_34 = (max(var_34, 2147483646));
            var_35 = (max((((-106 ? 49152 : var_4))), ((0 ? (arr_9 [i_4 - 4] [i_10] [i_4 - 4]) : 65527))));

            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                var_36 += max((min(var_0, var_10)), ((((arr_13 [i_4 - 1]) ? var_5 : (arr_1 [2])))));
                var_37 = ((-(((7899200493215371962 || (arr_28 [i_11] [i_10] [i_4] [i_4 - 3] [i_4 - 3] [i_10] [8]))))));
            }
        }

        /* vectorizable */
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            var_38 = (max(var_38, var_8));
            var_39 = (var_7 ? (arr_24 [i_4] [i_4 - 3] [i_4]) : var_8);
        }
    }
    #pragma endscop
}
