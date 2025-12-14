/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = ((((((arr_3 [i_0 + 1] [i_2 - 2] [i_2 - 3]) ? (arr_3 [i_0 + 2] [i_2 + 1] [i_2]) : (arr_3 [i_0 + 1] [i_2 - 2] [i_2 - 1])))) ? (((arr_3 [i_0 - 1] [i_2 - 2] [i_2 + 1]) ? var_11 : (arr_3 [i_0 + 1] [i_2 + 1] [i_2 - 2]))) : (((arr_3 [i_0 - 1] [i_2 - 2] [i_2 - 2]) ? 63008 : (arr_3 [i_0 + 2] [i_2 - 2] [i_2 + 1])))));
                    arr_7 [i_0 + 1] [i_0 + 1] [i_2] = ((((!(arr_4 [i_0 + 2]))) ? (!63008) : ((1 ? (!1) : 13802))));
                    var_21 |= ((((min((((arr_3 [i_0 - 1] [12] [i_2]) ? 23523 : var_7)), (((arr_5 [i_0] [1]) ? var_1 : var_5))))) ? ((993649249 ? (arr_5 [i_2 - 3] [i_0 + 2]) : ((~(arr_6 [i_1]))))) : (((((var_0 ? var_5 : (arr_0 [1])))) ? ((1 ? 25039 : 63019)) : (((arr_1 [i_1]) ? var_14 : 27107))))));

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        var_22 *= ((((((var_14 ? (arr_3 [i_2 - 3] [i_2 - 3] [i_2 - 3]) : (arr_3 [i_2 - 2] [i_2 + 1] [i_2 - 1]))) + 2147483647)) << ((((var_11 ? (var_13 * var_9) : 1)) - 237367593))));
                        var_23 = (arr_3 [i_0] [i_2 - 3] [i_3]);
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                {
                    var_24 = var_14;
                    var_25 = ((((arr_12 [i_5]) ? (max((arr_0 [i_4]), 1)) : 1)));
                    var_26 = ((~(arr_17 [i_4] [i_6 + 3] [i_6 + 1] [i_6 - 1])));
                    arr_19 [i_6 + 1] = ((((((((arr_1 [i_4]) - 34315)) < 17526))) != ((var_4 >> ((((var_17 ? 3836 : 3329912538054245754)) - 3806))))));
                }
            }
        }
    }
    var_27 = var_1;
    var_28 = (var_15 < ((-(6144 ^ var_19))));
    var_29 = ((((((var_6 ? var_8 : var_15)))) ? -29394 : 65524));
    #pragma endscop
}
