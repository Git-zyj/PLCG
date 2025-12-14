/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_11 -= (min((((arr_0 [i_0 - 1] [16]) ? (arr_0 [i_0 - 1] [i_0 + 2]) : var_1)), -var_6));
        arr_2 [i_0] |= ((((((-24579 ? (arr_1 [i_0]) : var_7)))) + (max((max(11286781295442475849, var_6)), 5852389920054923357))));
        arr_3 [i_0] |= var_7;
        arr_4 [11] = (((var_0 & var_6) ? -524287 : (((~(56345 ^ 56345))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 *= (4294443009 < ((-31 ? 524287 : 9191)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_13 -= (((arr_8 [i_0 - 1] [i_3] [i_3] [i_3]) * (arr_8 [i_0 + 2] [i_2] [i_2] [i_3])));
                        var_14 = (max(var_14, ((((((-25568 < (arr_0 [i_1] [i_1])))) | ((-102729073 + (arr_5 [i_0 + 3] [i_0 + 3]))))))));
                        var_15 = (min(var_15, (arr_0 [i_0 + 1] [i_1])));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_16 *= 24596;
                        var_17 -= ((464738319 ^ ((9185 & (arr_1 [i_0 + 1])))));
                        var_18 |= 1821175380;
                        arr_14 [i_0] [1] [i_2] [i_4] &= (524285 * 24601);
                    }
                    var_19 -= var_6;
                }
            }
        }
    }
    var_20 = ((((!(!var_10)))));
    var_21 = var_0;
    #pragma endscop
}
