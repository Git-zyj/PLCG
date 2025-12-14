/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~22401);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        var_14 += (((arr_7 [i_2] [i_2] [i_2] [i_3] [i_2]) || ((min(54440, (arr_6 [i_0]))))));
                        var_15 = (min(var_15, ((max((arr_7 [3] [3] [i_2] [i_3] [i_2]), (((((max((arr_3 [i_0]), var_3))) << ((((16232427135943826766 ? 444597025 : -5023318291312304130)) - 444597002))))))))));
                        var_16 = (arr_9 [i_0] [i_1] [i_2] [10] [i_3]);
                    }
                    for (int i_4 = 1; i_4 < 7;i_4 += 1)
                    {
                        var_17 ^= ((~2214316937765724850) % ((((arr_10 [i_4] [i_4] [i_4 + 3] [i_4 - 1]) ? (arr_8 [i_0] [i_1] [i_2] [i_4]) : (arr_8 [i_4 + 3] [i_4] [i_1] [i_1])))));

                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            var_18 = (max(var_18, (((arr_11 [4]) ^ (max(var_6, var_6))))));
                            var_19 += ((((((((arr_9 [6] [i_1] [i_1] [i_1] [i_1]) ? var_3 : 24)) < ((max(-731, var_4)))))) ^ (((arr_6 [6]) ? 24 : (arr_8 [i_0] [i_1] [3] [5])))));
                        }
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            arr_16 [9] [9] [i_2] [i_2] = (((((40205 & (var_8 <= var_5)))) ? (!var_6) : ((-((max(var_9, var_6)))))));
                            var_20 ^= ((~(arr_7 [i_0] [i_0] [i_0] [5] [10])));
                            arr_17 [3] [i_1] [i_1] [i_4] [i_6] [i_1] [i_1] = ((((var_4 % (arr_12 [i_4 + 4] [1] [i_4 + 1] [i_4 + 3] [i_4]))) <= var_5));
                            var_21 -= (min(((-11 ? 23239 : -11)), 24641));
                            var_22 = (min(var_22, (arr_15 [i_6] [i_6] [i_6] [i_6 - 2] [i_4] [i_4 + 3] [i_4 + 2])));
                        }
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {

                        for (int i_8 = 4; i_8 < 9;i_8 += 1)
                        {
                            var_23 -= (var_3 < var_11);
                            arr_23 [i_0] [i_7] = (((var_10 == (1 >= 22254))));
                            var_24 = (((var_11 ? var_3 : ((754545483 ? 13635 : -24641)))));
                        }
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            arr_27 [i_7] = (~var_11);
                            var_25 = (max((max((arr_22 [0] [i_7] [0] [6] [i_9]), (((arr_1 [1] [i_7]) ? (arr_6 [i_1]) : var_6)))), (arr_0 [8])));
                        }
                        for (int i_10 = 3; i_10 < 8;i_10 += 1)
                        {
                            var_26 = (((arr_12 [i_10] [i_2] [i_2] [i_10 + 1] [8]) >= (1755363040 <= 28)));
                            var_27 = ((((min(43305, -1418317460))) || 54440));
                            arr_30 [i_1] [i_7] [i_7] [i_2] [i_1] [i_7] [i_0] = var_4;
                        }
                        var_28 = (((22270 <= 43124) ? (((arr_13 [i_0] [i_7] [i_2] [i_7] [9] [9]) * var_10)) : ((max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [1]), (max(var_11, (arr_29 [i_0] [i_0] [i_7] [i_7] [i_0]))))))));
                        arr_31 [i_7] [i_1] [i_1] [1] = min((min(4900354766329329083, (((-1418317437 % (arr_22 [i_0] [i_7] [i_2] [i_7] [i_2])))))), -8311399363575261922);
                        arr_32 [3] [i_0] [i_1] [i_2] [i_7] = (arr_15 [i_0] [i_0] [i_2] [i_2] [i_2] [i_7] [i_0]);
                    }
                    var_29 = (min((!18446744073709551615), (arr_20 [i_2] [i_2] [i_1] [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
