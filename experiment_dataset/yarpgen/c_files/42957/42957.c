/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = ((-(max(-28, ((13577742030280656824 ? (arr_2 [i_0]) : var_8))))));
                arr_5 [i_0] [i_0] [i_0] = arr_2 [i_0];
                var_19 = ((-(arr_2 [i_0])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_20 = (((251658240 - var_12) ? (((min(var_15, var_17)) - (((arr_14 [i_3] [i_3] [i_3]) + var_11)))) : var_5));
                                var_21 = (arr_20 [i_2] [i_4 + 1] [i_2 + 2] [i_5] [i_3 - 1] [i_5 + 2] [i_5]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_22 &= (max((min(-217629105, (arr_14 [i_8 - 1] [i_3 - 1] [i_3 - 1]))), ((min((arr_14 [i_2 - 3] [i_3 - 1] [i_8 + 2]), (arr_14 [i_4 + 1] [i_3 + 1] [i_3 + 1]))))));
                                arr_28 [i_2] [i_2] [i_4] [i_2] = ((+(((11024946981373251097 + 1199845226) ? var_10 : (arr_27 [i_8] [i_7] [i_3] [i_3])))));
                                var_23 = ((((((arr_6 [i_2]) * (arr_6 [i_2])))) ? ((min((arr_6 [i_2]), (arr_6 [i_2])))) : (((arr_6 [i_2]) + (arr_6 [i_2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (max((((((max(var_5, var_4)))) + (7171327059212749356 - -89))), ((((((1199845226 ? 2147483632 : var_3))) ? ((var_13 ? var_1 : -2147483621)) : -11294)))));
    #pragma endscop
}
