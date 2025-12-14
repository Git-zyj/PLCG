/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((((min(var_7, var_5))) < var_4))) - (var_0 ^ var_2)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_11 *= -245;
        var_12 = var_8;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_13 ^= (((((((((arr_0 [i_0]) && 16384))) * (((arr_4 [i_0] [i_0]) / (arr_2 [i_0])))))) ? var_5 : (arr_4 [i_0] [i_0])));
            var_14 = ((((var_1 || (11 & 224))) ? var_6 : (((arr_0 [i_0]) ? var_2 : (arr_2 [i_0])))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 10;i_3 += 1)
            {
                {
                    var_15 = (((arr_6 [i_3] [i_3 - 2] [i_3 - 2]) / (((arr_8 [i_0] [i_0] [i_0] [i_0]) & (arr_8 [i_3] [i_3 - 4] [i_3 - 1] [i_3 - 4])))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_16 = 31;
                                var_17 = var_7;
                                arr_14 [i_0] [i_5] [i_0] = ((((-var_0 ? (((arr_4 [i_0] [i_0]) << 0)) : (arr_13 [i_5 - 1] [i_5 - 3] [i_5 - 1] [i_5 + 2] [i_5 - 2]))) * (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ ((((arr_8 [i_0] [i_0] [i_0] [i_0]) || var_0)))))));
                                var_18 = var_6;
                            }
                        }
                    }
                    var_19 = arr_6 [i_0] [i_0] [i_0];
                    arr_15 [i_0] [i_0] [i_0] = ((((var_0 ? (((arr_4 [i_0] [i_0]) ? (arr_10 [i_0] [i_0]) : var_0)) : (14 & 65535))) >> ((((~(((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ^ var_0)))) + 3631))));
                    var_20 = var_6;
                }
            }
        }
        var_21 = ((var_0 ? (((arr_6 [i_0] [i_0] [i_0]) ? (var_4 / var_0) : (((arr_6 [i_0] [i_0] [i_0]) - 65535)))) : 126));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_22 = ((((((arr_8 [i_6] [i_6] [i_6] [i_6]) ? var_3 : (var_9 | var_9)))) ? ((((var_0 | (arr_9 [i_6]))) & ((251 ? 127 : var_4)))) : (arr_9 [i_6])));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    {
                        var_23 = (max((31 | 49), (arr_9 [i_6])));
                        var_24 += (((arr_11 [i_6] [i_6] [i_6] [i_6] [i_6]) != (arr_6 [i_6] [i_6] [i_6])));
                    }
                }
            }
        }
        var_25 = ((!((min(133, 223)))));
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 8;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {
                    var_26 |= ((((((arr_13 [i_6] [i_6] [i_6] [i_6] [i_6]) | 37))) ? ((min((arr_9 [i_6]), (arr_30 [i_6] [i_6])))) : (((((arr_19 [i_6] [i_6] [i_6]) ? (arr_24 [i_6] [i_6] [i_6] [i_6]) : (arr_12 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))) - (((arr_4 [i_6] [i_6]) ? (arr_0 [i_6]) : var_8))))));
                    arr_32 [i_6] = ((((((var_0 * (arr_27 [i_6] [i_6]))))) || (((((3 ^ (arr_13 [i_6] [i_6] [i_6] [i_6] [i_6]))) ^ (arr_18 [i_6] [i_6]))))));
                    var_27 ^= (((((104 ? ((28572 ? 35498 : 17788)) : 0))) || 17788));
                    var_28 = (((((((arr_27 [i_6] [i_6]) ^ (arr_21 [i_6] [i_6] [i_6] [i_6]))))) | (((arr_12 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10 - 1]) & ((~(arr_30 [i_6] [i_6])))))));
                }
            }
        }
    }
    var_29 = (((((min(65535, var_5)) ? (var_9 * var_1) : (var_1 / var_9)))));
    #pragma endscop
}
