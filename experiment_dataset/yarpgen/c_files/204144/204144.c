/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (min((max((arr_5 [i_0] [i_1] [i_2] [i_2 - 2]), var_11)), (((~(arr_6 [i_0] [i_0] [i_2] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] = (min((((0 ? 21397 : 21397))), (min((arr_5 [i_4 + 1] [i_1 + 1] [i_2 - 1] [i_3 + 4]), (((arr_8 [i_0] [i_0] [i_0] [i_1]) ^ var_15))))));
                                var_17 = ((~(((arr_11 [i_1]) ^ (arr_3 [i_1] [i_2] [i_4])))));
                                arr_14 [i_1] = (arr_4 [i_1] [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((var_14 ? ((-(var_16 - 251658240))) : var_10));

    /* vectorizable */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = (((((arr_15 [i_5 + 3]) + 2147483647)) >> (var_7 + 67)));
        arr_18 [i_5] = (((arr_16 [i_5 + 2]) ? (arr_16 [i_5 + 2]) : (arr_16 [i_5 + 2])));
        arr_19 [i_5] = (((arr_15 [i_5 + 2]) || (arr_15 [i_5 - 1])));
    }
    for (int i_6 = 1; i_6 < 11;i_6 += 1)
    {
        var_19 = (max(var_19, (((((var_6 ? var_0 : 251658240)) | var_15)))));
        var_20 = (min((((var_6 >> ((((~(arr_15 [i_6]))) - 1160453274))))), var_13));
        arr_22 [i_6] = (max((max(var_12, (max(814081701, (arr_20 [i_6] [i_6]))))), (max(((var_11 ? var_12 : (arr_15 [i_6]))), (~63772)))));
    }
    var_21 = var_14;
    var_22 = (((((var_0 ? (var_5 && 44139) : var_14))) ? (min(var_11, ((min(var_2, var_7))))) : ((max((max(var_13, var_6)), var_7)))));
    #pragma endscop
}
