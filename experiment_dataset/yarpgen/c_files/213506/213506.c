/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = (min(var_15, ((min((min((max(26399, -9223372036854775781)), var_0)), var_4)))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_16 = (min((-5107869048473797388 | var_1), ((((-108 + 2147483647) >> (arr_0 [i_0 + 1] [i_0 + 1]))))));
        var_17 *= 0;
        var_18 = (max(var_18, ((min(var_0, ((((0 ? -5107869048473797388 : var_0)) >> (0 & 5))))))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        var_19 ^= (max(735020834, 108));
                        arr_11 [i_1] [i_1] [i_3] [i_4] = (min(((((arr_4 [i_1] [i_2 - 1] [i_3]) && (((arr_10 [i_1] [i_1] [2]) || -5107869048473797388))))), 0));
                    }
                }
            }
        }
        var_20 ^= (min(((((((min(var_12, var_0)))) >= 0))), 65535));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                {
                    var_21 -= 0;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((min((((4 ? var_6 : 65535))), ((min(var_3, (0 ^ 1)))))))));
                                arr_23 [i_1 + 1] [11] [i_1 + 1] [i_1] [i_8] = ((~((-5107869048473797388 ? 44 : 1))));
                                var_23 = (max(var_23, (max((arr_2 [i_5] [i_7]), (0 <= var_6)))));
                            }
                        }
                    }
                    var_24 = (min(var_24, ((min(-7999574429216849852, (((arr_16 [i_1 + 1] [i_1 + 1] [i_5] [i_5 + 1]) >> (((arr_16 [i_1] [i_1 + 1] [i_5] [i_5 - 1]) - 116)))))))));
                }
            }
        }
        arr_24 [i_1] = ((((((0 ? 1 : (arr_13 [i_1 + 1] [i_1] [i_1]))) < ((((arr_2 [i_1 + 1] [i_1]) >= 255))))) && 65535));
    }
    for (int i_9 = 0; i_9 < 0;i_9 += 1) /* same iter space */
    {
        var_25 = 0;
        var_26 = (min(var_26, (((((min(2444017443661388622, (arr_5 [6])))) || (((arr_5 [0]) && var_1)))))));
        arr_27 [i_9] [i_9] = 72057576858058752;
    }
    for (int i_10 = 2; i_10 < 7;i_10 += 1)
    {
        arr_32 [i_10] [i_10] = ((((((arr_22 [i_10 + 2] [i_10 + 2] [8] [16] [8]) <= (arr_22 [i_10 + 3] [0] [8] [i_10] [i_10]))))) < ((~(arr_22 [i_10 + 1] [i_10] [1] [i_10] [i_10]))));
        var_27 = (max((((~(arr_25 [15])))), (max(-735020834, (max((arr_26 [i_10]), (arr_29 [i_10 + 1])))))));
        var_28 = ((arr_19 [8] [i_10] [1] [i_10 - 2] [0]) && (arr_10 [i_10] [i_10 + 2] [i_10 + 3]));
    }
    var_29 = var_13;
    #pragma endscop
}
