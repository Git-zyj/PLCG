/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] [i_0] = (((arr_4 [i_2] [i_1 - 1] [2]) ? (arr_2 [i_1] [i_0 - 1]) : (((arr_2 [i_1] [i_2]) ? (arr_4 [8] [i_0 - 1] [i_0 - 1]) : var_12))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_13 = ((((!var_1) > (min(var_1, (arr_3 [i_1] [i_2] [i_3]))))) ? (arr_3 [i_1 - 1] [i_0 - 3] [i_0]) : (min((((arr_5 [3] [6]) ? (arr_2 [i_0] [i_0]) : (arr_1 [i_3]))), var_5)));
                        var_14 -= (((min((arr_8 [6] [6] [i_0 - 2] [i_2]), (arr_8 [i_0] [i_0] [i_0 + 1] [i_3]))) > (((6745953787600465966 ? (arr_5 [i_0] [i_0]) : ((((arr_8 [i_0] [i_2] [i_3] [i_1 - 1]) && 1020))))))));
                    }
                }
                var_15 = (((arr_4 [i_0 - 4] [i_0] [i_0 + 1]) + ((((arr_4 [i_0 + 1] [i_0] [i_0 - 1]) && (arr_4 [i_0 - 4] [i_0 - 2] [i_0 + 1]))))));
            }
        }
    }
    var_16 = var_7;
    var_17 = (((var_11 && var_6) ? ((var_0 >> (var_2 - 50717169))) : var_1));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_18 ^= var_0;
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_19 = ((((((min((arr_17 [i_4] [i_4] [i_4] [i_7]), 1382614133)) / var_1))) ? ((min(2048, (max((arr_9 [i_7] [i_7]), (arr_16 [i_7] [i_5] [i_5] [i_4])))))) : (arr_18 [i_4] [i_8] [i_8 - 1] [i_4] [i_4])));
                                var_20 = (max(var_20, var_12));
                            }
                        }
                    }
                }
                var_21 = ((!((!(arr_12 [i_4] [i_5] [i_5])))));
            }
        }
    }
    #pragma endscop
}
