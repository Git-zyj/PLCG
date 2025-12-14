/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = (min(var_14, var_5));
        arr_4 [i_0] = -2040327029;
        arr_5 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] |= (((arr_0 [i_1]) && (((0 ? var_1 : (arr_2 [12] [i_1]))))));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_12 [i_1] [i_1] &= -2040327027;

            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                var_15 = (max((((0 ? (arr_2 [i_2] [i_1]) : 1))), (!2040327029)));
                arr_15 [i_3] [i_2] = (((max(((var_8 ? var_4 : var_9)), var_10)) == 2040327027));
            }
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                arr_19 [i_1] [i_4] [i_2] [i_4 + 3] = (-32767 - 1);
                arr_20 [i_2] [i_4] [i_4] [i_4] = (min(-21422, ((21410 ? 0 : (((min((arr_7 [i_1]), (arr_18 [i_4] [i_2] [i_4])))))))));
            }
        }
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_24 [i_5] = ((~((var_12 ? (arr_6 [i_5]) : var_10))));
        arr_25 [7] = ((13538759447309837331 - 0) ? (var_9 % var_1) : ((min(-8157, var_6))));
    }
    var_16 += var_13;
    var_17 = ((var_6 ? (max((min(4907984626399714293, var_3)), ((min(var_9, var_10))))) : var_3));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            {
                arr_31 [12] [i_6] [i_6] = (min((arr_28 [0]), 4907984626399714284));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_18 = (((arr_27 [i_6] [11]) ? (((max((arr_3 [18]), (arr_3 [16]))))) : (max(((0 ? -543082011 : var_3)), (min(8862876072226598148, var_2))))));
                                arr_38 [i_6] [i_7] [18] [i_6] = ((2040327027 << (max(var_5, (arr_3 [i_6])))));
                            }
                        }
                    }
                }
                var_19 += 107;
            }
        }
    }
    #pragma endscop
}
