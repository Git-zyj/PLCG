/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((var_9 ? var_7 : 553263945)))) << (((max(-3741703371, ((1 ? 1 : 7584038156647601803)))) - 553263903))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 -= ((12104794801027084895 & (((((7 ? (arr_1 [i_0] [4]) : -1844657895)) ^ ((~(arr_0 [i_0] [i_0]))))))));
        arr_2 [i_0] [i_0] = ((~6) ? 3252721866918402910 : (((227 ? (arr_0 [i_0] [i_0]) : 1016890221))));
        arr_3 [i_0] = (min((((arr_1 [i_0] [i_0]) % (arr_0 [i_0] [i_0]))), var_8));
        var_12 *= ((min((min((arr_0 [i_0] [3]), 29)), ((-(arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((~((~((13259488150023653207 ? 40 : 1)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = ((((((~var_5) ? (max((arr_9 [i_1] [i_2] [i_3] [2]), var_8)) : ((max(7, -34)))))) ? ((((min(var_5, 1056438579))) ? (((arr_10 [i_0] [i_1] [i_2] [i_3]) ? 5208985114581058130 : 0)) : (((22 ? 215 : 3741703371))))) : (((((max(-12, -57224433))) ? (-127 - 1) : (((!(arr_4 [i_1])))))))));
                                var_15 = ((!(((~((~(arr_11 [i_0] [i_1 - 2] [i_2] [i_3] [i_1] [i_4] [i_4]))))))));
                                var_16 = (max(var_16, (((-(arr_8 [i_4] [i_1] [i_1 - 1]))))));
                            }
                        }
                    }
                    arr_12 [i_0] [i_1] = (max((min(var_8, (min(var_3, var_7)))), ((((max(223, 221)))))));
                }
            }
        }
    }
    #pragma endscop
}
