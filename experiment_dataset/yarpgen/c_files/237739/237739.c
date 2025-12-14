/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((((var_8 ? ((-27724 ? var_11 : var_7)) : var_6))) ? ((min((~var_8), (!106)))) : -7558920568503746002)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = ((((-7558920568503746011 < (arr_3 [i_0] [i_0] [i_0])))));
                    arr_7 [i_2] [i_2] [i_0] = (min(var_4, (((arr_3 [i_0] [i_1] [i_2]) ? (arr_3 [i_1] [i_1] [i_0]) : (arr_3 [i_0] [i_0] [i_0])))));
                }
            }
        }

        /* vectorizable */
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            var_15 *= ((~(arr_3 [i_3 + 1] [i_3 - 3] [i_3 - 3])));
            var_16 = (arr_5 [i_3 + 2] [16] [i_3 + 1] [i_3 - 3]);
            var_17 = ((arr_9 [i_3 + 2]) & (arr_5 [i_0] [i_3] [i_3 - 1] [i_3]));
        }
        var_18 ^= var_5;
        var_19 = (arr_1 [i_0]);
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_13 [8] [5] = (arr_2 [i_4]);
        arr_14 [i_4] = (((((var_0 ? (arr_11 [i_4]) : (arr_11 [i_4])))) ? (arr_11 [15]) : (((arr_11 [i_4]) ? -5 : (arr_11 [i_4])))));
    }
    #pragma endscop
}
