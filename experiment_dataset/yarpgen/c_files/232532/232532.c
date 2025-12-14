/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (((min((var_8 & var_2), (1157078032 > var_10))) | ((((((max(var_1, var_8))) && var_5))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_13 ^= var_5;

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_14 = ((+(((((((arr_8 [i_1 + 2] [i_0] [i_2] [i_3] [i_1]) / (arr_6 [i_0] [i_1 - 2] [i_1 - 2])))) == (((arr_6 [0] [i_2] [2]) / var_11)))))));
                        arr_9 [i_0] [i_1 - 1] [i_2] [i_3] |= (max((max((max((arr_8 [i_3 - 1] [3] [i_1] [i_1] [i_0]), (arr_3 [i_2]))), (65535 & -868973951))), ((max((arr_5 [i_0]), ((max(var_4, 65535))))))));
                        var_15 = (65525 == 65531);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_16 = (min(var_16, (((~((-((((arr_4 [i_0] [i_1 - 2] [i_0]) >= 16))))))))));
                        var_17 = (((50534 - var_3) ? (((min((max((arr_7 [i_4] [i_4] [i_4] [1]), (arr_3 [i_0]))), var_7)))) : ((~(max(var_3, 65535))))));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_18 = (arr_2 [i_0] [i_0]);
                            var_19 = (min((max(-68, (var_9 | 4))), ((-((-(arr_11 [i_1] [i_2 + 2] [i_4] [i_5])))))));
                            arr_14 [i_0] [i_5] [1] [i_5] = 65531;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_4] [i_4] [i_0] [7] = (~var_2);
                            var_20 = 7964;
                            var_21 *= (((arr_7 [i_0] [i_0] [i_2 - 1] [i_4]) <= var_8));
                        }
                    }
                    var_22 = 65505;
                }
            }
        }
    }
    var_23 ^= (max((min((min(var_4, var_6)), var_2)), var_10));
    var_24 = var_1;
    #pragma endscop
}
