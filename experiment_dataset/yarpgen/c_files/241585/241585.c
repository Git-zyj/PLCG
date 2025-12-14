/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((-(var_8 == var_7)))) ? (-var_7 <= var_8) : ((max(var_1, (min(var_11, var_0)))))));
    var_17 = (min((min(((var_10 ? var_9 : var_12)), 1249)), (((~((max(var_4, var_7))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 ^= ((-((((-2147483647 - 1) && var_11)))));
                    var_19 ^= max((arr_6 [i_2] [i_1] [i_1] [i_1]), (arr_0 [i_0]));
                    var_20 = (max(var_20, (((max((22664 - 1114866716), (((arr_3 [12] [12]) ? (arr_2 [i_0] [8]) : (arr_6 [i_2] [i_1] [i_0] [i_0]))))) + (arr_1 [10])))));
                    var_21 = (max(var_21, (((((+((((arr_0 [i_2]) < 1114866689)))))) ? (((2583265836 ? var_0 : 100))) : (((arr_4 [0] [i_0 + 2]) ? 112 : (arr_4 [4] [2])))))));
                    arr_8 [5] [i_1] [i_1] [i_0] = ((((41608 + (max((arr_1 [i_0]), var_14))))) ? (arr_5 [i_0] [i_1]) : ((max((!22677), (arr_4 [i_0] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
