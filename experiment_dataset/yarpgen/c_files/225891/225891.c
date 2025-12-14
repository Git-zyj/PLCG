/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((max(var_1, ((var_4 >> (16729 - 16701))))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_14 = (((((min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 3]))))) * (arr_1 [i_0 - 2])));
        var_15 = 16729;
        arr_2 [i_0] = ((((!(arr_0 [i_0 - 2]))) ? ((~(arr_1 [i_0 - 2]))) : ((min((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2]))))));
        arr_3 [i_0] [i_0] = (arr_1 [i_0 + 4]);
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((((arr_0 [i_1 + 3]) ? (var_0 ^ var_5) : ((((arr_4 [i_1 - 2]) ? (arr_1 [i_1]) : 48792))))) * ((max((arr_0 [i_1 - 2]), (arr_0 [i_1 + 4])))));
        arr_7 [i_1] = ((((((arr_5 [i_1 - 1]) ? (arr_5 [i_1 + 1]) : (arr_5 [i_1 + 1])))) ? (max((arr_5 [i_1 + 1]), (arr_5 [i_1 + 3]))) : (arr_5 [i_1 - 1])));
        var_16 = 48806;
    }
    var_17 = 16729;
    var_18 &= 4194048;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3] [i_4] &= (((((max(var_8, var_1)))) ? ((48806 >> (-21327 - 44200))) : ((max((arr_12 [i_3] [7]), ((var_2 > (arr_12 [i_4] [i_2]))))))));
                    var_19 = ((((max((arr_1 [i_4]), ((var_4 ? var_7 : (arr_13 [i_4] [i_3])))))) ? (((arr_8 [i_3]) / (arr_8 [i_2]))) : (((((max(16729, 65533))) ? (arr_10 [i_4]) : ((63 ? var_10 : var_5)))))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_17 [i_5] [i_3] [i_3] [i_2] &= (!4698);

                        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_6] [i_5] [i_5] [i_2] [i_2] = (((arr_0 [i_2]) | var_5));
                            var_20 = -48806;
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_2] [i_3] [i_4] [i_3] [i_5] [i_5] [i_7] = (((arr_0 [i_2]) ? (arr_0 [i_2]) : (arr_0 [i_3])));
                            var_21 -= (60 == var_6);
                            var_22 = (min(var_22, (arr_9 [i_4])));
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_23 = (((arr_19 [i_2] [i_2] [1] [i_4] [i_5] [i_5] [i_8]) >= (arr_12 [i_2] [i_4])));
                            arr_27 [i_2] [i_5] [i_4] [2] [i_8] = -var_9;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
