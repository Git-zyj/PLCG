/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_18 |= ((127 ? ((~((3 ? 3 : (arr_3 [i_0] [i_1] [i_1]))))) : (arr_0 [5])));
                var_19 = (max(var_19, ((min((((arr_2 [i_0] [i_1 - 2]) ? 255 : (arr_2 [i_0] [i_0]))), (((((2143289344 ? 2143289344 : 3))) ? ((2151677922 | (arr_3 [i_0] [i_0] [1]))) : ((2143289327 ? 18446744073709551589 : (arr_4 [i_0]))))))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 = ((((-(arr_16 [i_2] [i_2 + 2] [i_3 - 1] [i_3] [i_4])))) ? (arr_16 [i_1] [i_2 + 1] [i_3 + 1] [i_1] [i_4]) : ((2143289327 | (arr_16 [i_2 - 1] [i_2 + 1] [i_3 + 1] [i_4] [3]))));
                                var_21 = (((((((1 ? 63 : 2143289344))) ? ((2151677969 ? 14 : 255)) : ((((arr_7 [i_0]) != 0))))) > (arr_7 [i_1 + 1])));
                            }
                        }
                    }
                }
                var_22 *= (max((((2143289330 ^ 16128) == ((-(arr_11 [i_1 + 3] [i_1] [5]))))), (((max((arr_15 [i_1] [8] [i_1] [i_1] [i_0]), 8)) > ((1 ? (arr_16 [i_0] [6] [i_1 + 3] [i_0] [i_0]) : 4294967281))))));
            }
        }
    }
    var_23 |= (max((((max(var_4, -7)) / (((3 ? var_10 : var_11))))), (((!(-32767 - 1))))));
    #pragma endscop
}
