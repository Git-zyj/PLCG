/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((((var_9 ? var_2 : var_9)) >> ((((var_15 ? var_2 : 25)) - 14464941598045875805))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((((((~(arr_5 [i_0])))) ? (arr_5 [i_0]) : ((((arr_1 [i_0]) % var_8))))) + 9223372036854775807)) >> ((((~(((!(arr_4 [i_1])))))) + 27)));
                arr_7 [i_0] [i_0] [i_1] = ((((arr_2 [i_0] [i_1]) ^ (arr_2 [i_1] [i_0]))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    arr_11 [i_2] [i_0] = (-(((var_4 ? var_1 : var_17))));
                    arr_12 [i_0] [i_1] [i_2] = ((var_3 == (((((arr_0 [i_0]) ? var_11 : var_14)) << (((arr_2 [i_1] [4]) - 10377772300175265897))))));

                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        arr_15 [i_1] [i_1] [i_0] [i_3] [i_0] [i_2] = (6802687274950492206 > -7834644038853932498);
                        arr_16 [i_0] |= (((((((var_11 >> (((arr_8 [i_3] [i_1] [i_1] [i_0]) - 17750297671055257856))))) | (((arr_0 [i_1]) ? -1985944219 : (arr_14 [i_0])))))) ? (arr_8 [i_0] [i_1] [i_2] [i_3]) : (arr_8 [i_0] [i_1] [i_2] [i_3]));
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((((arr_5 [i_2]) / (arr_13 [i_0]))) - (((((arr_14 [i_3]) || var_12))))))) ? ((((arr_10 [i_0] [i_1] [i_2]) << (((arr_0 [i_0]) - 12810594438010436319))))) : ((37355 ? -74 : 6802687274950492220)));
                        arr_18 [i_0] [i_1] [i_2] [i_3] = ((var_15 != (((-13430 + 3957933987134695614) / (min((arr_2 [i_2] [i_1]), 11))))));
                    }
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    arr_23 [i_1] [i_0] [i_4] = (((((arr_5 [i_1]) > 17900233130651725171)) ? (var_17 % var_11) : (((-7666428743048555029 ? 7666428743048555017 : -26)))));

                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        arr_27 [i_0] [i_4] [0] [i_4] = var_14;
                        arr_28 [i_4] [i_4] [i_4] [i_5] = ((~((-(arr_21 [i_0] [i_5 + 1] [i_4] [i_4])))));
                        arr_29 [i_0] = (arr_0 [i_1]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
