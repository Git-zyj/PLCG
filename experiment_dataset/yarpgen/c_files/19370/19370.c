/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (8082408058509657702 > 4142222608);
        var_13 = (min((((arr_1 [i_0]) ? (min((arr_2 [i_0]), var_1)) : 1)), ((((~2772645288) ? ((17091366848171744346 ? (arr_2 [i_0]) : 255)) : (arr_1 [i_0]))))));
        var_14 = (max(var_14, ((max(3, (!15))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                arr_19 [9] [4] = (((((((((arr_12 [11] [7] [i_4]) | var_1))) ? ((1 >> (152744689 - 152744684))) : (arr_7 [i_1] [i_4])))) ? ((~((var_3 ? (arr_12 [i_3] [i_4] [i_5]) : 19656)))) : (min((max(var_7, (arr_13 [i_1] [i_2] [i_3] [i_4] [i_4] [i_1]))), 2619745))));
                                var_15 = (((min((arr_12 [i_2 - 1] [i_2 - 3] [i_3 + 1]), var_2))) ? var_5 : (((min(1, (arr_18 [i_3 - 1] [10] [i_5] [i_2 - 1] [i_3 - 1]))))));
                                var_16 = ((var_4 > (arr_14 [i_1] [1] [i_3 - 2] [i_3 - 2] [i_5] [i_5])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_17 = (min((arr_5 [i_2 - 3] [i_3 - 2]), (((arr_23 [i_2 + 1] [i_3 - 1]) ? (arr_23 [i_2 - 1] [i_3 + 1]) : (arr_23 [i_2 - 3] [i_3 - 2])))));
                                var_18 ^= ((142 * (+-0)));
                                arr_24 [i_7] [i_6] [i_3] [i_1] [i_1] = ((((max(((3593043985 < (arr_20 [i_7] [8]))), (!1)))) < (arr_9 [i_2] [i_1])));
                                var_19 = (arr_7 [i_1] [i_7]);
                            }
                        }
                    }
                }
            }
        }
        var_20 = max(44, 1847972211);
        arr_25 [i_1] = ((var_8 % (max(var_11, (arr_5 [i_1] [i_1])))));
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_21 = ((0 ? 2190351755 : 46111497));
        var_22 = ((152744704 ? 4885 : -32749));
    }
    var_23 = var_10;
    #pragma endscop
}
