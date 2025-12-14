/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(110, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((min((arr_4 [1] [i_0] [4]), (((((arr_2 [i_1]) + 9223372036854775807)) << (((((((arr_2 [i_0]) ? (arr_2 [i_1]) : (arr_0 [i_1]))) + 5704318592728819449)) - 28)))))))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [2] [i_2] = (arr_2 [i_0]);

                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] = (arr_5 [i_1] [i_3]);
                        var_13 = ((108 ? (max(((var_0 ? (arr_8 [2] [i_2] [i_1] [2]) : (arr_6 [4] [i_2] [i_2]))), ((max(var_1, (arr_3 [i_1] [i_2] [i_3])))))) : (((~((-109 ? var_1 : 64030)))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_1] [i_1] [i_1] [i_4] = (arr_1 [i_0]);
                        var_14 = (((-126 ? (arr_11 [i_1] [1] [i_4]) : -106)));
                        var_15 = (arr_5 [i_1] [i_1]);
                        var_16 ^= (((arr_9 [8] [1] [2] [i_4]) ? (((arr_11 [i_4] [i_2] [14]) ? -32754 : -12488)) : (((65535 && (arr_3 [6] [i_2] [i_4]))))));
                        var_17 = arr_5 [i_1] [i_1];
                    }
                }
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    var_18 &= arr_1 [i_0];

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_19 |= (arr_17 [i_6] [i_1] [0]);
                        var_20 = 65535;
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_25 [6] [i_1] [5] [i_1] [i_5] [2] = (max(1, ((7175687087210975543 ? (arr_14 [i_5] [i_1] [i_5 - 1]) : (max((arr_6 [i_7] [i_5] [2]), (arr_8 [i_1] [i_1] [i_1] [i_1])))))));
                        var_21 = (max(var_21, (((65524 ? 18446744073709551613 : -6015631591912673282)))));
                        var_22 -= (24161 == -7175687087210975528);
                        arr_26 [i_1] [i_5] [i_1] [i_5] [i_1] [5] = (arr_6 [i_5] [10] [i_5]);
                    }
                }
                arr_27 [i_0] [i_1] = (max((((arr_2 [i_1]) ? (((arr_24 [i_0] [i_0] [i_1] [0]) ^ (arr_11 [i_0] [i_0] [i_0]))) : (arr_11 [i_0] [i_0] [i_0]))), (arr_2 [i_0])));
                arr_28 [i_1] = (max(4294967281, 896));
            }
        }
    }
    var_23 = ((-(max(var_3, (7877685983191524809 | var_0)))));
    #pragma endscop
}
