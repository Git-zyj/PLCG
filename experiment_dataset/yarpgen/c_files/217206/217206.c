/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((max(((2961884729 ? var_8 : var_9)), (min(var_4, -202399145)))) - var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (arr_0 [8]);
                var_16 = (min(var_16, (((~((9223372036854775807 ? (arr_3 [12] [i_1] [8]) : (arr_3 [i_0] [i_0] [i_1]))))))));
                arr_6 [i_0] [i_0] [4] = ((-(min((arr_0 [i_0]), (arr_1 [i_1])))));
            }
        }
    }
    var_17 = (max(var_2, -32758));

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        arr_9 [1] = ((!(((max(1333082580, 1333082577))))));
        var_18 = (min(var_18, (((~(((arr_7 [i_2 - 1]) / (arr_7 [i_2 - 1]))))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_19 = (min(((max(6299, (arr_11 [i_2 - 1] [i_4])))), (((arr_11 [i_2 - 1] [i_2 - 1]) ? (arr_11 [i_2 - 1] [i_3]) : (arr_11 [i_2 - 1] [13])))));
                    arr_16 [i_2] [i_2] [i_4] = var_10;
                }
            }
        }
        arr_17 [i_2] = (min((((arr_13 [i_2]) + (((var_3 ? (arr_7 [i_2]) : (arr_8 [i_2] [14])))))), var_10));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (arr_3 [i_5 + 2] [i_5 + 2] [15])));
        arr_20 [i_5] = (((arr_5 [i_5 + 2]) ? (arr_2 [i_5 + 1] [i_5]) : (arr_2 [i_5 + 2] [i_5 - 1])));
        var_21 = (!2961884741);
        var_22 = (((var_3 ? var_12 : (arr_7 [i_5]))));
    }
    for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_23 = (((-(arr_11 [i_6 - 1] [i_6 - 2]))));
        arr_23 [i_6] = (((max(var_12, 165715746))));
        arr_24 [i_6] = (max(-1333082592, ((-(3428430116995844511 + 2512224836)))));
    }
    #pragma endscop
}
