/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_10 = (((arr_6 [i_2 - 1] [i_2 - 3] [i_2 + 1] [i_0 - 2]) ? (arr_7 [i_2 + 1] [i_2 - 2] [i_2 + 2] [i_2]) : (arr_8 [i_0] [i_2] [i_0 - 1] [i_0 - 1] [i_2 + 1])));
                        var_11 = (((arr_9 [18] [i_2 + 3] [i_0 - 1] [i_3]) ^ var_6));
                        var_12 -= ((arr_4 [i_0 - 1]) | (arr_2 [i_0 - 1]));
                        var_13 |= ((arr_6 [7] [i_0] [18] [i_1]) ? (arr_5 [i_0] [i_0] [17] [i_0]) : (arr_8 [i_2] [8] [i_2 - 3] [i_2] [i_2 + 3]));
                        arr_10 [i_2 + 2] [i_2] [i_2 + 2] [i_0 - 2] [i_0 - 2] = (((arr_1 [i_2 + 3]) ? (arr_1 [i_2 - 1]) : (arr_1 [i_2 + 3])));
                    }
                }
            }
            var_14 = ((((((arr_6 [i_0] [i_0] [i_1] [i_0 - 2]) ? (arr_3 [i_0]) : (arr_4 [i_0 - 1])))) ? ((((arr_3 [20]) <= 3565342557))) : ((((arr_2 [i_1]) && 30)))));
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_15 = (((1 < (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            var_16 = (((arr_7 [i_5 - 1] [i_5 - 1] [i_0 + 1] [i_5 - 1]) - (arr_7 [i_5 + 2] [i_4] [i_0 - 2] [i_6])));
                            var_17 = (arr_14 [i_6 + 1] [i_5 + 2]);
                            var_18 = (((arr_14 [i_0 + 1] [i_0 + 1]) != (arr_17 [i_6 + 1] [i_0 - 1] [i_0] [i_0] [i_0])));
                        }
                    }
                }
            }
            arr_20 [i_4] &= (((arr_7 [i_0 - 1] [i_0] [i_0] [i_0 - 1]) > (arr_4 [i_4])));
        }

        for (int i_8 = 1; i_8 < 19;i_8 += 1)
        {
            arr_23 [i_0] = (((arr_19 [i_8 + 2]) ? (arr_4 [i_0 - 1]) : (arr_19 [i_8 - 1])));
            arr_24 [15] = 8191;
            var_19 &= (arr_13 [9] [9] [i_8]);
        }
        var_20 = 255;
    }
    var_21 |= ((((((!var_2) << (-var_7 + 14211)))) ? (var_4 << var_0) : var_2));
    var_22 = ((var_8 ^ (((!var_0) ? ((max(var_6, var_2))) : var_4))));
    var_23 = (min(var_1, (((-((var_6 ? var_7 : 17)))))));
    #pragma endscop
}
