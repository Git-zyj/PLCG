/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_17 = (arr_6 [i_0]);
                            var_18 = (((arr_0 [i_1] [i_1]) ? (arr_6 [i_0]) : (9223372036854775807 + -7533175411471110020)));
                            arr_11 [i_3] [i_3] [i_3] [i_3] = ((-((~(arr_3 [i_0] [i_0])))));
                        }
                    }
                }
                arr_12 [i_0] [i_0] = (((((~(arr_5 [i_0])))) ? (min((arr_5 [i_0]), (arr_5 [i_1]))) : ((var_12 ? (arr_5 [i_0]) : (arr_5 [i_0])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            var_19 = (((((var_14 && (arr_10 [i_5 + 1] [i_5] [i_5] [i_5] [i_5 + 1] [i_5])))) << (((((arr_8 [i_5 + 1] [i_5] [i_5] [i_5]) ? (arr_8 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5]) : (arr_10 [i_5 + 1] [i_5] [i_5] [i_5] [i_5 + 1] [i_5]))) - 67))));
                            arr_18 [i_0] [i_0] [i_5] [i_5] = ((var_7 ? ((((var_16 + var_12) || (((var_13 - (arr_4 [i_1] [i_1]))))))) : (arr_13 [i_0] [i_0])));
                            arr_19 [i_5] [i_1] = ((((((166 ? 31597 : (-9223372036854775807 - 1))))) ? ((((((arr_0 [i_5] [i_4]) - (arr_16 [i_0] [i_0] [i_5] [i_5])))) ? ((-832858490 - (arr_1 [i_0] [i_0]))) : ((-9223372036854775786 + (arr_8 [i_0] [i_1] [i_0] [i_5]))))) : ((~((~(arr_5 [i_0])))))));
                        }
                    }
                }
                var_20 = (arr_6 [i_0]);
            }
        }
    }
    var_21 = ((((((max(var_10, var_6)) & var_10))) || (25173 != var_4)));
    var_22 = ((var_12 ? -32764 : (max(var_7, var_10))));
    var_23 = ((var_3 ? 9223372036854775807 : (var_2 - var_2)));
    #pragma endscop
}
