/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_14 *= (max(((min(13255359705778847039, (min((arr_2 [16]), var_7))))), (arr_1 [20] [i_0 - 1])));
        var_15 |= ((var_8 ? ((var_5 ? (arr_1 [12] [i_0 - 1]) : (arr_1 [0] [i_0 + 2]))) : ((((((17335 ? 9711334930332794651 : var_4))) ? ((((!(arr_2 [14]))))) : -3902483839295979799)))));
        var_16 *= (((((arr_0 [i_0 + 2]) ? (((min(var_10, (arr_0 [i_0]))))) : (max((arr_2 [16]), 8735409143376756965))))) ? ((-(0 * 5191384367930704602))) : ((((~1) ^ (~17335)))));
        arr_3 [i_0] = (min((max(var_6, ((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0])))))), -5191384367930704577));
        var_17 = (max(0, (max(5191384367930704547, (arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = (((arr_2 [i_1]) ? (arr_1 [i_1] [i_1]) : var_0));
        var_19 *= (1 > (arr_5 [i_1]));
        arr_6 [i_1] = ((~(arr_5 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            arr_15 [i_2] [i_2] [i_2] = var_10;
            var_20 = (max(var_20, ((((arr_7 [i_3 - 2] [1]) + (((arr_7 [i_2] [i_2]) + (arr_2 [i_3]))))))));
        }
        var_21 -= (((arr_7 [i_2] [i_2]) - (arr_7 [i_2] [i_2])));

        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            var_22 -= (arr_17 [i_4 + 1]);
            var_23 = (min(var_23, ((((((1 ? -91386328 : 150))) ? var_1 : (((arr_11 [i_2]) ? var_9 : (arr_11 [i_2]))))))));
        }
        var_24 = (arr_16 [i_2]);
    }
    var_25 = (~var_6);
    var_26 = 57733;
    #pragma endscop
}
