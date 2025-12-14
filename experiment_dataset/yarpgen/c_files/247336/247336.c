/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 18446744073709551600;
    var_17 = (var_0 <= var_2);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = (((((26 ? 18446744073709551605 : -32051))) ? (min((4517750475179365303 != 112), 4276720957)) : (((((~-88) && 32))))));
                arr_4 [i_0] [i_0] = -623350442828889122;

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_0] [i_0 + 2] [i_0] [i_0 + 2] = var_8;
                    arr_10 [i_0] [i_0] [i_0] = 18446744073709551599;
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    arr_13 [i_0] [i_0] [i_3] = (((((min((arr_11 [11] [i_0] [i_0] [i_0]), var_6)))) ? (arr_1 [i_0]) : (((arr_12 [i_0] [i_0 - 3]) ? (min(2074210436, 32759)) : (!117)))));
                    var_19 *= (((min((max(6821552769623610275, var_3)), 18142958916431217231)) >= ((((!(arr_11 [i_0] [i_3] [2] [i_1])))))));
                    var_20 = (arr_8 [i_0] [i_0] [i_3]);
                    arr_14 [i_0] [i_0] [i_0 - 1] [i_0 + 2] = var_3;
                }
                arr_15 [i_0] = (i_0 % 2 == zero) ? (min((((arr_3 [i_0] [i_1] [i_0]) ? (arr_8 [i_0] [i_0] [i_0]) : ((141 ? 17 : var_1)))), (max((((46348 << (((arr_3 [i_0] [i_0] [i_0]) + 599529062))))), (arr_7 [i_0] [i_0] [i_0]))))) : (min((((arr_3 [i_0] [i_1] [i_0]) ? (arr_8 [i_0] [i_0] [i_0]) : ((141 ? 17 : var_1)))), (max((((46348 << (((((arr_3 [i_0] [i_0] [i_0]) + 599529062)) - 241935283))))), (arr_7 [i_0] [i_0] [i_0])))));
            }
        }
    }
    var_21 = var_6;
    #pragma endscop
}
