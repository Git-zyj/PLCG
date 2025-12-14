/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_10 = (arr_1 [i_0]);
        var_11 += ((((((-127 - 1) ? (-127 - 1) : 5270407545220801381))) ? (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : 127));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_12 *= ((((!((((arr_2 [0] [i_1]) ? (arr_0 [i_1]) : (arr_1 [i_1])))))) || (arr_2 [i_1] [i_1])));
        var_13 = (-((-((~(arr_0 [i_1]))))));
        arr_5 [i_1] [i_1] = (max(((~(((!(arr_3 [i_1] [i_1])))))), ((((max((arr_3 [i_1] [i_1]), (arr_1 [i_1])))) ? (arr_2 [i_1] [i_1]) : (((!(arr_0 [9]))))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_17 [i_2] [i_3] [i_2] = (!(arr_12 [i_4] [i_5]));
                            arr_18 [i_2] [i_5] [i_4] = (!(arr_2 [i_3] [i_3]));
                            var_14 += (((((((arr_16 [i_2 + 3] [i_3] [i_4] [i_5]) && (arr_16 [i_2] [i_3] [10] [i_5]))))) % (((arr_16 [i_4] [i_3] [i_4] [i_5]) % (arr_0 [i_2 + 3])))));
                            var_15 = (max(var_15, (((((((arr_16 [i_2 + 3] [i_2 + 3] [i_4] [i_5]) ? (arr_2 [i_2 - 1] [i_2]) : ((~(arr_7 [i_2])))))) < ((~(((arr_13 [i_2 + 1] [i_3] [i_4] [0]) | (arr_0 [i_2]))))))))));
                        }
                    }
                }
                var_16 = (max((arr_15 [i_2 + 3] [6] [7] [i_3]), (min((arr_11 [i_2] [i_2 + 1] [6] [i_3]), (((arr_10 [i_2 + 2] [i_2] [i_3]) % (arr_3 [1] [i_3])))))));
            }
        }
    }
    var_17 -= (!var_4);
    var_18 = ((((((min(var_3, var_3))) / var_2)) ^ ((var_4 | ((var_7 ? var_7 : var_8))))));
    var_19 = ((((((~var_4) & var_4))) ? ((min((var_2 >= var_4), (max(var_9, var_0))))) : ((var_9 ? var_2 : (var_9 / var_9)))));
    #pragma endscop
}
