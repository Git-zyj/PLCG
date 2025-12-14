/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_10 *= (~7857841505314669250);
                                var_11 *= (max((arr_0 [i_0]), (((arr_6 [i_3]) ? (arr_4 [i_0] [16] [i_2] [i_3 + 2]) : ((-(arr_7 [i_0] [i_3])))))));
                            }
                        }
                    }

                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        var_12 = (min(var_12, (((((747435191121225682 <= ((((var_7 >= (arr_12 [i_0] [i_1] [4] [i_2] [i_5 - 2]))))))))))));
                        var_13 ^= ((((max((~var_1), (7857841505314669250 / 243)))) ? 2114264175 : (arr_9 [10])));
                        var_14 += (183 * var_8);
                        arr_14 [i_5] [i_1] [15] [i_1] [8] = ((((((!(((-(arr_11 [i_0] [i_0] [i_1] [i_5] [i_2])))))))) & 7857841505314669251));
                    }
                    var_15 *= (((((((arr_3 [0] [i_1]) <= (arr_7 [i_1] [i_0]))))) ? (((max(var_8, (arr_13 [i_2] [i_2] [i_2] [i_1] [i_0] [i_0 - 2]))))) : (((((arr_12 [i_2] [i_1] [6] [i_0] [i_0]) ? (arr_13 [i_0] [i_1] [i_2] [i_0] [i_1] [i_2]) : var_3)) + ((-(arr_1 [i_1])))))));
                    var_16 = (min(var_16, (arr_4 [i_0 - 3] [10] [i_1] [i_2])));
                    arr_15 [i_1] [i_1] [i_1] = (i_1 % 2 == 0) ? (((((((max((arr_6 [i_1]), (arr_6 [i_1])))) + 2147483647)) >> ((((min((arr_6 [i_1]), (arr_6 [i_1])))) + 17583))))) : (((((((max((arr_6 [i_1]), (arr_6 [i_1])))) + 2147483647)) >> ((((((min((arr_6 [i_1]), (arr_6 [i_1])))) + 17583)) - 14744)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            {
                var_17 = (min(var_17, 23220));
                arr_22 [i_6] = ((((max(((~(arr_20 [i_6]))), ((max((arr_16 [i_6]), 31)))))) ? (((-1 || (((7857841505314669250 ? 39191 : 74)))))) : ((~(((arr_18 [i_6 - 1]) << (((arr_19 [i_6]) - 168))))))));
                var_18 = (((arr_18 [i_6 - 1]) ? (((arr_18 [i_6 + 1]) | 1)) : (max((((-75 + 2147483647) >> 1)), (-33 & 38)))));
                arr_23 [i_6] [i_6] = (((-(arr_17 [i_6] [i_6]))) <= (((arr_19 [i_6 + 1]) ? (arr_16 [i_6 + 1]) : (arr_16 [i_6 + 1]))));
                var_19 = (min((max(204, 7857841505314669244)), (arr_17 [i_6] [i_6])));
            }
        }
    }

    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_20 = var_1;
        var_21 = arr_5 [i_8];
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    {
                        var_22 = (((arr_25 [i_8] [i_11]) ? (arr_18 [i_8]) : (((arr_30 [i_8] [i_9] [i_11]) ? (-11 < 32767) : var_6))));
                        var_23 = -13;
                        arr_33 [i_8] [i_8] [i_10] [i_11] = ((-(((arr_18 [i_11]) ^ ((var_4 >> (((arr_19 [i_10]) - 177))))))));
                    }
                }
            }
        }
        arr_34 [i_8] [i_8] = (max((max(-7857841505314669250, ((max(1, 1))))), var_3));
    }
    #pragma endscop
}
