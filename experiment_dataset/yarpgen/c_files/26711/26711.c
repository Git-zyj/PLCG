/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        var_15 = (min(var_15, (-1893868490 != -1893868511)));
        var_16 = (arr_0 [i_0]);
        arr_3 [1] [1] = ((var_3 ? (((min(var_3, (arr_1 [i_0]))))) : ((max((arr_0 [i_0 + 2]), 0)))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_17 = (min(var_17, (((((((arr_10 [i_0 - 2] [i_1] [i_2] [i_3]) ? (arr_10 [i_0 + 1] [9] [9] [0]) : 1893868489))) > (((((1893868484 ? (arr_5 [i_0] [i_1] [i_0]) : 3671966185))) ? (((8576 ? var_3 : var_5))) : (min(var_1, (arr_1 [i_0 - 2]))))))))));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_18 *= var_10;
                            var_19 = var_3;
                            var_20 -= var_4;
                            arr_14 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] = (min((arr_6 [i_0 + 3] [i_1 - 1] [i_1 + 1]), -8577));
                        }
                        arr_15 [i_0] = 112;

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_19 [i_0 - 2] |= (((255 || (-127 - 1))));
                            var_21 = -26;
                            var_22 = (((arr_12 [i_0 + 1] [i_1] [i_1 - 3] [i_0 + 1] [i_5] [i_5] [i_1]) - (var_1 + -94827387821932525)));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_22 [i_0] [i_1 - 1] [i_6] [i_3] [7] = (-32 != 2945913054);
                            var_23 = (((arr_7 [i_0] [1]) + var_14));
                            arr_23 [i_0] [6] [i_6] = (~26158);
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_24 = (min(var_24, ((min(13, ((-2945913054 ? 30 : -31835)))))));
                            var_25 *= ((min(var_10, ((246 ? 2945913054 : 3526819493)))));
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            arr_29 [i_0] [i_1] [i_2] [i_1] [i_8] &= ((((((max(25075, 106))) ? ((var_8 ? (arr_26 [i_8] [i_3] [i_2] [i_0 - 1] [4] [i_0 - 1]) : -1893868507)) : 0))) <= ((43108 ? (((149 ? var_12 : 4095))) : 1349054241)));
                            var_26 = max(var_11, var_3);
                            arr_30 [i_2] [i_8] |= ((240 != (((!(max(var_9, var_9)))))));
                            var_27 &= ((((((arr_26 [i_0 - 1] [i_0] [i_0] [i_0 - 2] [i_1 - 1] [7]) ? -1893868490 : (arr_26 [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_0 + 3] [i_1 - 3] [8])))) || ((((min(526752355819250318, var_14))) && (((var_5 ? 240 : var_1)))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_35 [i_9] = var_9;
        var_28 |= ((((max(-1893868505, (arr_34 [i_9] [i_9])))) ? (((!(arr_32 [i_9])))) : var_2));
        var_29 = var_2;
    }
    var_30 -= ((~(max(2945913063, (1893868480 % var_14)))));
    #pragma endscop
}
