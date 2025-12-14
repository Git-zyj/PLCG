/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((~(~var_5)))));
    var_11 = ((~(max((((-1601436281 ? var_9 : -2026051742))), (~var_8)))));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_12 = ((~(((arr_2 [i_0]) ? (!var_6) : (((!(arr_0 [i_0]))))))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_13 ^= ((((((((arr_14 [i_0 + 1] [12]) ? var_1 : var_8)) & ((var_4 ? var_0 : -11251))))) ? ((((max(8333, (arr_6 [1] [20] [6])))) ? (((!(arr_14 [i_1] [6])))) : var_4)) : ((((2026051741 >= (arr_1 [i_3])))))));
                            var_14 = ((~(arr_5 [i_0] [3] [i_2])));
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                arr_19 [i_5] [i_1] [1] = (((((~(((arr_7 [17]) ? (arr_14 [i_5] [i_0 - 3]) : (arr_8 [i_0] [i_1] [i_0])))))) ? (((-(max((arr_15 [i_1] [i_5]), (arr_9 [15] [i_1] [i_1] [i_1])))))) : ((((var_7 ? (arr_7 [i_0]) : var_8)) * (arr_8 [0] [i_1] [i_0])))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_26 [3] [i_1] [i_5] [i_5] [i_5] [i_1] = ((max(((min(211, (arr_1 [i_6])))), ((-2026051741 ? var_9 : var_2)))));
                            var_15 = ((!(((-((var_2 ? var_5 : var_2)))))));
                        }
                    }
                }
                arr_27 [i_5] [i_5] = (((((((max((arr_23 [i_0] [i_1] [i_1] [i_1] [i_5] [i_5]), -8355))) ? (~var_9) : -var_5))) ? ((-var_6 ? -255 : (arr_15 [i_1] [i_1]))) : (((((arr_24 [i_0] [i_5] [i_0]) ? (arr_1 [i_0]) : var_9))))));
            }
        }

        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            var_16 = ((~(((arr_2 [i_0 - 2]) ? (!var_8) : ((var_1 ? 55 : 406818903))))));
            var_17 = (min(var_17, (((((((var_6 ? var_9 : 201)))) ? (((!(((var_7 ? var_9 : 201)))))) : ((((25511 ? (arr_15 [i_8] [17]) : (arr_7 [i_8]))))))))));
        }
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        var_18 = (min(var_18, (((((2026051764 ? var_2 : var_6) | ((var_7 ? var_3 : 184))))))));
        arr_34 [i_9] = (max((max(((var_1 - (arr_10 [i_9]))), ((~(arr_29 [i_9] [1] [i_9]))))), ((max(var_8, var_2)))));
        var_19 = (((((((!(arr_32 [i_9] [i_9]))) ? ((var_5 ? 4294967293 : (arr_22 [i_9] [i_9] [i_9] [i_9] [18] [i_9] [15]))) : (max((arr_31 [i_9]), var_5))))) ? (max((((var_9 ? -991528509 : 71))), -var_0)) : ((((!((!(arr_8 [i_9] [i_9] [i_9])))))))));
    }
    #pragma endscop
}
