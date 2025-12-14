/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((~((((var_11 ? var_2 : 1)) | (var_11 ^ var_11)))));
    var_17 = (min(var_17, var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (arr_2 [i_1] [i_0] [14])));
                    var_19 = ((~(((arr_4 [i_0] [23] [i_2 - 2]) * ((max(var_3, (arr_3 [i_1]))))))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_20 = ((((min((arr_7 [i_1] [i_2 - 1] [i_1] [21] [i_4] [4]), (min(255, -20))))) ? (((max((arr_1 [11]), (!0))))) : (min((arr_2 [i_0] [i_0] [i_1]), -262143))));
                            var_21 *= (min((((2607633627893997137 ? (arr_3 [i_4]) : var_0))), ((((arr_6 [i_4] [i_3] [i_2 - 1] [i_1] [i_0] [i_0]) * (arr_6 [i_4] [i_4] [i_3] [i_2 - 2] [i_1 - 3] [i_0]))))));
                            arr_11 [i_0] [i_1] [i_1 + 1] [i_2] [i_3] [10] [i_4] = ((-((~(arr_7 [4] [1] [i_1] [i_1] [0] [i_1 - 3])))));
                            var_22 &= (((((arr_3 [i_4]) ? (((arr_8 [i_0] [i_0] [i_1] [23] [i_2 - 2] [i_3] [i_4]) ? (arr_9 [i_0] [i_1 - 3] [9] [i_1] [i_4]) : (arr_7 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0]))) : ((min(var_1, 127))))) >> (((arr_10 [i_4] [i_3] [i_2 + 3] [i_0] [i_0]) - 81))));
                        }
                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 22;i_5 += 1)
                        {
                            var_23 -= (((-2607633627893997137 - 4294705154) ? (arr_6 [i_0] [i_1] [i_0] [i_2] [11] [i_5]) : (arr_10 [i_1] [i_1] [i_1 - 1] [i_1] [i_1])));
                            var_24 = (1 ? 1 : 21991);
                            var_25 = ((~(~2104463465026834181)));
                            var_26 = (arr_4 [i_5 - 4] [i_2 + 3] [i_1 - 2]);
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_16 [i_2] [i_1] [i_1] [21] [2] = (arr_9 [i_0] [i_1 - 3] [i_2] [i_3] [i_6]);
                            var_27 = (max(var_27, ((((-2104463465026834171 - (-9223372036854775807 - 1)))))));
                            var_28 = ((max(var_1, ((-(arr_15 [i_0] [9] [i_0] [i_0] [i_0] [i_0]))))));
                        }
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            var_29 = (max(var_29, (((max((arr_6 [i_7 + 1] [i_7 + 1] [i_7 + 3] [i_7 + 2] [i_7 - 1] [i_7 - 1]), (arr_6 [i_7 + 1] [i_7 + 1] [i_7 + 2] [i_7 - 1] [i_7 + 3] [i_7 + 3])))))));
                            var_30 = ((-(max(var_13, (min(1, 2607633627893997131))))));
                        }
                        var_31 ^= min((((arr_18 [i_0] [1] [i_1 - 1] [i_1 - 3] [12]) >> (((arr_6 [i_1] [i_1] [i_1 - 1] [i_2 - 3] [i_2] [i_2 - 3]) - 213)))), (((arr_18 [i_1] [8] [i_1 - 1] [i_1] [i_1]) ^ (arr_18 [i_0] [8] [i_1 - 1] [i_1 - 1] [i_2]))));
                    }
                    var_32 = (max((((2607633627893997137 <= (((min(var_3, 0))))))), ((~(arr_4 [i_0] [13] [i_2 - 2])))));
                }
            }
        }
    }
    var_33 &= max((~var_7), ((((var_10 ? var_15 : var_7)))));
    /* LoopNest 3 */
    for (int i_8 = 2; i_8 < 24;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    var_34 = ((((((((~(arr_24 [i_8] [i_9 - 1])))) ? (max((arr_20 [i_8]), (arr_23 [i_10] [i_9] [i_8] [i_8 + 1]))) : (((!(arr_20 [1]))))))) * (((((((arr_21 [i_10] [i_10] [i_10]) && 1)))) / (arr_22 [i_8] [i_9] [i_9 - 1])))));
                    var_35 = ((var_0 ^ ((((arr_19 [i_8 - 2]) / (arr_19 [i_8 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
