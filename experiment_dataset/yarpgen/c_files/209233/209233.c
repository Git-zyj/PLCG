/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (var_13 ? var_2 : (~1));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (max((((arr_2 [i_0]) ? (((2074407663 ? 1 : var_14))) : 2220559632)), 2074407663));
        var_22 = arr_2 [i_0];
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_23 = ((-(arr_4 [i_1] [i_1])));
        arr_6 [i_1] [i_1] = var_10;

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_24 *= (((arr_8 [i_3] [i_3]) ? ((((arr_8 [i_1 - 1] [i_1 - 1]) || 2220559627))) : 1));
                        var_25 = (((((~(((arr_10 [i_1] [i_4]) ? (arr_13 [i_1] [i_1] [i_4] [i_4] [i_4] [i_4]) : var_6))))) && (arr_9 [i_1])));

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_26 -= (max(0, (((arr_12 [i_1] [i_1 - 1] [i_3] [1]) * 1))));
                            var_27 = ((((min((((16 && (arr_1 [i_4])))), var_16))) + ((min(1, var_4)))));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            arr_18 [i_1] [i_1] [i_3] [i_4] [i_4] = (((arr_10 [4] [i_1 - 1]) >= ((max((arr_12 [i_4] [i_4] [i_2] [i_1]), (arr_7 [i_1 - 1] [i_1 - 1]))))));
                            var_28 = (i_4 % 2 == 0) ? ((((arr_2 [i_4]) << (((((arr_1 [i_4]) ? (arr_1 [i_4]) : 1)) - 32223))))) : ((((arr_2 [i_4]) << (((((((arr_1 [i_4]) ? (arr_1 [i_4]) : 1)) - 32223)) + 24581)))));
                            var_29 = (((((max((arr_1 [i_4]), (arr_1 [i_4]))))) - (min(var_15, 2074407669))));
                            var_30 = var_12;
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_31 = (((arr_0 [i_1 - 1]) ? (((arr_2 [i_4]) ? var_0 : ((max(var_4, (arr_15 [i_3] [i_1])))))) : 1));
                            arr_21 [i_1] [i_1] [6] [i_4] [i_1] = var_9;
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_32 = (arr_5 [i_1] [i_2]);
                            var_33 = (max(var_33, (((((((arr_19 [i_1 - 1]) ? (arr_5 [i_1 - 1] [i_1 - 1]) : (arr_19 [i_1 - 1])))) ? (((arr_14 [4] [i_2] [i_3] [i_3] [i_4] [i_8]) ? (arr_2 [2]) : (((arr_8 [i_1] [i_1]) * (arr_0 [i_8]))))) : ((max(1, (((arr_13 [i_1] [i_2] [2] [i_4] [i_8] [i_8]) ? 22536 : var_6))))))))));
                        }
                    }
                }
            }
            var_34 = (arr_9 [i_2]);
            var_35 = 32767;
            var_36 &= (((arr_16 [i_2] [i_2] [i_1] [i_1] [i_1]) + (max((((arr_10 [i_1] [i_2]) ? (arr_13 [i_1] [i_1 - 1] [1] [i_1 - 1] [i_1 - 1] [1]) : var_19)), (!var_4)))));
        }
    }
    for (int i_9 = 1; i_9 < 16;i_9 += 1)
    {
        var_37 = (max(var_37, var_2));
        var_38 = (min(var_38, var_10));
        var_39 = (1 - 127);
    }
    for (int i_10 = 2; i_10 < 12;i_10 += 1)
    {
        arr_30 [i_10] = arr_25 [16];

        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            var_40 = 1;
            var_41 += (arr_31 [i_10 - 1] [i_10] [i_10]);
            var_42 = (((!var_4) ? (arr_29 [i_11]) : ((var_19 ? 1 : ((var_8 ? (arr_26 [i_10]) : 0))))));
            var_43 = (arr_33 [i_10] [i_10]);
        }
    }
    var_44 = var_11;
    #pragma endscop
}
