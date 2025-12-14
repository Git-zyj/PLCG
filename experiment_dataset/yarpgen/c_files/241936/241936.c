/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(0, 136));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 ^= (arr_11 [i_3] [i_3]);
                                var_22 = 5264675723140514186;
                            }
                        }
                    }
                    arr_13 [i_0] [i_2 - 1] = (((((3212066203984522483 ? ((((arr_3 [i_0] [13]) ? var_12 : var_3))) : (((arr_2 [1] [1]) ? (arr_9 [i_0] [6] [i_0] [16] [i_2] [6]) : (arr_6 [1] [i_1] [i_1] [i_2 + 2])))))) ? 1 : var_17));
                }
            }
        }
        var_23 = (min((((((arr_5 [i_0] [4] [i_0]) ? (arr_6 [i_0] [i_0] [i_0] [11]) : (arr_6 [i_0] [i_0] [i_0] [i_0]))) * (arr_4 [i_0]))), ((((arr_8 [i_0] [i_0] [3] [i_0]) && (arr_7 [i_0] [i_0] [i_0]))))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_24 = (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]);
        var_25 = (max(var_25, (((var_9 < (((arr_17 [i_5]) ? var_9 : (!32760))))))));
        var_26 = (min(var_26, (((~((~(arr_5 [i_5] [i_5] [i_5]))))))));
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_27 = ((((var_13 >> (((arr_10 [i_6] [i_6] [i_6] [i_6] [i_6]) - 16316)))) | (((-32761 + 2147483647) >> (24843 - 24825)))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 11;i_8 += 1)
            {
                {
                    arr_28 [i_6] [i_6] [4] [i_8] = (min((arr_5 [i_6] [i_8 + 1] [i_7]), ((40705 ? 5494653262268341458 : -901875367))));
                    var_28 = ((30720 ? 34 : 0));
                }
            }
        }
        arr_29 [10] [i_6] = (min(var_10, -7464981642777323300));
        var_29 = (min(var_29, ((max(((max(var_14, (arr_7 [i_6] [i_6] [i_6])))), ((~((-16023 ? (arr_24 [i_6]) : var_16)))))))));
        var_30 *= arr_20 [11];
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        var_31 = (arr_31 [i_9]);
        arr_33 [i_9] = ((40705 ? (arr_31 [i_9]) : -9223372036854775806));
        var_32 = (arr_31 [i_9]);
        var_33 = ((((32760 ? var_6 : var_6)) < (arr_31 [i_9])));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                {
                    arr_39 [i_9] [i_9] [i_11] [i_9] |= (arr_36 [i_9] [i_10]);
                    var_34 = (max(var_34, (((~var_9) && var_2))));
                }
            }
        }
    }
    #pragma endscop
}
