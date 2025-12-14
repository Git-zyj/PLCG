/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (max((arr_3 [i_1] [i_0]), ((var_5 ? var_15 : (arr_0 [i_0])))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        var_19 = ((17094 ? 17094 : 48429));
                        var_20 -= var_2;
                        var_21 = (arr_9 [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_3 - 1]);
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_22 = ((var_0 ? (arr_3 [i_0] [i_1]) : var_15));
                        var_23 = (48442 ? 48442 : 17110);
                        var_24 = (max(var_24, (((arr_6 [i_0]) ? (arr_4 [i_0] [i_1] [i_4]) : var_0))));
                        var_25 = (var_17 ? var_7 : (arr_7 [i_0] [2] [i_2]));
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_26 = (((arr_1 [i_6] [i_2]) ? var_7 : (arr_1 [i_6] [i_5])));
                            var_27 = ((((var_8 ? var_9 : var_1))) ? (arr_20 [i_6] [i_6] [i_5] [i_2] [6] [i_0] [i_0]) : (arr_3 [i_0] [i_0]));
                            var_28 = (((arr_6 [i_0]) ? (arr_16 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6]) : ((var_7 ? (arr_7 [i_0] [i_2] [i_2]) : var_5))));
                            var_29 = (((arr_8 [i_0] [i_1] [i_2]) ? (arr_12 [i_1] [i_1] [i_2] [i_5] [i_1]) : var_13));
                        }
                        var_30 = (arr_13 [i_1]);
                        arr_21 [i_0] [i_1] [i_2] [i_2] = ((var_6 ? (arr_9 [i_0] [i_1] [i_2] [i_5]) : (arr_14 [i_0] [i_1] [i_2] [i_5])));
                        var_31 = (((arr_3 [i_0] [i_5]) ? var_7 : var_4));
                        var_32 &= var_13;
                    }
                    var_33 = (arr_11 [i_0] [6] [i_1] [i_1] [2]);
                    var_34 = (((arr_14 [i_0] [i_0] [i_0] [i_0]) ? (arr_11 [0] [0] [i_2] [i_2] [i_2]) : (arr_14 [i_2] [i_2] [i_1] [i_0])));
                    var_35 = (arr_11 [i_0] [i_0] [i_1] [i_2] [0]);
                }
                var_36 = (arr_3 [i_1] [i_0]);
            }
        }
    }
    var_37 = var_17;
    #pragma endscop
}
