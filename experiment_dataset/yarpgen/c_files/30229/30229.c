/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    var_19 = var_10;
    var_20 -= (var_8 ? ((-12205260253553376830 % (min(var_16, var_9)))) : (!var_11));
    var_21 = min(var_1, ((8837055314063014067 ? var_7 : var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_22 = (var_6 ? ((((!(arr_7 [i_0] [i_3 + 2] [i_3 + 2] [i_0] [i_4]))))) : (max((((1 ? 1 : 1))), (((arr_9 [i_0] [i_4] [i_2] [i_4] [i_4] [i_4] [i_2]) | 1461677475310811655)))));
                                arr_11 [i_4] [1] = (((arr_2 [i_4 - 1]) ? (arr_10 [i_4 - 1] [i_3] [i_4] [i_1] [i_4] [i_1] [0]) : (((arr_8 [i_1 + 3] [i_1 - 1] [i_1 - 1] [i_1]) ? (arr_8 [i_1 + 2] [6] [i_1 + 2] [i_1]) : (arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 2])))));
                            }
                        }
                    }
                    var_23 = (max(var_23, ((max((max(((((arr_10 [i_0] [i_1] [i_1] [8] [0] [i_2] [i_2]) <= 1))), 6606630645591995617)), 6393984826983990126)))));
                }
                var_24 = (((arr_4 [i_1 + 1] [i_1 + 2] [i_1 - 2]) != 16985066598398739951));
            }
        }
    }
    #pragma endscop
}
