/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 = (4097269801 > var_13);

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_0 [i_0]) == var_12));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_1] = (arr_0 [i_0]);

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_19 ^= (-712937106 ? var_0 : (~9223372036854775807));
                            var_20 = (max((max((arr_9 [i_0 + 1] [i_4 + 1] [i_4 + 1] [i_0 + 1]), var_9)), (((arr_9 [i_0 + 1] [i_4 + 1] [i_4] [i_3]) ^ (arr_9 [i_0 - 3] [i_4 + 1] [i_0 - 3] [i_3])))));
                            var_21 = (((((1 ? (((arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_3] [i_3] [i_0]) / var_3)) : -var_14))) < ((+(((arr_8 [i_0] [i_2] [i_4]) ? 39699 : 9223372036854775793))))));
                        }
                    }
                }
                arr_15 [i_0] [i_2] [i_1] [i_2] = ((min(65535, 16448405816124542846)));
            }
        }
        var_22 *= (((((-8064 / ((-(arr_11 [i_0] [0] [i_0] [i_0] [i_0] [1])))))) ? ((var_5 * (((arr_9 [i_0] [i_0] [i_0] [i_0]) / (arr_2 [i_0] [i_0]))))) : (((((arr_14 [i_0]) >= (min(55931, 3022364312))))))));
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        var_23 = ((((max(var_6, (arr_17 [i_5 - 2] [i_5 - 1])))) * ((((((arr_18 [i_5]) ? (arr_16 [i_5]) : 2508537496771815680))) / (var_12 * 673793878)))));
        arr_19 [i_5] = (~var_2);
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {

        for (int i_7 = 1; i_7 < 8;i_7 += 1)
        {
            var_24 *= ((((var_8 ? (4294967295 <= var_12) : (arr_11 [i_6] [i_6] [i_6] [i_6] [i_6] [i_7 + 2])))) ? (((((!var_12) < (arr_22 [i_6]))))) : (min(((var_1 ? (arr_23 [i_6] [i_6]) : (arr_23 [i_6] [i_7]))), -var_15)));
            arr_24 [i_6] [i_6] = arr_23 [i_7] [i_7 + 2];
        }
        for (int i_8 = 2; i_8 < 9;i_8 += 1)
        {
            arr_28 [i_6] [i_8] [i_6] = ((~(min(((var_0 ? (arr_16 [i_6]) : (arr_11 [i_8] [i_8] [i_8] [i_8] [i_8] [0]))), (arr_5 [i_8])))));
            var_25 = (max(13229, (arr_20 [i_8])));
        }
        var_26 = (1 < 1);
        arr_29 [i_6] [i_6] = (arr_11 [i_6] [i_6] [i_6] [i_6] [1] [i_6]);
        var_27 = (((arr_18 [i_6]) ? var_0 : (((-1284020310 / 482) ? (max((arr_26 [1] [1]), var_13)) : -1))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 8;i_10 += 1)
            {
                {
                    arr_34 [i_10] = var_5;
                    var_28 = ((((((min(var_0, var_4))) ? ((var_10 ? var_11 : 0)) : (-7195 / 24139))) / (arr_27 [i_6] [i_6] [i_6])));
                    arr_35 [i_6] [i_10] [8] = ((((255 ? 54686 : 1)) + ((~(arr_13 [i_6] [i_10 - 1] [i_10 + 1] [i_9] [i_9])))));
                }
            }
        }
    }
    for (int i_11 = 1; i_11 < 14;i_11 += 1)
    {
        var_29 = (min((arr_37 [i_11]), ((~(arr_36 [i_11])))));
        var_30 = ((!(arr_16 [i_11 + 1])));
        var_31 = -1565074265;
        var_32 = var_11;
    }
    #pragma endscop
}
