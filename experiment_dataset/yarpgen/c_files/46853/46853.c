/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_1] = (((arr_3 [i_0]) ? (((arr_4 [i_2] [i_0]) ? 127 : (min(var_14, (arr_0 [i_1]))))) : (arr_8 [i_1 - 1])));
                    var_20 = ((~((var_0 ? var_7 : (arr_3 [i_1 + 1])))));
                }
                /* LoopNest 3 */
                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_21 = ((var_13 ? (arr_3 [i_3 - 1]) : (((-126 || (!var_18))))));
                                arr_17 [i_1] [i_4] [i_3] [i_1] [i_0] = (max(1, (((arr_11 [i_0] [i_3]) ? (~255) : 1022251748))));
                                arr_18 [i_3] [3] [3] [1] [i_5] = ((var_10 ? (((-(arr_11 [i_0] [i_3])))) : (((arr_8 [i_1 + 3]) / (arr_8 [i_1 + 2])))));
                                var_22 = ((((((min((arr_6 [1] [i_1]), (arr_14 [i_0] [i_3] [i_3] [i_5] [i_5 - 1])))) ? var_3 : var_12)) + (((-((max((arr_15 [i_0] [i_3]), -23951))))))));
                                var_23 = ((!(((var_1 ? (arr_11 [1] [i_3]) : (var_17 % 42063))))));
                            }
                        }
                    }
                }
                arr_19 [5] [i_1] [i_1] = ((((((((arr_2 [i_0]) + 2147483647)) >> (((arr_2 [i_0]) + 38))))) ? ((max((arr_2 [i_0]), (arr_2 [i_0])))) : var_2));
            }
        }
    }
    var_24 -= var_15;
    #pragma endscop
}
