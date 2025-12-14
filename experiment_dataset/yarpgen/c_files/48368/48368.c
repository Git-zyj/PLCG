/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_1] [i_0] [i_0] = (arr_1 [i_0] [i_0]);
                            arr_12 [i_0] [i_4] = var_5;
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3] = (((((min((arr_2 [i_2] [i_3]), 0))) ? (arr_0 [i_0]) : (arr_7 [i_0] [0] [i_0]))));
                            var_20 = var_8;
                        }
                        arr_14 [i_0] [i_0] [i_1] [i_0] [i_3] [i_3] = var_0;
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_7 [i_1] [i_2] [i_0]) ? (0 >> 1) : 65535));
                    }
                }
            }
        }
        var_21 = (arr_1 [i_0] [i_0]);
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_22 = (arr_17 [i_5] [i_5]);

        /* vectorizable */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_23 = (arr_19 [i_5] [i_5] [i_6]);

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_24 = (arr_21 [i_5] [i_6] [i_6] [i_6]);
                var_25 = (((arr_22 [i_5] [i_6] [i_6] [i_7]) ? -23 : (arr_16 [i_6])));
                arr_23 [i_5] [i_5] [i_5] = 0;

                for (int i_8 = 1; i_8 < 23;i_8 += 1)
                {
                    var_26 = (arr_18 [i_5]);
                    arr_27 [i_5] [i_6] [i_6] [i_5] [i_6] = (0 > 1);
                }
            }
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                var_27 = ((((!(arr_28 [i_5] [i_6] [i_9]))) ? (arr_24 [i_5] [i_5] [i_5] [i_5] [i_5]) : (var_6 * 168)));
                var_28 = (arr_29 [i_5] [i_5] [i_5]);
            }
        }
        var_29 = (max(((~(arr_19 [12] [i_5] [i_5]))), ((((arr_26 [i_5] [i_5]) <= (((((arr_16 [i_5]) <= (arr_18 [i_5]))))))))));
    }
    var_30 = (~96);
    #pragma endscop
}
