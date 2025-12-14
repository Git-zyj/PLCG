/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_18 -= ((((((((var_3 ? -11 : var_0))) ? (((2038069091 ? (arr_8 [i_2 - 2] [i_1]) : 53))) : (arr_5 [i_0 - 1] [i_1 + 3] [i_1 + 3])))) ? ((((((min(52, 38)))) != ((11 ? (arr_6 [i_3] [i_1] [i_1]) : (arr_3 [i_0])))))) : (max((arr_7 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1]), 143))));
                            var_19 &= (arr_4 [i_1 - 3] [i_1 - 3] [i_2 - 1]);
                            arr_9 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] = ((((var_14 >= (arr_5 [i_0] [i_1 - 1] [i_2]))) ? ((min(1, -112))) : (arr_6 [i_0] [i_2] [i_3])));
                            arr_10 [i_0] [i_0] [i_3] [i_0] [i_1] [i_2] |= (((((((min((arr_8 [i_0] [i_1 - 2]), (arr_4 [i_0] [7] [i_0])))) ? (((var_17 ? 12 : (arr_8 [i_2] [i_0])))) : (arr_3 [i_2])))) ? ((((min(var_2, 1))) ? var_15 : ((var_3 ? 1 : var_0)))) : (min(-26, ((var_11 ? 158 : 37))))));
                        }
                    }
                }
                var_20 -= min((arr_7 [i_1] [i_1 + 2] [i_1] [i_1 + 2]), ((~(arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                var_21 = ((((((((arr_8 [i_0] [i_0]) ? 25172 : (arr_5 [i_1] [i_1] [i_1])))) ? (max((arr_2 [i_0]), (arr_4 [19] [i_0] [19]))) : (((var_8 ? var_16 : var_2))))) * ((((((((arr_5 [i_1] [i_0] [i_0]) || var_16))) == (((arr_4 [i_1] [i_0] [i_0]) / var_15))))))));
            }
        }
    }
    var_22 = var_12;
    #pragma endscop
}
