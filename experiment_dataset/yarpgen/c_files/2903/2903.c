/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = max(-4681166306111508815, ((((arr_1 [i_0]) > (arr_1 [i_0])))));

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_16 |= 21910;
            var_17 &= ((((max((13491 * 0), (((arr_3 [i_1]) ? var_12 : var_6))))) ? 1841449944 : (arr_2 [i_1 + 2] [i_1])));
            arr_4 [i_0] [i_1 + 1] |= ((!(arr_3 [i_0])));
            arr_5 [i_1 - 1] [i_1 + 2] = ((~(arr_2 [i_1 - 1] [i_1 + 1])));
            var_18 = (max(var_18, ((!((!(arr_2 [i_1 - 1] [i_1 - 1])))))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_19 = 9005000231485440;
            var_20 = ((1 ? (((arr_2 [i_2] [i_0]) >> (var_8 - 2672809044970371518))) : (((1 ? 1 : 1)))));
            var_21 = (min(var_21, (((((((arr_8 [i_0]) + var_14))) & 9005000231485440)))));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    {
                        var_22 = (max(1, ((~((max(198, (arr_0 [i_0]))))))));
                        var_23 = (max(var_23, (!58)));
                        arr_17 [i_5] [i_4] [i_3] [i_4] [i_0] = (1450171535326175929 - var_10);
                        var_24 = (((((arr_12 [i_0] [i_4] [i_0] [i_5]) ? (-1602182732818986170 + -9005000231485445) : (min(var_0, var_4)))) < ((((arr_14 [i_3]) ? (arr_7 [i_4 - 1] [i_3] [i_0]) : (arr_7 [i_3] [i_3] [i_3]))))));
                    }
                }
            }
            arr_18 [i_3] = (((((1 >> (((arr_15 [i_0] [i_0] [i_3] [i_3] [i_3]) - 23208))))) ? ((((max(13491, (-9223372036854775807 - 1))) << (((((arr_7 [i_0] [i_0] [0]) ? var_7 : (arr_13 [i_3] [i_3] [i_0]))) - 31247))))) : 1602182732818986164));
        }
        arr_19 [i_0] [i_0] = ((((max((min(91655383, (arr_12 [i_0] [i_0] [i_0] [i_0]))), ((((arr_11 [i_0] [i_0]) < 37)))))) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : ((((arr_8 [i_0]) && 8362)))));
        arr_20 [i_0] [i_0] = (min(134217728, 1));
    }
    var_25 &= (((((((117 ? 17650090663369189480 : 13112))) ? (((min(var_1, var_1)))) : var_0)) | (var_13 - var_12)));
    #pragma endscop
}
