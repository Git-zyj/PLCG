/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((!(var_2 == 690861407))) ? 4236347389 : 1543340506));
    var_12 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_13 = 22110;
                        arr_10 [i_3] [i_2] |= var_9;
                        var_14 *= ((43451 ? (arr_3 [8] [i_2] [i_1]) : (arr_3 [i_3] [i_2] [i_1])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_15 = (((var_5 > 2900718872) != (arr_2 [i_0] [i_0])));
                        var_16 = (!-1670701715);
                        var_17 |= (arr_0 [i_1]);
                        var_18 = ((var_5 ? var_5 : (arr_6 [i_0] [1] [i_2] [i_4] [i_1] [i_0])));
                        var_19 = ((+(((arr_4 [i_0] [i_0]) - -30952))));
                    }
                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 21;i_5 += 1)
                    {
                        arr_15 [i_1] = ((!((((arr_4 [i_0] [i_0]) ? 6498800630500482045 : 16597001535863493260)))));
                        var_20 += var_4;
                        arr_16 [i_0] [i_1] [i_1] [i_2] [i_1] [i_5] = (14501 * 121);
                    }
                    var_21 = (arr_9 [i_0] [i_1] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_22 = 16597001535863493241;
                                arr_21 [i_1] [i_1] [i_2] [i_6 + 2] [i_1] = (var_0 == -1849742537846058356);
                                var_23 = ((((-(max((arr_7 [i_7] [i_6] [i_2] [i_2] [i_1] [i_0]), var_6))))) ? ((+(((arr_1 [i_0] [i_0]) + var_1)))) : (((-(arr_5 [i_2] [i_1] [i_2])))));
                                arr_22 [i_1] [3] = ((((!-14496) * ((-(arr_18 [i_0] [18] [i_2] [18]))))));
                            }
                        }
                    }
                    var_24 = ((((((arr_5 [i_0] [i_1] [i_1]) ? (arr_5 [i_0] [i_1] [i_2]) : (arr_5 [i_0] [i_1] [i_0])))) ? -14520 : var_8));
                }
            }
        }
    }
    var_25 = var_6;
    var_26 = var_0;
    #pragma endscop
}
