/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    var_20 = var_9;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = 3239477619;

        for (int i_1 = 2; i_1 < 8;i_1 += 1) /* same iter space */
        {
            var_22 = (min(var_22, (((!((((((arr_0 [i_0] [i_0]) || 1566872503)) ? (((var_3 ? 1 : 1))) : ((1 ? 984505582639484616 : (arr_1 [i_0])))))))))));

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                var_23 = (min(var_23, (((~(arr_7 [i_1 + 2] [i_2 - 1] [i_2 - 1]))))));
                var_24 = (min(var_24, ((((1 < 1566872483) < 0)))));
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_25 = (((((var_17 + (arr_10 [i_0] [i_1] [2] [i_0])))) / ((1 ? (arr_1 [i_1 - 1]) : 176))));
                var_26 = (min(var_26, (arr_9 [i_1])));
                var_27 = (arr_1 [i_3]);
                arr_11 [i_0] = (min(((((arr_0 [i_1 - 1] [i_1 - 1]) & var_10))), (((((-9223372036854775807 - 1) - -60)) - -984505582639484616))));
            }
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        {
                            arr_19 [i_0] = 1;
                            var_28 |= 1;
                            arr_20 [i_0] [i_4] [i_5] [i_0] = (((!-984505582639484624) ? var_0 : (((((65528 ? 78 : 20))) ? (!-1276798872068304618) : (max(var_14, -984505582639484617))))));
                            var_29 |= (((((-37 ? 31 : (arr_13 [i_0] [i_1] [i_4] [i_5]))) + ((max(33082, (arr_4 [6] [i_1] [0])))))));
                        }
                    }
                }
                var_30 = (min(var_30, 176));
            }
        }
        for (int i_7 = 2; i_7 < 8;i_7 += 1) /* same iter space */
        {
            var_31 = ((1 ? var_8 : (arr_17 [i_0] [i_0] [i_0] [i_7] [0] [0])));
            arr_24 [2] [i_0] [2] = ((183 ? ((var_13 ? -984505582639484608 : 5531102717733785904)) : (14 || 1)));
            arr_25 [i_0] = ((((min((9223372036854775790 != -66), (1359179958 <= var_1)))) % ((-(((arr_23 [i_0]) ? 767 : var_10))))));
        }
        var_32 ^= (min((((-((-(arr_14 [7] [7] [i_0] [i_0])))))), (((((var_7 ? (arr_16 [8] [i_0] [i_0] [i_0] [8]) : -984505582639484636))) ? (((176 ? (arr_1 [4]) : (arr_16 [i_0] [8] [i_0] [i_0] [0])))) : (((arr_7 [i_0] [i_0] [i_0]) | 984505582639484620))))));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        arr_29 [i_8] = ((((var_0 < (arr_28 [i_8]))) ? (!-984505582639484627) : (((!(arr_27 [i_8] [i_8]))))));
        arr_30 [i_8] = (!((((arr_27 [i_8] [i_8]) + var_10))));
    }
    var_33 = (min(77, ((((!79) <= (!702660170087069352))))));
    #pragma endscop
}
