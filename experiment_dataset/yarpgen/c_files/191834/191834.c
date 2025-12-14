/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += 2616;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 |= ((max(112, (arr_0 [i_0]))));
                var_15 = (i_0 % 2 == zero) ? ((((max(var_0, ((((arr_3 [i_0] [i_0] [1]) != var_11))))) << (((max((arr_1 [i_0]), (((-(arr_0 [i_0])))))) - 5887460704519944923))))) : ((((max(var_0, ((((arr_3 [i_0] [i_0] [1]) != var_11))))) << (((((max((arr_1 [i_0]), (((-(arr_0 [i_0])))))) - 5887460704519944923)) + 5887460704520000239)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_16 = (((((arr_5 [i_2] [i_3]) / (((-1989251180 ? (arr_2 [i_2] [i_3]) : (arr_9 [i_2] [i_3])))))) != ((((!(((0 ? (arr_4 [i_2] [i_2]) : 1989251186)))))))));
                var_17 = var_5;
                arr_11 [2] &= (min((arr_7 [i_2 + 2] [i_3]), (min((arr_7 [i_2 + 3] [i_3]), (arr_1 [i_3])))));
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_18 = (min(var_18, ((((arr_3 [i_4] [4] [i_4]) ? (arr_5 [2] [i_4]) : (arr_3 [i_4] [16] [16]))))));
        arr_15 [i_4] = var_3;
    }
    var_19 = var_5;
    #pragma endscop
}
