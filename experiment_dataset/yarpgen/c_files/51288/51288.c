/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -8520475410406631123;
    var_12 = (((var_7 * var_6) ? var_0 : var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = var_5;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [9] [1] [i_3] = ((((((arr_8 [3] [i_2]) ? 1189695210294289624 : (arr_0 [1] [i_0])))) ? 2650906194 : 8681187389852196942));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] [1] [2] [9] = (-32767 - 1);
                            var_13 = (max(var_13, -9192706950953632496));
                            var_14 ^= (((arr_7 [i_0] [2] [i_2] [3]) >= (var_0 >= -3)));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_15 = (arr_15 [i_0] [i_1] [i_1]);
                            var_16 &= (((-6199966657319281234 + 9223372036854775807) << (((arr_5 [i_2] [i_1] [8]) - 2269793162))));
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_17 = (min(var_17, ((((arr_16 [i_6] [i_7]) - ((((arr_18 [i_7]) ^ (arr_18 [i_7])))))))));
            var_18 = (arr_18 [i_7]);
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        var_19 = ((arr_23 [i_8] [i_8] [i_8 - 1] [i_8 + 1]) ? 0 : (arr_17 [i_6]));
                        var_20 = (arr_22 [i_8 + 1] [i_8 + 1] [i_8 - 1]);
                        arr_26 [i_6] [i_6] [i_7] [i_8 - 1] [i_9] [i_6] = arr_18 [i_9];
                        arr_27 [i_6] [i_7] [4] [i_9] = ((((9192706950953632496 ? (arr_23 [i_6] [i_6] [i_6] [i_6]) : 9192706950953632496)) == (arr_20 [i_8 + 1] [i_8 + 1] [i_8 + 1])));
                        arr_28 [i_6] [4] [i_6] [i_8] = arr_25 [i_8 - 1] [i_6] [i_6] [i_8 + 1];
                    }
                }
            }
            var_21 = (arr_24 [i_7] [i_7] [i_7] [i_7] [i_6] [i_6]);
        }
        var_22 = ((((((var_9 && (arr_16 [i_6] [7]))) && ((min((arr_18 [i_6]), (arr_18 [i_6])))))) ? (arr_17 [i_6]) : (((arr_24 [i_6] [2] [i_6] [i_6] [i_6] [i_6]) ? (((arr_16 [i_6] [i_6]) ? (arr_19 [i_6]) : var_8)) : ((((!(arr_16 [i_6] [i_6])))))))));
    }
    #pragma endscop
}
