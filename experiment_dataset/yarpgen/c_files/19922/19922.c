/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [11] = (((arr_1 [i_0] [2]) >> ((((~((var_1 ? (arr_2 [i_0]) : 13598)))) + 13603))));
        var_16 += (1341039723 & var_0);
        arr_5 [i_0] = -384;
        arr_6 [i_0] [i_0] = (((((-3864 >= 2953927572) & ((~(arr_0 [i_0]))))) >= (!-5551998970787606091)));
        var_17 = var_6;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_18 = (((arr_12 [i_1] [i_2]) ? ((((arr_8 [i_5]) || var_0))) : (var_10 + var_7)));
                            var_19 = (((((~var_6) + 2147483647)) << (1 - 1)));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        arr_25 [i_1] [1] [i_2] [i_7] = (arr_11 [i_2]);

                        for (int i_8 = 2; i_8 < 21;i_8 += 1)
                        {
                            var_20 = ((var_12 ? (((-77 + 2147483647) << (((((arr_19 [i_2] [i_2] [i_6] [i_6] [i_7] [i_8]) + 5083483619099691156)) - 26)))) : 32752));
                            arr_28 [i_1] [i_2] [19] [i_1] [5] = var_13;
                        }
                    }
                }
            }
        }
        var_21 = ((((((arr_27 [i_1]) * 1))) ? (~1082) : 32752));
        arr_29 [i_1] [16] = ((((-5551998970787606078 ? var_5 : -5551998970787606056)) & ((((32752 != (arr_20 [8] [0])))))));
    }
    var_22 = var_8;
    var_23 = (((63 + var_4) - var_14));
    #pragma endscop
}
