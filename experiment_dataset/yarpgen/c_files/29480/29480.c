/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [5] = (arr_2 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_20 += ((((max((arr_10 [i_0] [i_0] [i_1] [i_2] [i_3]), (arr_10 [3] [i_1 - 1] [i_2] [i_2] [i_3])))) ? -var_16 : 3455));
                        arr_11 [i_2 + 2] [12] [i_2 + 2] [i_2] = ((min((((-3456 ? (arr_2 [i_0]) : 2))), (arr_5 [i_2 + 2] [i_3] [i_3]))) < (arr_8 [i_2 + 2] [i_0]));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_15 [3] [i_1] [i_2] [i_4] = ((((min(-3469, 3443))) ? (((!-3455) / ((var_10 ? (arr_9 [i_0] [i_1] [i_2] [i_2] [i_2 + 2] [i_1]) : (arr_10 [i_0] [i_1] [i_2] [i_4] [i_4]))))) : ((((var_15 && (((var_3 + (arr_2 [11]))))))))));
                        var_21 = (((((arr_7 [i_4] [i_4] [i_1 + 1] [i_1]) >> (var_14 + 4071791115092349367)))) ? (max((arr_7 [i_1] [i_2 + 1] [i_1 - 3] [i_1]), var_9)) : (arr_7 [i_2] [i_2 + 1] [i_1 - 1] [i_0]));
                    }
                    var_22 = (min(var_22, (((-(((764568550 < (arr_1 [i_2])))))))));
                    var_23 = ((((~(arr_7 [i_2 + 1] [i_2] [i_1 - 4] [i_1 - 2])))) ? 3455 : ((~((var_2 ? var_12 : (arr_8 [8] [i_2 - 1]))))));
                    var_24 += (arr_1 [i_0]);
                    arr_16 [i_0] = (max(((max((arr_8 [i_2 - 1] [i_1 - 3]), var_9))), (min(-3442, (min((arr_5 [10] [17] [i_0]), var_13))))));
                }
            }
        }
        var_25 = ((-((-((var_12 ? var_12 : -91))))));
        var_26 = ((!((((3470 ^ 1) ? -var_14 : (((min(var_7, (arr_13 [i_0] [i_0] [4] [i_0]))))))))));
    }

    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        var_27 = (((var_1 + 9223372036854775807) << (((((min(((((arr_7 [i_5 + 1] [i_5] [1] [10]) ? var_11 : var_13))), ((1 ? var_7 : (arr_1 [4]))))) + 54)) - 34))));
        arr_19 [i_5] = ((((min(var_15, (arr_2 [i_5 + 1])))) ? ((16290679228083351842 ? 3851597998 : 1)) : (((+(((arr_13 [10] [i_5] [i_5] [i_5 + 1]) ? 1 : (arr_8 [i_5] [i_5]))))))));
        var_28 = var_2;
    }
    var_29 = (((((var_9 > var_7) == var_7)) ? (min(var_15, (((var_8 ? -3467 : 3448))))) : (max(var_18, -var_17))));
    #pragma endscop
}
