/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min(var_1, 384))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        arr_3 [0] = (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_10));
        arr_4 [i_0] [i_0] = (((arr_0 [i_0]) ? ((var_8 ? 1438235770 : 23619)) : ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))))));
        var_12 = (min(var_12, (((~(arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_9 [i_1] = var_5;
            var_13 = 247;
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_14 = ((+(((arr_11 [i_1]) % 1))));

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_15 = (min(var_15, (-2147483647 - 1)));
                arr_16 [i_1] [i_1] [i_1] [i_1] = ((~(arr_6 [i_4])));
                var_16 = ((var_1 / (~67)));
            }
            var_17 = (max(var_17, (arr_14 [i_3])));
        }

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            arr_19 [i_5] = (((arr_11 [3]) ? (((arr_12 [i_1] [i_5] [i_1]) ? (arr_18 [i_1] [6]) : -11893)) : (arr_13 [i_1] [i_1] [i_5])));
            var_18 = ((1040384 - (arr_14 [i_1])));
            var_19 = ((((!(arr_6 [i_1]))) ? (arr_18 [i_1] [i_1]) : (~-32029)));
        }
        var_20 = ((!(((3848290697216 ? (arr_7 [i_1]) : (arr_12 [i_1] [i_1] [11]))))));
        arr_20 [i_1] = var_10;
    }
    #pragma endscop
}
