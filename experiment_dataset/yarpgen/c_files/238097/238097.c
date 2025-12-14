/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_10 ^= -1718999864358783676;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 - 2] [i_0 - 2] [i_2] [i_0 - 2] [i_0 - 2] = -1401520901;
                                var_11 = (min(3, 252));
                                var_12 = (min((min((arr_7 [i_0] [i_0 + 2] [i_2 - 1] [i_3 - 1]), (var_7 || var_8))), (arr_1 [i_0 - 2])));
                                var_13 = (((((var_8 < (min(var_7, var_2))))) < (((243 || (~4))))));
                                arr_13 [i_0] [i_0] [14] [i_3] [i_2] [i_2] = (~243);
                            }
                        }
                    }
                    var_14 = (min(var_14, ((((((((((94 ? -1 : 3)) + 2147483647)) >> (((max(var_2, var_9)) - 3506697894414153871))))) ? (((((((arr_11 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2]) ? (arr_7 [i_0] [i_0] [1] [i_2]) : -30224))) || (!var_7)))) : (arr_0 [i_1] [i_1]))))));
                }
            }
        }
        arr_14 [i_0 - 2] [17] = (((((1897106773 - (arr_8 [i_0] [22] [i_0 - 2] [i_0] [0])))) ? (arr_5 [i_0] [i_0] [i_0]) : ((243 ? (!11) : (((arr_9 [6] [16] [6] [i_0 - 1] [i_0]) ? var_6 : (arr_6 [i_0])))))));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    arr_24 [i_5] [i_5] [i_6] [i_5] = (min(((((arr_18 [i_5] [i_6] [i_6]) ? 191173028 : var_0))), (((arr_22 [i_6] [i_6 + 2] [22] [i_6]) ? (arr_22 [i_6] [i_6 - 1] [7] [i_6]) : 1455522281))));
                    var_15 = ((980938792 ? 3295638487481776940 : (arr_19 [i_5] [i_5] [i_5])));
                }
            }
        }
    }
    var_16 = ((var_4 == (max(-6931531910646377139, var_2))));
    var_17 = ((((var_2 == (min(2872069683, -7833652625630108777))))));
    var_18 += var_0;
    #pragma endscop
}
