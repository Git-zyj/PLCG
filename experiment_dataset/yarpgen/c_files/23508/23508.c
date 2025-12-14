/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((-((var_9 ? var_8 : (var_15 > 295787154371333565)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, 13855085472317843759));

                            for (int i_4 = 1; i_4 < 14;i_4 += 1)
                            {
                                arr_12 [i_0] [i_0] [i_4 + 1] = var_14;
                                var_18 = (max(var_18, (((((~(arr_6 [i_1] [i_2] [i_3] [i_4]))) + ((var_8 + (1 / 1))))))));
                            }
                            for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                            {
                                arr_15 [i_0] [i_1] [i_2 + 1] [i_3] [i_0] [i_5] = (((arr_8 [4] [4] [i_0] [i_3]) ? (((((1 ? 1 : (arr_13 [i_5] [i_1] [i_2])))) ? ((15101874224131707579 ? (arr_0 [i_0] [i_1]) : var_7)) : (max(1, var_6)))) : ((((!(arr_1 [i_0] [i_0])))))));
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_5] = var_10;
                                var_19 = max((max((arr_4 [1] [1] [i_2] [i_2]), (min(1, var_8)))), (max(var_2, 1)));
                                arr_17 [i_5] [i_5 - 1] [i_5] [i_0] [i_5] = (!(((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) || 1)));
                            }
                            /* vectorizable */
                            for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                            {
                                arr_22 [i_0] [i_0] [13] [i_3] = (~var_14);
                                var_20 = (max(var_20, (1 | 1)));
                                var_21 = (min(var_21, ((1 ? (!1) : 11066110815303307355))));
                                var_22 = var_11;
                            }
                            for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                            {
                                arr_27 [10] [i_3] [i_2] |= ((((~1) ? ((~(arr_3 [i_0] [i_0] [i_3]))) : (((608592122070015161 ? 1 : 1))))));
                                arr_28 [i_0] = (((((-(min((arr_18 [i_0] [1] [i_2] [i_3]), 7106430719755666197))))) ? (1 % var_14) : var_9));
                                var_23 = ((((1679423033035761743 ? (var_1 ^ var_0) : var_14))) ? var_14 : (~0));
                                arr_29 [i_0] = (max((((((1 ? 1 : 17487083283007442935))) ? (!var_6) : ((min((arr_19 [i_0] [i_0] [i_0]), 1))))), var_11));
                            }
                        }
                    }
                }
                arr_30 [i_0] [i_1] [i_0] = (1 ? 17879158919113495625 : 7433551448311388199);
            }
        }
    }
    #pragma endscop
}
