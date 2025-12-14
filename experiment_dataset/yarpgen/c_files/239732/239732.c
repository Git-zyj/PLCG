/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_10 = arr_1 [i_0];
        var_11 = (max(((((arr_0 [i_0]) < (arr_0 [i_0 + 1])))), 8191));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_12 = ((!(arr_2 [i_1])));
        var_13 = (arr_0 [i_1]);
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        arr_8 [i_2] = (min((((max(3, 18446744073709551608)) << ((((140737454800896 ? 1803754095 : 139)) - 1803754050)))), ((((var_9 ? var_7 : 8227954974709540880)) | (235 ^ var_0)))));
        var_14 = var_4;
        arr_9 [i_2] [i_2] = (max(38160, 1803754095));
        var_15 = (min(var_15, (((16572195520064932118 != (((((max(243, 16368)))) + ((12103637245232314774 ? 16572195520064932118 : 13)))))))));
        arr_10 [i_2 + 1] = var_8;
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_13 [i_3] [10] = ((((((142 / (arr_0 [i_3])))) ? 2147483647 : var_8)));
        var_16 ^= (arr_1 [i_3]);
    }
    var_17 |= (((var_8 | var_4) | ((((!((max(var_1, var_5)))))))));

    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_18 [i_4] [17] = ((!((min(var_0, (max(243, (arr_14 [i_4]))))))));
        var_18 = (!254);
        arr_19 [i_4] = (((-(min(var_0, 1073741760)))));
        var_19 = ((((min(((((arr_15 [8]) | (arr_17 [i_4] [i_4])))), var_4))) ? ((-(arr_14 [i_4]))) : (((!(arr_15 [i_4]))))));
    }
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        arr_24 [i_5 + 3] [i_5] = ((~(!-20377)));
        var_20 = (((((max((arr_20 [i_5 - 1]), -1)))) > var_5));

        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            arr_28 [i_6] = (((-417102893 <= -960544547) ? (min((!var_5), (((arr_23 [i_6]) ? (arr_26 [i_6] [i_6]) : (arr_16 [i_5] [i_6]))))) : ((((!((max((arr_26 [12] [i_5]), 8)))))))));
            var_21 ^= ((((((var_8 ? (arr_15 [i_5]) : (arr_20 [i_5]))))) ? (max(20384, (arr_21 [i_5 + 1] [i_5 + 2]))) : 13));
            var_22 ^= var_0;
            arr_29 [i_6] [i_6] = (((((min((arr_25 [i_5 - 1] [18]), var_8)))) | (~854379705)));
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 18;i_9 += 1)
                {
                    {
                        var_23 = (max(var_23, (((!(((var_8 * ((min(var_8, (arr_32 [i_9] [17]))))))))))));
                        var_24 = (min(var_3, ((((max((arr_25 [i_5] [i_5]), 13))) ? ((var_7 ? var_4 : 0)) : (!var_0)))));
                    }
                }
            }
            var_25 = (min(var_25, ((min(-64, (((((983040 ? 240 : var_9)) % (((arr_22 [i_5]) & -87))))))))));
        }
    }
    for (int i_10 = 4; i_10 < 18;i_10 += 1)
    {
        arr_42 [i_10] = ((123 ? (max(17, var_9)) : (!1662844260)));
        var_26 = var_9;
    }
    #pragma endscop
}
