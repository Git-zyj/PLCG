/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((max((max(var_4, ((38 ? var_6 : var_3)))), (((min(-30, var_10)))))))));
    var_18 = ((min(var_2, 27)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = (((!32) ? ((max(((var_7 ? (arr_6 [i_1]) : (arr_4 [i_0 - 2] [4] [i_2]))), ((-90 ? (arr_1 [i_2]) : (arr_3 [i_0] [i_0] [i_2])))))) : (arr_5 [i_2] [i_2])));
                    var_19 = (((arr_5 [4] [4]) ? (((((((arr_0 [0]) + 9223372036854775807)) << (65011712 - 65011712))) & (arr_3 [i_2] [i_2] [i_2]))) : ((min((arr_3 [i_0] [i_1] [i_2]), -2852425164)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    arr_15 [i_5] [i_5] [1] [i_5] = (max(-28, -30));
                    var_20 = ((~(arr_10 [i_3 + 2] [i_3 + 3])));
                    var_21 = 9223372036854775807;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_21 [i_3] [i_3] [i_3] [i_3 + 2] = ((!((max(1049787397, (!-64))))));
                                var_22 = (min(var_22, (108 | -var_15)));
                                var_23 = (min(var_23, ((((((min(var_2, (arr_14 [i_3 - 1] [i_4] [i_5] [i_6]))))) ? (((-((149 ? 3074432214 : 30))))) : -5368043926592326051)))));
                                arr_22 [i_6] [i_6] [i_5] [i_7] = (max((-9223372036854775807 - 1), 2290922849));
                                var_24 = ((((((max((arr_19 [3] [3] [i_3 + 3] [i_6] [i_7]), var_15))) ? (min((-9223372036854775807 - 1), -1846146093)) : (((var_0 ? var_12 : (arr_8 [i_3])))))) | ((((arr_11 [i_3 + 1] [i_3 + 1]) ? (arr_11 [i_3 + 3] [i_3 + 3]) : (arr_13 [i_3 + 2] [i_3 + 2] [i_3 - 1] [i_3 + 3]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
