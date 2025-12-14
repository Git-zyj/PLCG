/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!-1115253982576929414);
    var_18 = ((((((var_7 >> (3794850336 - 3794850310))))) ? ((var_12 ? (!var_5) : var_7)) : ((1626611575 ? -110 : 500116954))));
    var_19 = var_12;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_20 = var_2;
            var_21 = ((!(arr_0 [i_1 + 1] [i_1 + 1])));
            var_22 |= ((~((((arr_2 [i_0 + 1] [i_0] [6]) <= -14710)))));
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            var_23 += ((((arr_5 [1] [i_2] [i_2]) ? (arr_6 [10]) : (arr_0 [i_2] [i_2 + 3]))));
            var_24 = ((49622 > (-32767 - 1)));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_10 [i_0] [i_3] = (((((((min((arr_3 [i_0] [i_0 - 2]), (arr_1 [i_0] [i_3])))) ? (((127 ? 20209 : var_12))) : (arr_7 [i_0])))) ? (((((3548455953 ? 9945589200084256001 : 10449))) ? (((arr_7 [i_0]) ? var_4 : (arr_6 [i_0]))) : (arr_3 [6] [i_3]))) : (arr_9 [i_0] [1] [i_3])));
            var_25 = ((((max((arr_3 [i_0 - 1] [i_0 - 1]), ((((arr_9 [3] [3] [i_3]) >= (arr_0 [i_0] [i_0]))))))) ? var_3 : (((((1 ? (arr_5 [i_0] [i_0] [6]) : var_16))) ? ((((var_12 && (arr_2 [i_0] [i_3] [5]))))) : (max((arr_8 [i_3]), var_5))))));
            arr_11 [i_0] [6] [10] |= var_9;
            arr_12 [i_0] [i_0] [i_0] = var_12;
        }
        var_26 = ((var_11 & (max(var_2, (((~(arr_6 [i_0]))))))));
        arr_13 [i_0] [i_0] = (arr_3 [i_0] [i_0 + 1]);
        arr_14 [i_0] [i_0] = (max((arr_6 [i_0]), (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_27 = (arr_17 [i_4]);
        arr_18 [i_4] [i_4] |= ((((((arr_17 [i_4]) <= (arr_17 [i_4])))) >> (((arr_16 [i_4] [i_4]) + 131))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    var_28 = ((~(arr_23 [5] [5] [12] [i_4])));
                    arr_25 [i_4] [i_4] = (arr_22 [i_4] [i_6] [i_6]);
                    arr_26 [i_4] [i_6] = arr_21 [i_4] [i_5] [i_6];
                    arr_27 [i_6] [i_6] [i_5] [i_4] = ((((((arr_20 [i_4]) ? (arr_20 [i_4]) : var_0))) ? ((((arr_24 [i_4] [i_4] [4]) <= (arr_19 [i_4])))) : (~3)));
                    arr_28 [i_4] [5] [i_6] = 2787950352;
                }
            }
        }
    }
    #pragma endscop
}
