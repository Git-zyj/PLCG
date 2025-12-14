/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [2] = ((((((0 ? 1 : 16)) * ((var_5 / (arr_1 [i_0] [i_0])))))));
        arr_5 [1] [i_0] = (max((arr_3 [i_0 + 1]), (max(((16 >> (((arr_0 [i_0]) + 31357)))), (((arr_2 [i_0]) & 496))))));
        var_14 = (max(var_14, ((((~-10505) ^ (((arr_3 [1]) ? 65522 : -23431)))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 21;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_16 [i_2] [i_2] [2] = 65519;

                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            var_15 &= ((((min(var_12, 25043))) >> (((-var_7 || ((max((arr_17 [i_3] [i_4] [i_4] [6] [i_3] [i_3]), var_11))))))));
                            var_16 = (min(var_16, ((((((((1 & (arr_15 [i_5]))) >> var_11))) ? ((var_1 & (arr_14 [i_2 - 1] [i_2 + 4] [i_2 - 2] [i_2 + 4]))) : ((((var_11 ? (arr_17 [i_3] [i_2 + 4] [i_3] [i_3] [i_4] [i_5]) : (arr_6 [i_4] [i_4]))) >> ((min((arr_7 [i_5]), (arr_19 [i_3])))))))))));
                            var_17 = ((min(var_3, var_12)));
                            var_18 = (max(((((max((arr_11 [i_1] [23] [i_1]), 9))) | ((var_12 & (arr_7 [4]))))), (((min(-1, (arr_17 [i_2] [i_1] [i_1] [i_1] [15] [i_5])))))));
                            var_19 = ((~((max(var_10, var_11)))));
                        }
                        var_20 = (~var_13);

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_23 [19] [19] [19] [i_4] [i_2] = (((0 ? 65532 : (((arr_11 [i_6] [i_6] [i_6]) & 25)))));
                            var_21 ^= (max((((arr_8 [i_1] [i_1] [i_3 - 1]) >> (17 ^ 1))), (((1 <= 0) ? (arr_8 [i_1] [i_1] [i_1]) : var_1))));
                            var_22 = (arr_22 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] [22]);
                            var_23 = ((min((arr_9 [i_1] [i_1]), (arr_9 [i_1] [i_1]))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_26 [1] [i_2] [i_3] [i_3] [i_3] = (((arr_14 [i_3] [9] [i_3 - 3] [i_3]) - (arr_10 [i_2 - 3] [i_2 - 1] [i_2 + 2] [i_2])));
                            var_24 = ((((var_0 ? 65535 : (arr_21 [i_1] [i_2] [i_1] [i_3] [i_4] [i_7])))) ? (((((arr_19 [i_1]) || var_4)))) : (((arr_10 [i_7] [i_7] [i_7] [i_2]) ? (arr_24 [i_1] [i_1] [i_2] [i_1] [1]) : (arr_10 [4] [i_3 + 2] [i_4] [i_2]))));
                            arr_27 [i_1] [i_2] [i_2] [i_2] [17] = (var_4 ? (arr_7 [16]) : (arr_17 [i_2] [i_2] [i_2 + 2] [i_2] [i_2 + 2] [i_7]));
                            var_25 = (((arr_9 [i_3 - 3] [i_2 - 2]) <= (arr_9 [i_3 + 1] [i_2 - 2])));
                        }
                        /* vectorizable */
                        for (int i_8 = 4; i_8 < 21;i_8 += 1)
                        {
                            arr_32 [i_2] [22] [i_2] = ((!(arr_25 [i_2])));
                            var_26 = (((arr_17 [i_2] [i_2 - 2] [i_2] [i_2 - 3] [i_2 - 3] [i_2 + 1]) | (arr_29 [i_1])));
                            var_27 = (((arr_21 [i_8] [i_8 - 2] [1] [2] [10] [1]) ? (arr_10 [i_1] [i_1] [i_1] [i_2]) : (((arr_10 [i_1] [i_2] [i_2] [i_2]) ^ var_3))));
                        }
                        var_28 |= min(((((((arr_7 [i_2]) << (var_7 - 5231)))) ? (~1) : var_2)), ((min((arr_9 [i_1] [i_1]), (min((arr_10 [18] [18] [i_1] [i_3]), var_2))))));
                    }
                    var_29 = (min(var_29, (arr_10 [i_2 + 1] [i_2 + 4] [i_3 - 1] [i_3])));
                }
            }
        }
    }
    #pragma endscop
}
