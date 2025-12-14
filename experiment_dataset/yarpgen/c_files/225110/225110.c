/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 1;
        var_18 = var_4;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (min(((((arr_2 [i_1]) == 8589934464))), (max(-517092862, 105))));
        var_19 = ((((min((arr_1 [i_1]), (arr_1 [i_1])))) && ((((((5027525521606921458 == (arr_6 [i_1])))) ^ (arr_6 [i_1]))))));
        var_20 = (max((max((arr_6 [i_1]), ((-37 ? 1984887069 : 57)))), (((-(((arr_7 [i_1]) ? var_14 : var_9)))))));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_11 [i_1] [i_2] = var_17;

            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                arr_15 [i_3] [i_2] [i_2] [i_2] = ((-(((arr_13 [i_1] [i_1] [i_1] [i_1]) / (arr_13 [i_2] [i_2] [i_3 - 2] [i_2])))));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_21 = (min(255, 1));
                            var_22 = ((((((((var_1 ? 18446744073709551612 : var_5))) ? (max(var_0, 10393198997247304671)) : (arr_5 [i_3 - 2])))) ? (arr_17 [i_3 - 1] [i_3 - 1] [i_4 - 2] [i_3 - 1]) : ((1016 ? (46689 + -1016) : ((-18018 ? var_2 : 1402))))));
                            arr_20 [i_4] [i_2] = ((((((1 ? 1 : var_6)))) ? 4265485116 : var_5));
                        }
                    }
                }
            }
            arr_21 [i_1] = 1;
            var_23 = (arr_13 [i_1] [i_1] [i_1] [i_2]);
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_24 = 6144415003568934935;
                            arr_32 [i_6] [i_6] [i_6] [i_2] [i_6] = (min(var_3, (min(var_3, -2147483619))));
                            arr_33 [i_1] [i_2] [i_1] [i_7] [i_2] [i_6] [i_6] = 12288;
                        }
                    }
                }
            }
        }

        for (int i_9 = 2; i_9 < 10;i_9 += 1)
        {
            var_25 = ((((((arr_29 [i_9] [i_9] [i_9]) ? (max(2080374784, 9220033096248298703)) : (arr_16 [i_1] [i_9 - 1])))) ? -2048675192 : (max(0, 0))));
            arr_38 [i_1] [i_9 - 1] [i_1] = (min(((1 ? 1 : 1)), (((arr_23 [i_9] [i_9 + 1] [i_9] [i_9]) ? 1 : (arr_23 [i_9] [i_9 + 1] [i_9] [i_9])))));
        }
    }
    var_26 = (max(((min(-3109, (min(var_9, var_14))))), var_6));
    #pragma endscop
}
