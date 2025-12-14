/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_14 + (~var_8)));
    var_18 = var_4;
    var_19 = var_10;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 *= ((-((~(arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = (max((((arr_1 [i_0] [i_0]) ? (min(-3252578231885957646, (arr_0 [5]))) : (min((arr_1 [i_0] [i_0]), (arr_0 [i_0]))))), (((arr_1 [i_0] [i_0]) + (((arr_0 [i_0]) ? (arr_0 [i_0]) : 96))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 14;i_3 += 1)
                {
                    {
                        var_21 = (((arr_10 [16] [i_3 + 3] [1] [i_3]) ? (arr_10 [i_3] [i_3 + 3] [i_3] [i_3]) : (arr_10 [i_3] [i_3 + 3] [i_3] [16])));
                        var_22 *= (((arr_7 [6] [i_1] [i_1] [i_3 - 4]) <= (arr_7 [i_0] [i_3] [i_2] [i_3 - 4])));
                        arr_12 [11] [11] [i_2] [i_2] = (arr_6 [i_1] [i_3 - 3]);
                        arr_13 [i_2] = (((((arr_4 [i_0]) > 11)) ? (arr_0 [i_3 + 3]) : (-6711960700122689392 != 4095778052922264983)));
                    }
                }
            }
            var_23 -= ((~(arr_11 [i_0] [i_1] [i_0])));
            arr_14 [i_0] [i_1] = (((arr_10 [i_0] [i_0] [i_0] [i_1]) ? 7549824931385268286 : (((-(arr_6 [5] [i_1]))))));
            arr_15 [i_0] = (((arr_1 [i_0] [i_0]) & (((arr_5 [i_0] [8]) ? (arr_11 [i_1] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [13] [i_1])))));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            var_24 = (((arr_0 [i_4 + 1]) ? 4593671619917905920 : 73));
            arr_18 [i_4] = ((((((arr_7 [i_0] [12] [12] [i_4]) % 130))) ? ((68719476735 ? (arr_8 [i_0]) : (arr_11 [15] [i_4 - 1] [15]))) : (((3232480141716888583 ? (arr_6 [i_0] [i_4]) : (arr_6 [i_0] [i_0]))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_21 [i_5] = (arr_10 [i_0] [i_0] [i_0] [i_0]);
            var_25 = (((arr_10 [i_0] [i_0] [i_5] [14]) || (arr_0 [i_5])));
            var_26 = (arr_9 [i_0] [i_0] [i_5] [i_5]);
            var_27 = (((arr_3 [i_0] [i_5]) ? (arr_3 [i_0] [i_5]) : (arr_3 [i_0] [i_5])));
        }
        var_28 = (-(((arr_8 [i_0]) - (arr_8 [i_0]))));
        var_29 = (arr_1 [14] [i_0]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_30 = 0;
        var_31 = arr_5 [i_6] [i_6];
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_32 = (((arr_7 [i_7] [i_7] [i_7] [i_7]) ? (((min((arr_7 [i_7] [i_7] [i_7] [1]), (arr_7 [i_7] [i_7] [i_7] [i_7]))))) : (((arr_7 [i_7] [i_7] [i_7] [14]) ? (arr_7 [i_7] [i_7] [0] [i_7]) : 15453136101610877937))));
        arr_28 [i_7] [i_7] = arr_11 [i_7] [13] [13];
    }
    #pragma endscop
}
