/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_1] [2] [i_2] [i_0] = ((183 ? ((~(((arr_4 [i_1]) ? -4025878890742094762 : (arr_3 [i_0]))))) : (244 | 244)));
                    arr_8 [9] [20] [i_1] = (((830034356878759907 | (arr_1 [i_1 - 1] [i_1]))));
                    var_19 ^= (((15417916353408714912 >= 221) + var_16));
                    arr_9 [i_0] [i_0] [i_2 + 4] [i_1] = (((((var_18 ? 26468 : (arr_3 [i_0]))))) ? ((((!(arr_6 [i_2 + 4] [i_1] [i_1] [i_1]))))) : (max((arr_6 [i_0] [i_1] [i_2] [i_2 + 2]), (arr_5 [i_0] [i_1] [i_2] [i_2 + 4]))));
                }
            }
        }
    }
    var_20 = var_8;
    var_21 = (!var_7);
    var_22 = (((max(13372906325133503121, 12)) - (((var_9 / var_9) ^ var_1))));

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_23 = (arr_0 [i_3] [9]);
        arr_12 [i_3] [i_3] = ((((var_14 / (min((arr_3 [i_3]), (arr_6 [i_3] [i_3] [i_3] [i_3]))))) + (max((arr_10 [i_3] [i_3]), ((1039469220777822079 ? (arr_4 [i_3]) : var_17))))));
    }
    for (int i_4 = 3; i_4 < 22;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = (((~249) <= (arr_2 [i_4] [i_4])));
        var_24 *= (max((((246 ? (arr_0 [i_4] [i_4 - 3]) : 242))), (min((arr_0 [i_4 + 1] [i_4]), (((arr_2 [i_4] [i_4]) ? var_12 : (arr_1 [4] [21])))))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            arr_19 [i_4] [16] [i_5] &= ((-(arr_13 [i_5])));
            arr_20 [i_4] [i_5] = (arr_1 [i_4] [9]);

            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                var_25 *= ((~(arr_16 [i_4 + 1])));
                var_26 = (var_17 ? (arr_14 [i_6 - 1] [i_4 - 3]) : (arr_23 [18] [i_4] [i_4 + 1]));
            }
            arr_24 [i_4] = (arr_1 [i_5] [i_5]);
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            arr_28 [i_4] = (var_7 & (arr_25 [i_4]));
            var_27 &= 61863;
        }
        for (int i_8 = 3; i_8 < 21;i_8 += 1)
        {
            var_28 = (max(var_28, var_11));
            arr_31 [i_4] = (arr_5 [18] [i_4] [i_8] [i_8]);
            var_29 = (arr_27 [i_4]);
            var_30 = (min((max((min(45085, (arr_17 [i_4] [i_8]))), (!23))), (((!(arr_26 [i_4] [i_4] [i_4]))))));
        }
        for (int i_9 = 1; i_9 < 21;i_9 += 1)
        {
            arr_35 [i_9] [i_9] [i_4] = (arr_26 [i_4] [i_9] [i_4]);
            arr_36 [i_4] [i_9] [i_9] = ((~(((~var_7) ^ (!var_11)))));
            var_31 = (max(var_31, ((max(((~(arr_33 [6] [i_4 - 3] [6]))), ((((min(233, 60))) | 32764)))))));
        }
    }
    #pragma endscop
}
