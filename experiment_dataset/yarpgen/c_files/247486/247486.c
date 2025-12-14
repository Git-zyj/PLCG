/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        var_17 = ((~(((var_7 >= (arr_2 [i_1] [i_1] [i_2]))))));
                        var_18 = (max(var_18, 43440));

                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            arr_12 [i_4] [i_1] [i_4] [i_3 + 3] [i_4] [i_2] = (arr_11 [i_3 + 1] [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_3 - 3]);
                            var_19 = ((((arr_1 [i_0]) * (arr_9 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0]))));
                        }
                        arr_13 [14] [i_1] [14] [i_3] [14] [i_3 + 3] |= ((((((arr_1 [i_0]) & (arr_5 [i_0] [i_1] [i_2] [i_3])))) ? (arr_0 [6] [i_2]) : var_16));
                    }
                    var_20 |= (((((var_1 ? var_3 : var_1))) ? ((var_4 ? (arr_8 [i_2] [12] [16] [i_2] [i_0]) : (arr_0 [i_0] [i_1]))) : (((2088960 != (arr_6 [i_2] [i_1] [i_0]))))));
                    var_21 = (max(var_21, (((-4292878346 ? (((arr_5 [7] [i_2] [i_1] [i_0]) / (arr_7 [i_0] [i_0] [i_0]))) : (((255 ? 57 : 117))))))));
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    var_22 = (max(13, ((((((arr_7 [i_0] [3] [i_5]) ? (arr_15 [i_1]) : 4292878346))) * (arr_10 [i_1] [i_1])))));
                    var_23 = (((((((-(arr_0 [i_0] [i_0])))) ? (((-32767 - 1) ? 2088960 : var_11)) : (arr_4 [i_5] [i_1] [i_1] [i_0]))) > (arr_5 [i_0] [i_0] [i_1] [i_5])));
                }
                var_24 -= (((((!(((arr_0 [i_0] [7]) && (-32767 - 1)))))) >= ((-30656 ? 124 : 3))));
            }
        }
    }
    var_25 = ((var_16 >> (var_2 - 9770759913999670962)));
    var_26 ^= var_15;

    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_27 = (((((~(arr_2 [i_6] [i_6] [i_6])))) ? (255 | 13679689519484281643) : ((((arr_17 [i_6]) ? (arr_0 [i_6] [i_6]) : (arr_18 [i_6]))))));
        arr_20 [i_6] [i_6] = (((arr_4 [i_6] [i_6] [i_6] [i_6]) / ((var_14 ? var_0 : (arr_4 [i_6] [i_6] [i_6] [i_6])))));
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        arr_23 [i_7] [i_7] = ((((min(((-96 ? 17045154395219090830 : 124)), 32745))) ? (!var_3) : (arr_15 [i_7])));
        arr_24 [i_7] [i_7] = (max((((arr_7 [i_7] [i_7] [i_7]) & var_1)), (arr_7 [i_7] [16] [i_7])));
        var_28 = (~(arr_10 [i_7] [i_7]));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        var_29 = ((((max(130, -28130))) ? (arr_25 [5]) : (((-32746 != (arr_25 [i_8]))))));
        var_30 = (min(var_30, (arr_26 [i_8])));
        var_31 += (max(469762048, -32746));
        arr_27 [i_8] [i_8] = var_0;
        arr_28 [i_8] = (max((!-2147483643), ((((min(-131, 26568))) ? (arr_26 [i_8]) : (arr_25 [i_8])))));
    }
    #pragma endscop
}
