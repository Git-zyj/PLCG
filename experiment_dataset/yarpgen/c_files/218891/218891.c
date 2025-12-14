/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2 + 1] [i_2 - 2] |= var_9;
                    arr_8 [i_0] [i_0] [i_1 - 2] [i_2] = (((var_3 && var_8) || ((min(-var_2, ((254 ? var_1 : var_10)))))));
                    arr_9 [i_0] [i_0] [i_1 + 1] [i_2] = -16777215;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_15 += (((!var_12) << ((((0 ? (var_3 / var_11) : (1 * var_2))) - 15772))));
                                var_16 ^= (((((24 + -1) << (5223398040917499193 - 5223398040917499191)))) ? 5223398040917499201 : (!293834097));
                            }
                        }
                    }
                    arr_20 [i_5] = ((5223398040917499197 > ((min(var_11, (min(var_7, var_11)))))));
                    arr_21 [i_3] [i_5] = (((((~(var_0 ^ var_4)))) ? ((((((47 ? 992 : 221))) ^ ((var_3 ? 21 : var_4))))) : (min((4824441055310983942 | 32749), (((~(arr_17 [i_5] [9] [i_3] [i_3 - 1]))))))));
                    arr_22 [i_5] [i_4] [i_4] = (min((((~6886822410609599346) ? (var_3 >= 414) : (arr_15 [i_5]))), (arr_18 [i_5] [13] [13] [i_3] [3])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 19;i_9 += 1)
                        {
                            {
                                arr_28 [i_5] [i_4] [i_5] = var_13;
                                var_17 = ((!(((min(var_9, var_7))))));
                                arr_29 [i_3] [i_3] [i_4] [i_5] [i_5] [i_8] [i_3] = ((((((-1 - 31) | (min(1020884500835307258, var_9))))) ? ((8974584372335334878 ? var_2 : (!11))) : ((~(arr_2 [i_9])))));
                                arr_30 [i_3] [i_3] [19] [i_3] [i_3 - 1] [i_5] = ((((((((min(var_9, 254)))) + (min((arr_17 [i_4] [i_5] [i_8] [11]), var_9))))) ? ((407 ? var_10 : 387)) : (var_7 > 13223346032792052424)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
