/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((~(max(((((arr_0 [i_0]) ? 1 : 7915))), (max(6510453841486674585, var_0))))));
        arr_2 [i_0] = ((16183 ? 68 : 2671177508));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_21 = ((((min((~0), (arr_4 [i_1])))) ? ((((((36256 ? 16183 : 232))) ? ((181 ? var_10 : var_4)) : var_19))) : (min((arr_4 [i_1]), 1132843917))));

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            arr_7 [i_1] [i_1] [i_1] = 3162123378;

            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                var_22 *= ((((((arr_3 [i_3]) ? -6359098927825232579 : ((-340098615944961143 ? -6776 : -4361766471449043558))))) ? ((min((arr_8 [4] [i_3 + 2] [2]), var_18))) : var_6));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_15 [i_1] [i_2] [i_3] [i_3 + 2] [i_4 + 1] [6] [i_5] |= (min(((((~var_9) ? (((var_18 ? var_13 : (arr_3 [i_4])))) : (((arr_11 [i_1] [i_2]) ? (arr_3 [i_1]) : var_9))))), (((((var_12 ? 3286471792 : var_17))) ? ((0 ? (arr_3 [i_1]) : var_15)) : (((var_8 ? 181 : (arr_5 [0] [i_3]))))))));
                            arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] = var_6;
                            var_23 = 63528;
                            arr_17 [i_4] [i_1] [i_3] [i_1] [i_1] [6] [i_2] = 1;
                        }
                    }
                }
                arr_18 [i_1] [i_2] [i_3] = (((((-2823302244557422639 ? (arr_11 [i_2 - 1] [i_3 + 3]) : (arr_11 [i_2 + 1] [i_3 + 2])))) ? (((arr_10 [i_1] [i_1]) ? (arr_10 [i_1] [i_1]) : (arr_10 [i_1] [i_1]))) : (((((var_12 ? 36256 : 6218))) ? (((arr_14 [i_1] [i_1] [i_2 - 1] [i_3] [1]) ? (arr_6 [i_2] [i_2] [i_2 + 1]) : 0)) : (arr_6 [i_1] [i_2] [i_2 + 1])))));
            }
        }
    }
    var_24 = var_15;
    var_25 = ((((~((var_9 ? 134 : -367254695))))) ? ((82 ? 100 : 1944424088729305077)) : ((-var_0 ? -var_9 : 2035784622877462837)));
    var_26 = ((((((((var_19 ? 181 : var_6))) ? (max(var_19, var_11)) : var_9))) ? ((~((1578130350 ? var_4 : var_6)))) : var_4));
    #pragma endscop
}
