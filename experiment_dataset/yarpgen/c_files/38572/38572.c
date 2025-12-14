/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = ((209 >= (0 ^ 1)));
                    arr_8 [i_2] [3] [i_2] = (min((max(((1 << (var_6 - 2810740217))), 1)), ((max((1 || var_7), (arr_2 [3]))))));
                }
            }
        }
        arr_9 [i_0] = 127;
    }
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        arr_12 [1] = ((((min((arr_6 [22]), (arr_6 [18])))) ? (min((arr_4 [i_3 + 2]), -1776205912)) : (((arr_4 [i_3 + 3]) ^ (arr_4 [i_3 - 1])))));
        var_15 = (max(var_15, (!1)));
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 12;i_6 += 1)
            {
                {
                    var_16 = 1;

                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        var_17 = (!(((1 ? (arr_21 [i_4 - 1] [i_5] [i_4] [i_7 - 1]) : 1296688695))));
                        arr_26 [i_4 + 1] [i_5] = ((-(!-964333604)));
                    }
                    arr_27 [i_5] = ((((((arr_21 [i_4] [i_4 + 1] [1] [i_6]) % (((-(arr_15 [i_5] [i_6 - 1]))))))) ? (max((0 ^ 1), -var_1)) : (((min(19236, var_2))))));

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_31 [i_4] [i_4] [i_6] [6] [i_5] [i_4] = (min(255, 1));
                        arr_32 [i_4] = (((max(-517681765, var_7)) >= ((0 ? 1 : (arr_22 [i_6 + 1] [i_5] [i_4 - 1])))));
                    }
                }
            }
        }
        var_18 ^= ((var_10 ^ (max(9, 3011745481))));
    }
    #pragma endscop
}
