/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((!303348157474673919) ? ((-(arr_1 [i_0]))) : -18065));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((((((arr_5 [i_0] [i_1]) ? (arr_5 [i_0] [i_1]) : (arr_5 [i_0] [i_0])))) && ((min((arr_5 [i_1] [i_2]), ((var_6 ? var_9 : var_3)))))));
                    arr_10 [i_2] = (((((18143395916234877696 >> (((arr_3 [i_0] [i_1]) - 6751006022937087311))))) ? ((((var_11 <= (arr_3 [i_1] [i_1]))))) : (((arr_3 [i_1] [i_0]) ^ (arr_3 [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3 - 1] [i_2] = ((((-(arr_14 [i_0] [i_2] [i_2] [i_3] [i_0]))) + (arr_7 [i_2] [i_3 + 1] [i_2])));
                                var_15 *= (((--18143395916234877691) ? 6629793745176077404 : (max((((var_1 * (arr_13 [i_0] [i_0] [14] [i_3])))), (arr_5 [i_3 + 2] [i_3 - 1])))));
                                arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] = ((((max(127, ((max(16651, 2668225112871619277)))))) ? (((arr_8 [i_3 + 1] [i_3 - 1] [i_1] [i_1]) ? (arr_3 [i_3 - 1] [i_3]) : ((((arr_6 [i_4] [i_4] [i_2] [11]) + (arr_11 [9] [i_3] [9] [i_1] [9])))))) : (min(var_8, (arr_8 [i_3 + 2] [i_1] [i_2] [i_1])))));
                                arr_18 [i_0] [i_0] [i_0] [i_3] [i_2] [i_0] = min(((((-18061 ? 18143395916234877691 : 1541)) == ((((arr_7 [i_2] [i_2] [i_3]) ? var_6 : (arr_6 [i_0] [i_1] [i_2] [i_4])))))), (59238 == 303348157474673897));
                            }
                        }
                    }
                }
            }
        }
        arr_19 [i_0] [i_0] = (-3 ^ var_12);
    }

    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_22 [i_5] = (max(9887, 103));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 17;i_7 += 1)
            {
                {
                    arr_28 [i_5] [i_6] [i_7] = var_7;
                    arr_29 [i_5] = (arr_23 [i_5] [i_6]);
                    arr_30 [i_5] [i_5] [i_5] [i_7] = (max(((min(var_9, (arr_24 [i_7 - 1] [i_6] [i_5])))), (((~var_3) | var_13))));
                }
            }
        }
    }
    #pragma endscop
}
