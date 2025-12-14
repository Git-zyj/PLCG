/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = ((-(((1 != (arr_3 [i_0 + 3] [i_0 + 1] [i_0 + 1]))))));

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    var_21 = 153;
                    var_22 = (var_16 != 1);
                    var_23 = (var_15 - (((min(-34, 281069095)))));
                    var_24 = (min((((arr_1 [i_0]) + (arr_0 [i_0] [i_2 - 1]))), (0 + 1)));
                    var_25 = (min((((arr_3 [i_0 - 3] [i_0 - 1] [i_0 - 3]) ? 1355289524 : (!var_5))), ((max(95, var_7)))));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_26 = -34;
                    var_27 *= ((-(arr_5 [i_0 - 1])));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_28 -= (arr_11 [i_0] [i_1] [i_3] [i_4 - 1]);
                                arr_14 [i_0] [i_1] [i_3] [i_4] [i_0] = (arr_12 [i_0] [i_1] [i_0] [i_0] [i_5]);
                            }
                        }
                    }
                    var_29 = (((225 ? (((arr_11 [i_0] [i_1] [i_3] [i_3]) ? (arr_11 [i_0] [i_1] [i_3] [i_0]) : var_0)) : (arr_13 [i_0] [i_1] [i_0] [i_1] [i_3]))));
                }
            }
        }
    }

    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        var_30 = (((((arr_16 [i_6] [i_6 - 1]) / (arr_16 [i_6 - 1] [i_6 - 1]))) >> (((((arr_17 [i_6 - 1]) ? (arr_17 [i_6]) : (arr_16 [i_6] [i_6 - 1]))) + 39))));
        var_31 = 81;
    }
    var_32 |= (max(60344, -47));
    #pragma endscop
}
