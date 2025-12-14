/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_14 = var_0;
                            arr_10 [i_0] [i_0] [i_1] [i_3] = min(0, ((~(min(8070450532247928832, (arr_1 [12]))))));
                            var_15 = ((((((var_4 & var_13) ? (min(2417822443404854690, 2)) : ((((var_12 || (arr_2 [i_1])))))))) ? ((((((var_11 ? 2417822443404854687 : var_6)) >= ((-262144 + (arr_3 [i_0] [i_1]))))))) : (arr_5 [2] [i_1] [i_1])));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_16 = (max(var_16, ((((((((var_12 ? (arr_0 [i_0]) : -8070450532247928836))) ? (arr_11 [i_3] [i_3 - 1] [1] [2] [i_3 + 1]) : ((~(arr_4 [i_4])))))) || (((arr_12 [i_1] [i_1] [i_2] [i_3 - 1] [i_3 - 1]) >= 24))))));
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4] = (min((max(0, (arr_2 [i_1]))), var_9));
                            }
                            for (int i_5 = 0; i_5 < 14;i_5 += 1)
                            {
                                arr_16 [8] [i_1] [i_2] [i_1] [8] = ((var_4 ? ((-(arr_6 [i_1]))) : 24));
                                arr_17 [0] [i_1] [i_1] [i_1] [i_5] [i_5] [i_5] = var_2;
                            }
                            for (int i_6 = 1; i_6 < 1;i_6 += 1)
                            {
                                arr_20 [i_3] [0] [i_3] [i_1] [i_1] [i_3] = (1 * 16028921630304696926);
                                var_17 = (max(var_17, (min(2417822443404854687, (((var_8 | (min(var_2, 8070450532247928813)))))))));
                                arr_21 [i_0] [i_1] [i_1] = ((!var_0) || (((-((var_9 ? -16 : (arr_4 [i_3])))))));
                            }
                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 11;i_7 += 1)
                            {
                                arr_24 [i_1] [13] [0] [i_3] [1] = ((-99 ? var_1 : var_9));
                                var_18 = ((-15 ? (arr_14 [i_0] [i_0] [i_0] [i_7] [i_7 + 1] [i_7 + 1]) : ((var_8 ? var_3 : var_5))));
                            }
                        }
                    }
                }
                var_19 -= (min(-127, -51));
                var_20 = var_3;
            }
        }
    }
    var_21 = -var_8;
    #pragma endscop
}
