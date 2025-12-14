/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max(((9223372036854775802 ? 0 : var_10)), ((-9223372036854775802 ? 1521112095 : var_17))))) ? (((1 ^ var_10) / var_8)) : ((min(var_12, ((min(var_5, 1))))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = ((((~(arr_1 [i_0])))) ? ((((min(2773855201, 1521112095))) ? ((min(1, 18401))) : (arr_0 [1]))) : ((((0 ? -15741 : (arr_1 [10]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 += (((((~(arr_15 [i_0] [6] [i_0] [11] [i_0])))) * (min((max((arr_5 [i_0] [i_0] [1]), 1)), (((var_14 ? (arr_9 [i_0] [i_0] [i_2] [i_0]) : (arr_10 [i_1]))))))));
                                var_22 = (((max((arr_4 [i_0] [i_1] [i_2]), (9223372036854775802 || 3735003058)))) > (arr_4 [9] [2] [i_2]));
                            }
                        }
                    }
                    var_23 = (min((min((var_7 >= 2773855192), 0)), ((min((((var_3 ? 1 : 1))), 4145381259)))));
                }
            }
        }
        var_24 = (((min((arr_0 [i_0]), var_4)) ^ ((((arr_4 [i_0] [i_0] [i_0]) * (arr_4 [i_0] [4] [i_0]))))));
        var_25 *= (((((arr_10 [i_0]) >= (arr_10 [i_0]))) ? (arr_14 [9] [i_0] [9] [9] [11]) : (arr_15 [7] [4] [i_0] [7] [i_0])));
        var_26 = (min((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_6)), ((max((arr_14 [i_0] [1] [8] [i_0] [0]), -9223372036854775802)))));
    }
    var_27 = var_9;
    #pragma endscop
}
