/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((!((max(9223372036854775807, -1)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        var_21 = ((127 ? 149 : -1));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_16 [i_4] [i_4] [i_3] [i_3] [i_0] = -4456218719558546925;
                            var_22 = (1 != 415807853553580562);
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_23 = (max(var_23, (((!(-9223372036854775807 - 1))))));
                            var_24 = (arr_8 [i_3 - 1] [i_0]);
                            var_25 = var_1;
                            arr_19 [i_0 - 1] [2] [i_2] [i_3 - 2] [i_0] = ((var_7 ? (arr_5 [i_0] [i_0]) : (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [10] [i_0 + 1])));
                            var_26 += var_8;
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_27 = (arr_20 [i_0] [i_1] [i_6] [i_3] [i_6] [i_0 + 1]);
                            var_28 = 3023058151566353052;
                        }
                        arr_22 [i_0] = -15672529918829690722;
                        arr_23 [i_0] [i_1] [i_0] = var_15;
                    }
                }
            }
        }
        var_29 = (~4);
    }
    for (int i_7 = 3; i_7 < 13;i_7 += 1)
    {
        var_30 &= (510576568 != 120);
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 12;i_10 += 1)
                {
                    {

                        for (int i_11 = 1; i_11 < 13;i_11 += 1)
                        {
                            var_31 = (min(var_31, var_5));
                            arr_34 [5] [i_7] [i_7] [i_10] [i_7] = 1151795604700004352;
                        }
                        var_32 = -2164331164049956657;
                        var_33 = var_12;
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                {
                    arr_44 [i_12] [i_13] [i_12] [i_12] = (!120);
                    var_34 = ((-510576569 ? -8947178199813697484 : 4294967293));
                }
            }
        }
        var_35 = (~18446744073709551599);
    }
    var_36 = (-671897266745549001 / -1151795604700004352);
    var_37 = (min((!var_9), var_19));
    var_38 = (min(var_38, (16261159820589389179 ^ -510576599)));
    #pragma endscop
}
