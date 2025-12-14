/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_11 [i_3] [i_3] = (((arr_4 [i_0]) / ((max((arr_0 [i_2] [i_2]), var_9)))));
                        arr_12 [i_0 + 3] [i_0 + 3] [i_3] = (min(var_1, (arr_10 [i_0] [i_0] [i_1] [i_1] [i_2 + 1] [i_3])));
                    }
                    arr_13 [10] = ((-((((((arr_7 [i_2] [i_2] [i_2] [i_2]) + var_2))) - (min(var_5, (arr_6 [i_0] [i_0] [i_0] [i_2])))))));
                    var_12 = (((max(((((arr_5 [i_0] [i_0] [i_0]) == var_10))), (max(var_5, (arr_4 [i_1]))))) | 2140934963));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_13 = var_6;
                        var_14 += 1;
                        arr_17 [i_0] [i_0] [i_0 + 1] [i_0] |= ((-((1700444260 << (((-1900860435 + 1900860440) - 5))))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_4] = var_10;
                        var_15 = 9223372036854775799;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_16 = (((min((min(4248133645606269552, (arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] [i_5]))), ((min(var_9, 913935718))))) < 32749));
                        var_17 = (arr_3 [i_0]);
                        var_18 = (max(var_18, ((min((max(var_6, (arr_2 [i_0 + 1]))), ((((!-1106822263) && ((max((arr_16 [i_0] [i_1] [i_0] [i_2] [i_1]), (arr_19 [i_2] [i_1] [i_2] [i_2]))))))))))));
                    }
                }
            }
        }
        var_19 = (min(var_1, ((var_8 & (arr_16 [i_0] [i_0 - 1] [i_0] [i_0] [i_0])))));
    }
    #pragma endscop
}
