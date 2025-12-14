/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (arr_2 [i_0] [7]);
                arr_7 [i_0] [i_1] = (arr_0 [i_0] [i_1]);
                var_20 = (!1);
            }
        }
    }
    var_21 = (max((((var_7 ? var_0 : var_16))), var_8));
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 12;i_6 += 1)
                            {
                                var_22 = (arr_5 [i_6]);
                                var_23 = (min(var_23, (((var_6 ? (1218473056 ^ 46) : 207)))));
                                var_24 = (min(var_24, (arr_13 [i_4])));
                                var_25 = (arr_15 [6] [6] [i_2] [i_2]);
                            }
                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 10;i_7 += 1)
                            {
                                var_26 = (!46);
                                var_27 = var_17;
                                arr_24 [7] [i_3] [7] [i_3] [i_3] = var_13;
                            }
                            var_28 = ((((min(41, 108331718))) ? ((var_7 ^ (!var_3))) : ((max((arr_23 [i_3] [i_2 - 1] [i_3]), (arr_18 [i_2] [i_2] [i_4] [i_4] [i_5]))))));

                            for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                            {
                                var_29 = ((((((arr_16 [i_5 - 3] [i_2 - 1]) % (arr_16 [i_5 - 2] [i_2 - 4])))) ? (((!(arr_16 [i_5 - 3] [i_2 - 3])))) : ((((arr_16 [i_5 + 1] [i_2 - 1]) <= (arr_16 [i_5 - 3] [i_2 - 3]))))));
                                var_30 = (!48);
                                var_31 = var_15;
                            }
                            for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                            {
                                var_32 = (-(((!var_16) ? (var_1 / var_2) : (~207))));
                                arr_29 [i_3] [7] [i_3] = (~68);
                            }
                            var_33 &= (((arr_4 [i_2] [i_2 - 4] [8]) && ((max((((arr_2 [13] [1]) ? (arr_17 [1] [1] [1] [1]) : (arr_21 [i_4]))), var_16)))));
                        }
                    }
                }
                var_34 = (max(212, 59));
                arr_30 [i_3] = ((((max(var_7, 209))) / 1));
            }
        }
    }
    #pragma endscop
}
