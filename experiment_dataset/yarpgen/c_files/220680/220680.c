/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] = min(((((arr_0 [i_1 - 2]) >= (arr_0 [i_1 - 1])))), (arr_3 [i_0]));

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2 - 1] = (((((max((arr_3 [i_0]), (arr_7 [i_2]))) != (min((arr_5 [i_0] [i_1] [i_1] [i_2]), 0)))) || (arr_6 [i_0])));
                    arr_9 [i_1 - 1] [i_2] [i_1] [i_0] = (((arr_3 [i_0]) | (((0 | 9223372036854775807) | 2199022731264))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            {
                var_19 = (max(var_19, (((((min((arr_2 [i_3] [i_4 - 1] [12]), (arr_2 [i_3] [i_4 + 2] [10])))) ? (max((arr_1 [i_3]), (arr_2 [i_4] [i_4 - 1] [i_4 - 1]))) : ((((arr_1 [i_3]) * (arr_1 [i_3])))))))));
                var_20 = (min(var_20, (((((max(-1, 0))) ? (((arr_6 [i_3]) ? (arr_6 [i_3]) : (arr_11 [i_4 + 1]))) : -2199022731254)))));
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        arr_17 [i_5] = ((-26 ? (arr_14 [i_5 - 1] [i_5 - 2]) : (arr_15 [i_5 + 1])));
        arr_18 [i_5] = (((arr_15 [i_5 - 1]) ? (arr_15 [i_5 - 2]) : (arr_15 [i_5 - 2])));
        var_21 = (arr_16 [i_5 - 2] [i_5 + 1]);
        arr_19 [i_5] [i_5] = (((arr_15 [i_5 - 2]) ? (arr_15 [i_5 + 1]) : (arr_15 [i_5 - 1])));
        var_22 -= (arr_14 [i_5 - 1] [i_5]);
    }
    for (int i_6 = 2; i_6 < 16;i_6 += 1)
    {
        arr_23 [i_6 - 1] = (((min((arr_5 [i_6 + 1] [i_6] [i_6] [i_6]), ((7680 ? -6994266172280288127 : (arr_3 [i_6]))))) & ((((arr_6 [i_6]) * (arr_0 [i_6 - 2]))))));
        arr_24 [i_6] = ((-777 && ((((4398 && (arr_6 [i_6]))) || ((min((arr_20 [10]), (arr_6 [i_6]))))))));
    }
    #pragma endscop
}
