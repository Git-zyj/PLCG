/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_1] = var_4;
                    var_18 = (max(var_18, ((((((9223372036854775807 + (arr_4 [i_0])))) ? 618161039 : 64)))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_14 [i_1] [i_1] [i_1] [i_3] = (((var_5 > -100) ? 2147483647 : ((max(-80, 46)))));
                            var_19 = var_5;
                            arr_15 [18] [i_1] [i_1] [i_1] [i_1] = (arr_0 [i_0]);
                        }
                        for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_2] [i_0] [i_1] = var_17;
                            var_20 -= min(-54, ((var_15 >> ((((-100 ? (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2]) : var_5)) - 15690964645221049632)))));
                        }
                        for (int i_6 = 3; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_3] [i_1] [i_3] [i_3] [i_3] [i_3] = ((!(arr_12 [i_0] [i_0] [i_0])));
                            arr_23 [i_0] [i_0] [i_0] [i_2] [i_3] [i_1] [i_6] = (i_1 % 2 == zero) ? ((((((arr_16 [i_6 - 1] [i_6 - 1] [i_1] [i_1]) >> ((((max(var_9, (arr_21 [i_6] [i_6 - 3] [i_6] [i_1] [i_6])))) + 11107)))) & (((~(-139 % 32754))))))) : ((((((arr_16 [i_6 - 1] [i_6 - 1] [i_1] [i_1]) >> ((((((max(var_9, (arr_21 [i_6] [i_6 - 3] [i_6] [i_1] [i_6])))) + 11107)) - 38836)))) & (((~(-139 % 32754)))))));
                            var_21 = (10933 / 185);
                        }
                        arr_24 [i_0] [i_0] [i_0] [i_1] = (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_7] [i_7] [i_7] [i_7] [i_1] = -105;
                        arr_28 [i_0] [i_0] [i_1] [i_0] [i_0] = (min(var_7, (min((arr_18 [i_0] [i_1 - 1] [i_2] [i_1] [i_1 - 1]), var_17))));
                    }
                }
                var_22 = (min(var_22, (arr_11 [i_0] [i_0] [i_0] [i_0])));
            }
        }
    }
    var_23 = ((((~(~var_2)))) ? (max(((var_9 ? var_13 : var_10)), ((var_10 ? var_15 : var_4)))) : (min(((max(var_10, var_10))), ((10933 ? 46 : 18446744073709551612)))));

    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_24 = var_11;
        arr_32 [i_8] [i_8] |= (((((((arr_25 [i_8] [i_8] [i_8] [i_8] [i_8]) ? (arr_30 [i_8] [i_8]) : (arr_4 [i_8])))) ? (min((arr_12 [i_8] [i_8] [i_8]), var_9)) : 1395740888)));
        var_25 = (max(var_25, (((~(20014 == 178))))));
    }
    for (int i_9 = 1; i_9 < 24;i_9 += 1)
    {
        var_26 = (arr_33 [i_9 - 1] [i_9 - 1]);
        arr_35 [i_9] [i_9] = var_10;
        arr_36 [i_9] = (arr_33 [i_9 + 1] [i_9 + 1]);
        arr_37 [i_9] = ((((arr_34 [i_9 + 1]) & (var_11 > var_14))));
    }
    var_27 = (max(var_27, var_16));
    #pragma endscop
}
