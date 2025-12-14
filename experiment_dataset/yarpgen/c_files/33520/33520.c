/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_3] = ((((((((18446744073709551587 >= (arr_0 [i_1] [i_2]))))) - ((-6 ? 42610 : 2266770500022103572)))) == (arr_1 [i_2])));
                            var_16 = (((((-(arr_8 [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_3])))) ? ((9886694697195110196 ? 432345564227567616 : -29)) : (((18446744073709551614 - 4294967295) % var_9))));
                            arr_11 [i_0] [i_3] [i_3] [i_0] = var_15;
                            arr_12 [i_1] |= ((~((var_2 - (var_9 % 115)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_17 |= ((-((((var_9 ? (arr_8 [i_0] [i_1] [i_1] [i_4] [i_4] [i_5 + 2]) : var_1)) - var_14))));
                            var_18 *= ((((((var_10 ? -29 : var_1))) ? (max(var_3, 32757)) : 1)) - ((var_9 ? (arr_1 [4]) : (((-16113 ? -478400385934949834 : -28276))))));
                            arr_19 [i_5] [i_5] [i_5] [i_5] = (arr_18 [i_5] [i_1] [14] [i_1] [i_5]);
                        }
                    }
                }
                var_19 += 3;
            }
        }
    }
    var_20 = (((((var_7 ? 802311017 : 0))) - ((((-64 >= -1) ? (var_10 != var_7) : var_14)))));
    var_21 -= ((~(((!(((-3371 ? var_5 : var_11))))))));
    #pragma endscop
}
