/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_11 += (--1426381494);
                    var_12 += (((arr_8 [i_0] [11] [i_2 - 1]) / (((min((arr_3 [i_2]), 1426381483))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_13 = ((1426381494 ? (min((min((arr_8 [6] [i_3] [i_3]), (arr_0 [i_3]))), (min(1426381495, (arr_3 [i_3]))))) : ((1 ? -1426381477 : (arr_3 [i_3])))));
        var_14 |= ((((max((((arr_1 [1] [i_3]) | 1426381479)), (arr_0 [i_3])))) ? 511661992 : (((arr_5 [6]) ? (arr_7 [i_3] [1] [i_3] [i_3]) : (~-1426381495)))));
        var_15 = (min(-1426381471, ((min((arr_11 [i_3]), (arr_2 [i_3] [i_3]))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_3] = max(((min(-28060, (((arr_5 [i_3]) ? 4294967295 : (arr_13 [i_3] [0])))))), ((-(min((arr_16 [i_3] [i_3] [7] [i_5 + 2]), -4)))));
                    arr_18 [i_3] [10] [i_4] [i_5] |= (arr_3 [i_5]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            arr_29 [i_9] [i_7] = (((~0) ? (((-(arr_26 [i_6] [i_7] [10] [i_9])))) : ((((min(1, (arr_28 [i_8] [i_9])))) ? ((1775022059 | (arr_19 [11] [i_8]))) : 1526586631))));

                            for (int i_10 = 4; i_10 < 10;i_10 += 1)
                            {
                                arr_32 [i_6] [i_7] [i_7] [i_8] [i_9] [4] [i_8] |= 5;
                                var_16 &= ((~((((!(arr_21 [i_6] [i_9]))) ? ((((!(arr_20 [i_8]))))) : (arr_31 [i_10] [i_10] [i_10 + 3] [i_10 - 2] [i_10] [i_10] [i_10 + 1])))));
                            }
                            var_17 *= ((min((arr_25 [i_7] [i_9]), (arr_19 [i_8] [i_9]))));
                        }
                    }
                }
                var_18 = (arr_26 [i_6] [i_7] [i_7] [5]);
                arr_33 [i_6] = ((((1 ? 3697860031 : 8477248398949912025)) % 9969495674759639590));
            }
        }
    }
    #pragma endscop
}
