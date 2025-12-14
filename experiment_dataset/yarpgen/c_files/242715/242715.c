/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = (arr_4 [i_1 + 2]);
                    var_16 = (max((((-((min((arr_1 [i_0]), (arr_8 [i_0] [i_2] [i_1 + 2] [i_0]))))))), (min((arr_8 [i_0] [6] [i_2] [i_2]), (max((arr_7 [i_0 + 2] [i_1] [i_2]), (arr_6 [i_1] [i_2])))))));
                }
            }
        }
        var_17 = (max(var_4, var_6));
    }
    for (int i_3 = 4; i_3 < 21;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = ((-(((arr_11 [i_3]) / 580934763))));
        var_18 = ((((min((arr_11 [i_3]), (max((arr_10 [i_3]), 253))))) ? ((13558172152710904412 ? (arr_10 [i_3]) : (((arr_10 [i_3]) ? 42286 : (arr_10 [i_3 - 2]))))) : (arr_11 [0])));
        arr_13 [i_3 + 2] = (((~var_4) ? 51103 : (arr_11 [i_3 + 2])));
        var_19 = (((23238 / -87) ? (arr_10 [i_3 - 2]) : ((min((arr_11 [i_3 + 2]), (arr_11 [i_3 + 2]))))));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 21;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [i_4] = (((var_0 / 5602) ? (arr_14 [21]) : (((!(arr_16 [i_4] [i_4]))))));
        arr_18 [i_4] [i_4] = ((~((-(arr_11 [i_4])))));
    }
    var_20 = (min((max(((var_10 ? var_10 : var_2)), (~128))), (min(var_8, ((1 ? var_10 : 8388096))))));
    var_21 = (((var_5 + 2147483647) >> var_2));
    var_22 = (min(1, ((max((((var_12 ? var_5 : var_14))), -449451179274933575)))));
    #pragma endscop
}
