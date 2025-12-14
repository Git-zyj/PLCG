/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_7 ? var_5 : -113))) ? var_7 : (((~var_10) ? var_8 : (var_4 & var_10)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (min(var_17, (((((!1) ? (!var_0) : var_0))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 9;i_3 += 1)
                {
                    {
                        var_18 = (min(var_18, 94));
                        var_19 &= ((-116 | ((((var_15 / var_11) <= (((var_6 ? var_1 : (arr_1 [i_1] [i_1])))))))));
                        var_20 = ((((arr_9 [i_3 - 4] [i_2] [i_2] [8] [i_0] [i_0]) ? (min(var_13, var_11)) : 127)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_13 [i_4] = ((((var_5 > (arr_11 [i_4])))) != ((((arr_10 [i_4] [i_4]) != (arr_10 [i_4] [i_4])))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    {
                        var_21 = ((var_8 ^ ((-(arr_20 [i_6] [i_4] [4] [i_6] [1])))));
                        var_22 = (((arr_19 [i_7 - 1] [i_6 + 1] [i_6 - 1] [i_6 - 1]) && (arr_19 [i_6] [i_6 - 1] [0] [i_5])));
                    }
                }
            }
        }
        arr_21 [i_4] = ((var_5 ? (((14 > (arr_12 [i_4])))) : (arr_20 [i_4] [i_4] [i_4] [i_4] [i_4])));
        arr_22 [i_4] = (arr_17 [i_4]);
    }
    #pragma endscop
}
