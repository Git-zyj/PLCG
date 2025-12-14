/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_16 *= ((!(((~(arr_0 [i_1 - 1]))))));

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    var_17 = ((((var_10 ? 34 : 35))));
                    var_18 = var_7;
                    arr_6 [i_0] [i_2 - 1] = ((-var_1 ? (arr_3 [i_0] [i_1 - 1] [i_2]) : ((52 ? -12505 : 35))));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {

                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_19 = (((((min(235, 225)))) < ((max(0, var_10)))));
                            var_20 = (((arr_12 [15] [i_1 + 1] [i_3] [i_3] [i_4] [i_5]) ? (((var_11 ? 226 : var_2))) : ((((((-9223372036854775807 - 1) / 10715))) ? (var_0 == var_2) : (max(var_5, (arr_10 [i_0])))))));
                            arr_14 [i_0 - 3] [i_1] [i_1] [1] [i_4] = ((min(73, (arr_12 [i_5] [i_4 - 2] [i_3] [12] [i_1] [i_0 + 1]))));
                            var_21 = (((((73 ? 2793 : (arr_10 [i_0 + 2])))) || ((127 && (arr_13 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 2] [i_0 - 3])))));
                            var_22 = (((((var_14 ? (arr_5 [i_0 + 2]) : (arr_8 [i_1] [i_1 + 1] [i_1] [i_4 + 4])))) ? (21 / 36) : (((arr_5 [i_0 + 1]) ? (arr_5 [i_0 - 3]) : 80))));
                        }
                        var_23 = (min(var_23, var_13));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_24 = (min(var_24, ((((!42) ? var_4 : (min((arr_13 [i_0 + 1] [i_1 + 1] [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 1] [i_6]), var_14)))))));
                        var_25 = (((~-12492) > (min(((((arr_5 [i_1]) != var_0))), ((229 ? (arr_10 [i_0]) : var_5))))));
                    }
                    var_26 = (max(var_26, var_8));
                    arr_18 [i_3] [i_1] [1] = ((((arr_8 [12] [i_1] [i_3] [i_3]) ? ((min(1600, var_1))) : var_1)));
                }
            }
        }
    }

    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {
        var_27 = (min(var_27, (((-((-(arr_10 [i_7 + 2]))))))));
        var_28 = 12498;
        var_29 = ((10 ? 1 : 1));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                {
                    var_30 = var_14;

                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_31 = ((((min(((1604 ? 1276732031995775393 : (arr_10 [4]))), (arr_23 [i_9 + 1] [i_9 + 2])))) ? ((~(((arr_3 [i_7] [i_8] [16]) ? 15385850876064172656 : 155)))) : ((((arr_4 [i_9] [i_9 + 1] [19]) & (arr_4 [i_9] [i_9 - 1] [13]))))));
                        var_32 = 63938;
                    }
                }
            }
        }
        var_33 = 12502;
    }
    var_34 += (~-var_3);
    #pragma endscop
}
