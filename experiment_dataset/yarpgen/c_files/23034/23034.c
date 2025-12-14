/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = 4294967295;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 = min((max((arr_14 [i_1] [i_0] [i_2] [9]), ((((-119 + 2147483647) << (((-27 + 47) - 20))))))), ((min(15831, (arr_10 [i_0] [i_0] [i_3] [i_3] [i_4] [i_4])))));
                                var_14 = (max(var_14, -var_0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = var_1;

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 7;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        arr_27 [i_5] [i_6] [i_5] = ((-((+((-15831 ? (arr_20 [i_5] [i_6]) : var_2))))));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_16 = 32767;
                            var_17 = (((((arr_10 [i_5] [i_5] [i_8] [i_5] [i_5] [i_5]) ? -2111046411607446884 : 255)) ^ (((5594810600856998011 ? var_7 : var_2)))));
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_18 = ((~((max((min(18832, 54)), (-2111046411607446897 != 0))))));
                            arr_33 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (max((max((~127), ((4294967279 ? 0 : 5594810600856998011)))), (max((~2232634649923206197), (((-4132984142947196117 ? 1 : 4294967284)))))));
                            arr_34 [i_5] [i_6] [i_5] [i_5] = -2111046411607446920;
                        }
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            var_19 = ((max(var_0, (~2379205336))));
                            var_20 = (max((arr_19 [0] [i_7 + 2] [i_7 + 1]), ((1 >> (1984 - 1984)))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 8;i_13 += 1)
            {
                {
                    var_21 = ((+(((arr_9 [i_5] [14] [i_5]) ? 4294967291 : 246))));
                    arr_42 [i_5] [i_5] [9] [i_13] = var_9;
                    var_22 = (max((((0 ? (arr_19 [i_13 - 1] [i_13 + 1] [i_13 + 1]) : (arr_19 [i_13 + 2] [i_13 - 1] [i_13 + 2])))), 2111046411607446875));
                    arr_43 [i_5] [i_5] = (min((((arr_30 [i_5] [i_5] [i_5] [i_13] [i_5] [i_13 + 1]) >= 2111046411607446861)), (((arr_30 [i_13] [i_5] [i_13 + 2] [i_13 + 2] [i_5] [i_13 + 1]) != (arr_30 [i_13] [i_5] [i_13] [i_13 - 1] [i_5] [i_13 + 1])))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    {
                        var_23 = (max(((((arr_51 [i_5] [i_5]) || 39459))), 2));
                        var_24 = (min((((min((arr_2 [i_5]), var_9)) * (((((arr_21 [i_5] [i_14]) < 0)))))), -15849));
                        var_25 = (max(var_25, ((max(9223372036854775805, 0)))));
                    }
                }
            }
        }
        var_26 = (((min((250 || var_11), (229 || 25))) || (((((65535 ? var_7 : 5))) || (!0)))));
        var_27 = var_8;
    }
    for (int i_17 = 0; i_17 < 22;i_17 += 1)
    {
        var_28 = (min((((arr_13 [i_17] [i_17] [i_17] [i_17] [i_17]) ? -7 : 2147483136)), var_1));
        arr_54 [i_17] = (max(9223372036854775794, (arr_8 [i_17] [i_17] [i_17])));
    }
    #pragma endscop
}
