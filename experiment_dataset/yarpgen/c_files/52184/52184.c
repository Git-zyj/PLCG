/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    var_20 = (min(var_20, ((max((((var_12 & var_16) << var_12)), ((((~var_18) && (var_14 <= var_9)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (17 & 5939)));
                var_22 = ((~(~1)));
            }
        }
    }

    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        arr_7 [i_2 - 1] [i_2] = (((max((((arr_6 [i_2]) << (-2745665350414094738 + 2745665350414094742))), (!163))) > var_7));
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_14 [i_3] [1] [i_5] = ((-var_1 < ((-((-(arr_12 [i_5] [16] [i_3] [i_2 + 4])))))));
                        arr_15 [0] [i_3] [i_4] = ((((!(arr_9 [i_2 - 1]))) ? ((((!(!var_18))))) : (((arr_12 [i_2] [19] [i_4] [i_5]) / (arr_9 [i_2 + 2])))));
                        var_23 = ((((max((((arr_11 [i_2]) / -4025)), (((!(arr_5 [i_2] [i_3 + 1]))))))) ? (((arr_13 [i_4] [7] [i_4] [i_4] [i_4] [i_4]) % ((((arr_11 [i_2]) ? var_3 : (arr_6 [i_2 + 1])))))) : ((((var_10 | 47340) ? (arr_9 [i_3]) : var_16)))));
                        arr_16 [12] [7] [i_4] [7] = ((arr_11 [i_2 + 1]) ? (arr_5 [i_2 - 1] [i_3]) : (((~((var_8 ? (arr_10 [i_5] [i_4] [i_3] [i_2]) : var_13))))));
                        var_24 *= var_14;
                    }
                }
            }
        }
    }
    var_25 -= ((var_13 ? ((10745276408345339113 ? (min(11342063016630399897, var_17)) : ((max(var_6, 7))))) : (min(((min(var_11, 255))), 10911420880547384390))));
    #pragma endscop
}
