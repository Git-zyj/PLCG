/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_9));
    var_19 = (min(var_19, ((var_6 && ((((-13 && var_15) ? (max(var_6, var_12)) : ((var_3 ? var_12 : var_12)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_7 [i_0] [3] [i_0] = (((((-(!-13)))) ? ((((~var_17) ? (((-13 + 2147483647) << (var_3 - 1894543678))) : ((~(arr_6 [i_0] [4] [4] [7])))))) : ((((((arr_0 [i_1]) << (-12 + 32)))) ? (((min(var_0, (arr_1 [i_0]))))) : var_17))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_20 = ((max(-1, -41)));
                                var_21 = ((((max(-4002665162427912732, (arr_5 [i_0] [i_1] [0] [i_3])))) || (((~((30210 ? 12 : 11)))))));
                            }
                        }
                    }

                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        var_22 = (((-12 == -32748) || (602477941 > -1)));

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_23 = (min((!var_4), (max(2233939072, 31206))));
                            arr_18 [i_5] [i_1] = -381539609;
                            var_24 = (2561322178 & 4066999285817250930);
                            var_25 = (var_2 != 3692489360);
                        }
                        arr_19 [i_0] [i_0] [i_2 + 1] [8] |= 79;
                    }
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        var_26 -= ((-8087197939908722950 < 15) ? ((var_3 ? -644321269 : 166)) : ((((arr_8 [i_7 - 1] [i_0] [i_0] [i_2 + 1]) || -25))));
                        var_27 = (min(var_27, ((min((((((((arr_0 [i_0]) != (-9223372036854775807 - 1)))) != ((~(arr_5 [i_0] [0] [2] [i_7])))))), 103831577)))));
                        arr_23 [i_7] [i_7] [i_7] = (((arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (max(-25, 4066999285817250931)) : ((min((arr_17 [i_0] [i_1] [i_2] [i_1] [i_0]), (((var_10 + 2147483647) << (((-111 + 138) - 27)))))))));
                        arr_24 [i_0] [i_0] [i_0] [i_0] &= (((arr_16 [i_7] [i_7] [i_7] [1] [i_2] [1]) ? (((35 & (-9223372036854775807 - 1)))) : (max(var_17, (arr_14 [i_7] [10] [i_7 + 1] [10] [i_7 - 1] [i_7 + 1])))));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_28 = ((((min(32749, 0))) ? ((var_7 ? ((var_6 ? var_8 : var_17)) : (10608 || var_1))) : -48));
                        var_29 += ((-(((!(((var_11 ? var_14 : var_5))))))));
                        arr_28 [i_1] [i_0] |= 4020605465733555085;
                        arr_29 [i_8] = min((((arr_1 [i_0]) << (arr_1 [i_8]))), (!-1));
                        arr_30 [i_8] = (((21 + var_1) + ((((arr_15 [i_0] [2] [i_0]) + var_11)))));
                    }
                }
            }
        }
    }
    var_30 = var_3;
    #pragma endscop
}
