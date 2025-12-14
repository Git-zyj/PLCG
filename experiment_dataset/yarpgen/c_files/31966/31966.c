/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = (((((((1 ? (arr_5 [i_0] [i_1] [i_2] [13]) : 7))) ? ((var_12 ? var_8 : var_17)) : (var_11 && var_8))) >> (var_7 + 351864110)));

                    for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        var_19 = (min((((-(var_12 < -43)))), (max(((((arr_0 [13] [i_1 + 1]) ? var_7 : (arr_0 [i_0] [i_1 - 1])))), ((var_13 ? 4294967295 : 15))))));
                        var_20 = (((var_11 * -50) ? var_15 : (((148045322 ? -1436969011 : 4146921955)))));
                        var_21 = (((max(((((arr_1 [i_1]) ? var_12 : 1))), 4146921971)) | 6));
                        var_22 = var_1;
                        var_23 = ((((((((var_6 ? var_1 : 0))) ? (((arr_3 [i_1] [i_2]) ? var_16 : 1436969007)) : (arr_1 [i_0])))) ? ((var_10 % ((var_17 ? var_13 : 4146921977)))) : (82 || -var_8)));
                    }
                    for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_24 = var_3;
                            var_25 = (arr_0 [i_0] [i_5]);
                            var_26 = (arr_5 [i_0] [i_1] [1] [i_5]);
                        }
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            var_27 = (max(var_27, (((~(((!((min(var_5, 12)))))))))));
                            var_28 = ((arr_6 [4] [2] [2]) ? (((min(1, var_2)))) : (max((arr_11 [i_1] [i_1 + 1] [i_2]), (((arr_18 [0] [i_1]) - 21)))));
                            var_29 = min(-1510913743, var_17);
                            var_30 = (min(var_30, 1));
                        }
                        var_31 = ((((arr_1 [i_1 - 1]) / var_10)));
                    }
                    for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        var_32 = (max(var_32, ((((27 && var_17) & (((arr_5 [i_7] [i_1] [i_1 - 1] [i_7]) - (arr_17 [i_0] [i_7] [i_7]))))))));
                        var_33 = (arr_9 [i_2] [i_1]);
                    }
                    var_34 = ((~(((arr_1 [i_1]) ? 1 : 1))));
                }
            }
        }
    }
    var_35 &= var_7;
    var_36 = 32758;
    #pragma endscop
}
