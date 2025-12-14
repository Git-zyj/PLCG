/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-1 ? -71 : var_2));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = ((((var_2 != ((-42 ? -32 : -18)))) ? ((((!-97) == -111))) : ((((var_7 ? (arr_1 [i_0] [i_0]) : var_11)) & var_4))));
        arr_3 [i_0] [i_0] = ((var_11 != ((((var_7 ? var_3 : var_2)) ^ (!0)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            var_14 = -var_3;
                            arr_14 [i_2] [i_0] [i_2] [i_2] = (i_0 % 2 == 0) ? (((((((((arr_7 [i_0] [i_4 + 1] [i_2] [i_0]) + 2147483647)) << (((arr_2 [i_0] [i_4 - 1]) - 109))))) ? ((((-32 ? (arr_2 [i_0] [i_0]) : var_8)))) : -var_1))) : (((((((((arr_7 [i_0] [i_4 + 1] [i_2] [i_0]) + 2147483647)) << (((((((arr_2 [i_0] [i_4 - 1]) - 109)) + 173)) - 19))))) ? ((((-32 ? (arr_2 [i_0] [i_0]) : var_8)))) : -var_1)));
                            arr_15 [i_0] [i_0] [i_1] [13] [i_0] [i_3] [i_4 - 1] = ((((!(var_9 > -54))) ? (!54) : 112));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_15 = (min(var_15, var_0));
                            arr_18 [i_0] [i_0] = arr_10 [i_1] [i_0];
                            var_16 = (max(var_16, (((~(arr_0 [i_5] [i_1]))))));
                            arr_19 [1] [i_1] [5] [5] [i_0] = arr_7 [i_0] [i_1] [i_2] [i_0];
                            var_17 *= (37 / 76);
                        }
                        var_18 = (max(var_18, (arr_6 [i_0] [i_2] [i_2])));
                        var_19 = ((!(((32 ? (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_3]) ? 96 : var_9)) : ((~(arr_16 [i_0] [9] [9] [i_3]))))))));
                    }
                }
            }
        }
        var_20 = 124;
        arr_20 [i_0] = ((var_9 * (!var_9)));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        arr_25 [1] [1] = ((((((-83 < -115) < var_0))) * (max((arr_21 [i_6]), var_11))));
        arr_26 [i_6] = -126;
        arr_27 [0] = ((((max((arr_23 [i_6]), 89))) != var_7));
    }
    #pragma endscop
}
