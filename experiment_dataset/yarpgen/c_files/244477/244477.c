/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 = ((-5182 ? var_3 : (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] = (arr_6 [i_0] [i_1]);
                                var_12 |= (arr_11 [i_0] [i_1] [i_4] [i_3] [i_3 - 1] [i_3] [i_4]);
                                arr_14 [i_0] [i_1] = ((~((var_1 ? var_4 : -6237))));
                                var_13 = (arr_10 [i_3] [i_3] [i_3 - 2] [i_3] [8] [20]);
                                arr_15 [i_4] [i_4] &= 1;
                            }
                        }
                    }
                    var_14 = (min(var_14, (((~(-1295834773 & 9223372036854775807))))));
                    arr_16 [i_0] [i_1] [i_0] = ((+(((arr_8 [i_0] [i_0] [i_0] [i_0]) ? 239 : var_6))));
                    var_15 -= var_9;
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        arr_19 [i_5] = (min(((var_8 ? (((-(arr_8 [i_5] [i_5] [i_5] [i_5])))) : ((var_7 + (arr_5 [i_5]))))), -1));
        var_16 = ((-9559 + 9223372036854775807) << ((((var_4 ? (arr_11 [i_5] [i_5] [14] [i_5] [i_5] [i_5] [i_5]) : (((max(var_4, var_7)))))) - 2061513401)));
        arr_20 [3] = (min((~5270713096336534992), (arr_3 [i_5 - 1] [i_5 - 1])));
    }
    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {
        var_17 = (((arr_21 [i_6] [i_6 + 4]) >= (~var_4)));
        var_18 = (min(var_18, ((((((var_0 - (arr_1 [i_6])))))))));
    }
    var_19 = ((var_8 ? var_7 : (!var_6)));
    #pragma endscop
}
