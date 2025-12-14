/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_10;
                var_11 = (((((-6904722612258975241 ? -2147483644 : ((0 ? 176 : 0))))) ? ((((min(242393056, 6904722612258975243))) ? ((var_7 ? var_10 : var_3)) : (((0 ? var_0 : 33069))))) : var_7));
                arr_6 [i_0] [i_0] [i_1] = (((-67 ? ((-4520535826879577652 ? -15237 : 13)) : 123)));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [13] = 60;

                            for (int i_4 = 2; i_4 < 13;i_4 += 1)
                            {
                                arr_16 [i_2 - 2] = var_5;
                                arr_17 [i_4] [i_1] [4] [i_0] [i_1] [i_0] = ((-2147483623 ? -4492 : (((min(-7845, 239))))));
                            }
                            for (int i_5 = 0; i_5 < 15;i_5 += 1)
                            {
                                arr_20 [i_1] [7] [i_1] [i_1] [i_1 - 2] [i_1] = -4;
                                arr_21 [i_0] [i_0] [i_0] = ((var_8 ? 103 : (min((min(var_8, var_0)), 10953))));
                                arr_22 [i_3] [i_5] = (((((4520535826879577667 ? ((max(175, var_9))) : var_4))) ? (((var_4 ? -4863 : var_5))) : (((((var_1 ? 13 : 0))) ? (max(var_3, 1537)) : (min(var_5, var_8))))));
                                var_12 = ((var_1 ? -32767 : ((3931536627 ? 29200 : 18878))));
                            }
                            for (int i_6 = 0; i_6 < 15;i_6 += 1)
                            {
                                var_13 = ((((((242 ? 1 : var_7)))) ? 224 : 13853));
                                arr_27 [i_6] [i_1 + 2] [i_1] [i_2 - 1] [6] [i_3] [i_6] = ((((((((var_7 ? var_9 : 22507))) ? ((0 ? var_3 : var_0)) : (((867054633 ? 40395 : var_10)))))) ? ((((var_5 ? var_5 : 40395)))) : ((91132762468780929 ? (max(var_3, var_6)) : (max(var_5, 867054651))))));
                                arr_28 [i_6] [i_1] [i_2 - 2] [i_3] [i_6] = var_1;
                                var_14 = (min((min(var_0, 4520535826879577667)), ((191 ? 233 : 18078))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 15;i_7 += 1)
                            {
                                var_15 = 49013;
                                var_16 = var_3;
                            }
                            arr_31 [i_0] [i_3] [i_2] [i_3] = 59074;
                        }
                    }
                }
            }
        }
    }
    var_17 = (((((var_1 ? (((var_6 ? -1691150667 : var_0))) : (-9223372036854775807 - 1)))) ? ((((((-109 ? var_9 : 22507))) ? ((max(var_6, var_7))) : ((-9223372036854775794 ? 207 : var_9))))) : (((-9223372036854775807 - 1) ? var_7 : ((var_8 ? var_5 : 13211))))));
    #pragma endscop
}
