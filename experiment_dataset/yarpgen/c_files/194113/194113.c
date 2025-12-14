/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (var_8 || var_6)));
    var_13 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = ((((var_7 ? var_1 : var_2))) ? (((min(var_1, var_6)) - 4163326384)) : (min(var_4, (var_4 & var_2))));
                arr_6 [i_0] [i_0] = (min(1, (((((((arr_2 [i_0]) && (arr_0 [i_0]))))) == (max(var_4, (arr_4 [i_0])))))));

                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    arr_9 [i_2 - 2] = -8989847815621829838;
                    arr_10 [i_2 - 4] = ((((min(var_1, (max(var_6, (arr_3 [i_0] [i_1] [i_0])))))) && (!-5128105846856173416)));
                }
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    var_15 = (max(var_15, -2735910472288112449));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_16 = (((arr_14 [i_5]) >= ((-(arr_17 [i_1] [i_1] [i_1] [i_3] [i_3 - 2])))));
                                arr_19 [i_0] [i_1 - 2] [i_3] [i_4] [i_5] [i_3] [i_0] = (((arr_7 [i_3 - 2] [i_3 - 1] [i_1 + 2] [i_1 + 1]) ? ((max((arr_7 [i_3 + 1] [i_3 + 1] [i_1 + 3] [i_1]), (arr_7 [i_3 - 1] [i_3 - 2] [i_1 + 2] [i_0])))) : (min((arr_7 [i_3 - 1] [i_3 - 2] [i_1 + 3] [i_1]), var_4))));
                            }
                        }
                    }
                    arr_20 [i_0] [i_1 + 1] [i_3] = ((((max((arr_7 [i_3] [i_3] [i_1] [i_0]), var_10))) ? ((+((var_0 ? (arr_1 [i_0]) : (arr_2 [i_0]))))) : (((((var_3 != var_7) && (((arr_16 [i_0] [i_1] [i_3]) != (arr_17 [i_0] [i_0] [18] [i_0] [i_0])))))))));
                    var_17 -= ((((-(arr_0 [i_1 - 1])))) ? ((((!(arr_0 [i_1 - 1]))))) : (((arr_0 [i_1 - 2]) & var_8)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 4; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            {
                var_18 = (max(var_18, (((-((((min(var_4, 18200968592401017707)) != (!var_5)))))))));
                arr_25 [i_6] [4] [4] = (((max((((-(arr_16 [i_7] [i_6] [i_6 - 1])))), (arr_18 [i_7 - 1] [i_7] [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1]))) >= (((-(arr_11 [i_6] [i_7 - 1]))))));
            }
        }
    }
    var_19 = var_10;
    #pragma endscop
}
