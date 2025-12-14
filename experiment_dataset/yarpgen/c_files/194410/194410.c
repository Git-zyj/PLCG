/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (1 ? 1 : 834666367);
        arr_2 [i_0] = ((1181568200 ? 131071 : 2097150));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_17 = ((((max((min((arr_6 [i_1] [i_1] [3]), 0)), ((min(var_7, (arr_5 [i_2]))))))) ? ((1 ? 336148384048861070 : 157652788)) : ((max(((var_5 ? var_10 : var_6)), ((((arr_3 [i_1] [24]) ? var_9 : var_7))))))));
                arr_9 [i_1] [i_2] = (max(((min(((1 >> (((arr_5 [i_2]) - 873733872)))), ((60843 ? 254 : 1))))), (min((max((arr_3 [i_1] [2]), var_7)), ((2112072967 ? 24 : 255))))));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                arr_19 [i_2] = (((max((((var_2 ? var_1 : var_2))), (max(1, 21))))) ? (min(1, 2088167773)) : (((((arr_18 [i_4]) > 11680803817797362208)) ? (((arr_17 [i_1] [i_1] [i_3] [i_4] [14] [i_4]) ? 1856183390 : (arr_8 [i_2]))) : (((var_11 ? 1 : (arr_7 [8] [i_5])))))));
                                arr_20 [i_1] [i_2] [i_2] [i_3] [i_2] [i_5] = (((((min(var_14, (arr_8 [i_2])))) ? (max((arr_4 [i_4]), var_2)) : (((32 ? 135607442 : 14))))) ^ (((((((arr_12 [i_1] [i_1] [i_3]) ? var_12 : -32759))) ? ((-20552 ? var_3 : 22767756)) : (((max((arr_14 [i_1] [i_2] [i_3] [i_2] [19] [i_5]), -32767))))))));
                                arr_21 [22] [i_1] [i_3] [i_3] [i_4] |= (((2522098806 % 3874851629) / ((7955 ? 419666844 : ((1 ? 3897429704 : 1152921504606846912))))));
                            }
                        }
                    }
                }
                arr_22 [i_1] [i_2] = (min((max(((1017364546 ? var_10 : (arr_12 [16] [16] [i_2]))), (((1922291205 ? var_15 : (arr_17 [i_1] [i_1] [i_2] [3] [i_2] [i_2])))))), (((64 & var_14) ? (1 - 47) : (max((arr_13 [i_1] [i_1] [i_2] [1]), 3436))))));
            }
        }
    }
    var_18 -= (max(((min((max(821894418, -1733147769)), (min(var_3, var_10))))), (((216 - 2147221504) ? (((var_15 ? 13 : 971171457))) : (max(var_4, 1))))));
    var_19 = (max(((((max(1408701484, 1))) ? 0 : 125)), ((1144903322 ? 1 : 84))));
    var_20 = (min(((max((max(63488, 9223372036854775807)), (((1023 ? var_6 : var_12)))))), (min((((0 ? 1691122419 : 1))), (6 & var_13)))));
    #pragma endscop
}
