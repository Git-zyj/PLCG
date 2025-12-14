/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((arr_0 [i_0] [i_0]) ? 7624297339323737877 : (arr_2 [i_0]));
        arr_4 [i_0] = arr_0 [9] [i_0];

        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            var_11 = ((-(arr_5 [i_1 + 3] [i_1 - 1])));
            var_12 = (~var_4);
        }
        var_13 += (((arr_1 [i_0]) > (arr_2 [i_0])));
        var_14 = 32767;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_15 = ((((((arr_5 [i_2] [i_2]) + (arr_5 [i_2] [i_2])))) && (arr_5 [i_2] [i_2])));
        arr_12 [i_2] = (max(((((arr_0 [i_2] [i_2]) > (arr_0 [i_2] [i_2])))), ((~(arr_0 [i_2] [i_2])))));
        var_16 = (arr_6 [i_2]);
    }
    var_17 = (!var_4);
    var_18 += var_0;

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_19 = var_3;

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_20 = ((((arr_16 [i_3] [i_4] [i_4]) & (1 - 255))));
            var_21 &= ((480 << (((arr_7 [i_3] [i_4]) - 239))));
        }
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            var_22 = arr_14 [i_3];

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                arr_21 [0] [17] [0] = ((min((var_1 || var_10), (((arr_13 [i_3] [i_3]) ? (arr_16 [i_3] [17] [i_6]) : var_7)))));
                arr_22 [i_3] = ((((!(arr_17 [i_3] [i_5]))) ? (!-481) : ((((arr_17 [i_5] [i_6]) < (arr_17 [i_3] [i_3]))))));
            }
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_23 = ((!((((((-480 ? -481 : 196))) ? var_10 : ((var_0 ? var_10 : var_6)))))));
            var_24 = ((var_9 * (!3500017767)));
        }
        arr_26 [i_3] [i_3] = ((-(44 * -1)));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_25 &= ((var_9 ? var_8 : (arr_28 [i_3])));
            arr_30 [i_3] &= (((0 ? 498 : -480)));
            var_26 = ((arr_16 [i_3] [i_8] [1]) ? (arr_16 [i_3] [i_3] [i_8]) : (arr_16 [i_3] [i_8] [i_8]));
            arr_31 [i_3] [15] = ((-486 + 2147483647) << (702724589 - 702724589));
            arr_32 [i_8] = var_0;
        }
    }
    #pragma endscop
}
