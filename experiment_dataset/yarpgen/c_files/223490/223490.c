/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 -= min((((((var_2 ? var_16 : (arr_1 [i_0] [i_1])))) ? (max(6276373410710682887, 54)) : (((max((arr_2 [i_1]), (arr_3 [17]))))))), ((((((arr_4 [i_1]) << (((arr_3 [i_1]) - 52539)))) << ((6276373410710682903 ? var_5 : 54))))));
                var_21 = (((max((((arr_2 [i_1]) ? (arr_2 [18]) : (arr_2 [i_1]))), ((65535 ? (arr_4 [i_1]) : var_7))))) && ((max((((arr_0 [i_0] [1]) ? (arr_2 [18]) : 200)), (arr_2 [i_0 - 1])))));
                var_22 = (min(var_22, (((1 ? -127 : 1)))));
            }
        }
    }
    var_23 = var_16;
    var_24 = var_18;

    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        var_25 = ((1 ? 142 : 205));
        arr_9 [i_2] = -68;
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_26 = (min(var_26, ((((min((arr_3 [i_3 + 1]), (arr_3 [i_3 - 1])))) != (~0)))));

        for (int i_4 = 4; i_4 < 12;i_4 += 1)
        {
            var_27 = -164;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_19 [i_3] = (i_3 % 2 == 0) ? ((((min((((((arr_12 [i_3]) + 2147483647)) << (var_0 - 1330553319))), ((-(arr_12 [i_3]))))) <= (((-4500207551128356607 == (arr_2 [3]))))))) : ((((min((((((((arr_12 [i_3]) - 2147483647)) + 2147483647)) << (var_0 - 1330553319))), ((-(arr_12 [i_3]))))) <= (((-4500207551128356607 == (arr_2 [3])))))));
                        var_28 = (min(var_28, (((((max(7939, (((arr_16 [i_3] [i_4] [i_5] [i_6]) ? 146603166 : (arr_3 [i_6])))))) ? ((((arr_1 [i_3 + 1] [i_3 + 2]) | (arr_16 [i_3 + 1] [i_4 - 3] [i_4] [0])))) : ((18577 ? (0 >> var_12) : (arr_14 [i_3 + 3] [i_4 - 2]))))))));
                        arr_20 [i_3] [i_3] [i_5] [i_6] [i_6] [i_6] = 0;
                    }
                }
            }
            arr_21 [i_3] [i_3] [i_4] = (arr_11 [i_3] [0]);
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            var_29 += (((((979189627 | (((arr_10 [13]) + (arr_4 [i_7])))))) ? (!-1321634395) : (var_13 ^ 27)));
            var_30 = (min(var_30, ((var_15 != (min((arr_1 [i_3] [i_7]), (arr_22 [i_3 + 1])))))));
        }
        var_31 = 14615;
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    {
                        var_32 = (min(var_32, (((-(var_18 >> var_13))))));
                        var_33 = (min(var_33, var_4));
                        var_34 = (min(var_34, ((((arr_1 [i_9] [i_10]) <= (((203 | 57) ^ (max((arr_25 [6] [i_8]), (arr_0 [17] [i_9]))))))))));
                        arr_30 [i_3] [i_8] [7] [i_10] = ((1 + (((arr_10 [i_8]) * var_17))));
                    }
                }
            }
        }
    }
    for (int i_11 = 1; i_11 < 11;i_11 += 1) /* same iter space */
    {
        var_35 = (((((~(~6)))) && (((((((arr_24 [i_11 + 2] [6] [i_11]) ? 24931 : (arr_12 [6])))) + ((375 ? var_1 : (arr_15 [11]))))))));
        var_36 = (min(var_36, ((max((~176), ((-146603185 - (((!(arr_11 [4] [i_11])))))))))));
        var_37 = 1;
    }
    var_38 = (-9223372036854775807 - 1);
    #pragma endscop
}
