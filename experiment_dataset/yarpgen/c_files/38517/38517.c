/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_15));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = ((+((((arr_3 [i_0 - 1]) < (arr_3 [i_0 - 1]))))));
                    var_20 = var_10;
                    arr_8 [i_0] [i_0] [i_0] [8] = (arr_7 [i_0 + 1] [i_0]);
                    var_21 -= (arr_1 [i_1]);
                    var_22 = (min(var_22, var_4));
                }
            }
        }
        arr_9 [i_0] = ((((var_8 == (arr_7 [i_0 + 2] [0]))) ? (arr_7 [i_0] [i_0 - 1]) : (arr_5 [i_0] [i_0 - 1])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 21;i_4 += 1)
            {
                {
                    arr_15 [i_0] = (((arr_2 [i_0] [i_4 + 1]) > (arr_2 [i_0] [i_4 + 1])));
                    arr_16 [i_0] [i_0] = (min(((!(arr_5 [i_0] [i_4 - 2]))), (((arr_13 [i_0 + 1] [i_0]) || (arr_5 [i_0] [i_4 - 2])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                {
                    var_23 = (min(var_23, ((((arr_1 [i_5]) ? (((arr_18 [i_0 + 1]) ? var_17 : (arr_1 [i_5]))) : (arr_6 [i_5] [i_5]))))));
                    var_24 = ((~(arr_11 [i_0])));

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_25 -= ((((((((arr_18 [19]) ? (arr_2 [i_5] [i_7]) : var_16)) * ((5619 ? 9406313257267323738 : 38))))) ? (--130486035) : ((((min((arr_12 [i_0] [12] [i_6]), var_1))) ? (((arr_2 [i_5] [6]) & (arr_11 [i_5]))) : (((~(arr_10 [i_5] [i_5] [i_5]))))))));
                        var_26 -= var_2;
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_27 -= (((((var_16 ? (arr_23 [i_8] [i_8]) : (arr_3 [i_8]))) > (arr_17 [i_8]))));
        arr_25 [i_8] [i_8] = arr_23 [i_8] [i_8];
        var_28 -= ((((((9223372036854775791 == (((5619 ? 255 : 6))))))) == (arr_19 [i_8] [i_8] [i_8] [i_8])));
        var_29 -= ((max((arr_1 [i_8]), (arr_11 [i_8]))));
        var_30 -= (arr_5 [i_8] [i_8]);
    }
    /* LoopNest 3 */
    for (int i_9 = 3; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {
                    var_31 = (arr_20 [i_10] [i_9 - 1] [i_10]);
                    var_32 = ((((var_9 ? (arr_23 [i_9] [i_9]) : ((-(arr_28 [i_9 - 1]))))) >> (((arr_23 [i_9] [i_9 - 1]) - 3558302720))));
                }
            }
        }
    }
    #pragma endscop
}
