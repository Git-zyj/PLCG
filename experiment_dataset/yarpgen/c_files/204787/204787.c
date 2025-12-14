/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((var_8 ? var_14 : -1))) ? (max(var_9, 183)) : var_3)) / var_5));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        var_16 = (max(var_16, (((!(177 * 51))))));
                        var_17 = var_12;
                    }
                }
            }
        }
        var_18 += max(((((min(1448273934, var_4))) ? 35258514354336900 : (arr_1 [0]))), ((((max(var_13, (arr_2 [i_0]))) ? ((var_4 + (arr_2 [i_0]))) : (((arr_2 [12]) ? var_12 : 50308))))));
        arr_10 [i_0] [i_0] = 15227;
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (((((((arr_0 [5] [5]) ? 11 : 0))) ? (((-1435834626 ? (arr_4 [i_4] [i_4]) : (arr_4 [8] [i_4])))) : ((var_0 ? ((51 ? var_1 : 243778036)) : (arr_8 [13] [i_4] [i_4] [10]))))))));
        var_20 &= ((-(max(((243778046 ? 17486253346216899168 : 50308)), 50308))));
    }
    #pragma endscop
}
