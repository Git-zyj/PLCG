/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_9 ? var_16 : 8796088827904)) & var_17)) * (((((max(var_12, var_13))) * (!var_4))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_0] [7] [7] [7] = 0;

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_21 = ((112 && ((max(-8796088827905, ((((arr_0 [i_0] [i_0]) ? var_17 : (arr_2 [13])))))))));
                        var_22 = ((~(((((((-1713856461 != (arr_11 [i_0] [i_0] [i_1] [i_3]))))) == (((arr_4 [i_2] [i_2]) ? (arr_7 [i_0] [i_1]) : (arr_1 [i_1]))))))));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_23 = (((((var_5 <= var_8) ? (((~(arr_2 [0])))) : (max(670592049, (arr_4 [i_0] [i_0]))))) | (((((~(arr_12 [i_0] [i_1 + 2] [4] [i_4])))) ? ((min((arr_7 [i_2] [i_4]), (arr_2 [i_0])))) : (max((arr_5 [i_0] [i_0]), (arr_15 [i_0] [i_1] [i_2] [i_0] [i_4])))))));
                            arr_17 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_0] [i_0]);
                            arr_18 [i_0] [i_4] = ((((~(arr_9 [i_0])))) ? ((-85 ? (arr_9 [i_0]) : 55)) : ((~(arr_9 [i_2 + 1]))));
                        }
                    }
                }
            }
        }
        var_24 |= (arr_16 [i_0] [14] [0] [i_0] [i_0] [i_0] [i_0]);
        arr_19 [i_0] = (((max((arr_0 [i_0] [i_0]), (arr_5 [i_0] [i_0]))) + (((arr_2 [i_0]) / (arr_2 [i_0])))));
    }
    #pragma endscop
}
