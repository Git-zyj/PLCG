/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = var_11;
                var_18 = max(((max(14, 7))), (max(23578, 1)));
                arr_5 [1] [i_0] [i_0] = (max(((29 >> (70 - 66))), ((((max(3666561714, var_7))) ? 6703 : -1))));
                arr_6 [i_0] = var_16;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_10 [i_2] [i_0] [i_0] [i_0] = var_11;
                    var_19 = ((var_10 ? 628405574 : (-14871 && 628405594)));
                    arr_11 [i_0] [i_0] [i_0] = ((1 ? var_1 : 1));

                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        var_20 = var_10;

                        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] = ((3865594297 ? (~1) : ((var_12 ? 3666561729 : var_4))));
                            arr_20 [i_0] [i_1] [i_0] [i_3] [24] [i_1] = (((arr_8 [i_0] [i_3 + 1] [i_0] [19]) ? 0 : (arr_8 [i_3] [i_3 + 1] [i_3] [4])));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                        {
                            var_21 = 22;
                            arr_24 [i_0] [i_5] [i_5] [i_5] [i_5] = -1;
                            arr_25 [i_5] [i_0] [22] [i_2] [i_0] [i_0] = ((arr_15 [i_0] [i_3 + 1] [i_2] [i_3 + 1] [i_0]) ? (arr_15 [i_0] [i_3 + 1] [i_2] [1] [i_5]) : (arr_15 [i_0] [i_3 + 1] [i_0] [i_3] [i_3]));
                            arr_26 [i_1] [i_1] [i_1] [i_1] [i_0] = var_15;
                        }
                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            var_22 = ((12979890882112363854 ? (((4294967295 ? 628405581 : 8388604))) : (arr_21 [i_3 - 1] [i_0] [i_3] [i_3 - 1] [i_6 - 2])));
                            var_23 = (((-9223372036854775807 - 1) ? (((0 ? (arr_18 [i_0] [i_1] [i_0] [17]) : 1))) : 3666561696));
                        }
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        arr_31 [16] [i_0] [i_0] [i_0] = ((((0 ? 6430456144562793759 : var_13)) ^ var_1));
                        arr_32 [i_0] [i_0] = (((~6703) ? var_16 : (arr_7 [i_7] [i_1] [i_0])));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_35 [i_0] [i_2] [i_0] = (((((2915928180 ? 4649137438607279084 : 29110))) ? ((var_0 ? var_1 : var_7)) : var_7));
                        arr_36 [i_0] = var_14;
                        arr_37 [i_0] [i_0] [i_0] [i_0] = var_7;
                    }
                    var_24 = (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    var_25 = 11428;

                    for (int i_10 = 1; i_10 < 24;i_10 += 1)
                    {
                        arr_43 [i_0] [i_1] [0] [i_10] = ((((var_7 ? 3 : var_13)) < -1142513745200008355));
                        arr_44 [i_0] [i_1] = (((-127 - 1) ? 11880615540344031725 : 1232375795));
                        var_26 = ((((((arr_4 [20] [i_1] [12]) ? var_14 : 628405586))) ? var_5 : var_16));
                    }
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        arr_47 [i_0] [i_0] [18] = var_6;
                        var_27 = ((-(arr_3 [i_0] [i_1] [i_9])));
                        arr_48 [i_0] [i_9] [i_0] [i_0] [i_1] [13] = ((arr_4 [i_0] [i_0] [i_0]) ? 9223372036854775807 : 17);
                    }
                }
                /* vectorizable */
                for (int i_12 = 1; i_12 < 24;i_12 += 1)
                {
                    arr_52 [i_0] [i_0] = 18446744073709551613;
                    arr_53 [i_0] [i_0] [i_12] = 166;
                    arr_54 [i_0] [i_0] [i_0] = 5209;
                }
            }
        }
    }
    var_28 = var_5;
    var_29 = var_7;
    #pragma endscop
}
