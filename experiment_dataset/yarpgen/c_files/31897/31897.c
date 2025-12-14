/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [3] [i_1] [i_0] = (min((((((0 / (arr_6 [i_0] [i_1] [i_0])))) ? -5089223536625033318 : (((max(0, var_4)))))), ((min((arr_0 [i_1] [i_1]), var_9)))));
                    var_15 = (((((((arr_5 [i_0] [i_1]) >= (max((arr_7 [i_0] [i_0] [i_0] [i_0]), 90)))))) <= (((arr_6 [i_0] [i_1] [i_0]) ? (min(0, var_3)) : (0 >= 1)))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_16 = (((((arr_7 [i_3] [i_3] [i_3] [i_3]) & (arr_10 [i_3] [i_3]))) >= var_4));
        var_17 ^= (((((-73 ? (1 >= var_10) : (((!(arr_1 [i_3]))))))) | ((~(arr_5 [i_3] [i_3])))));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_18 = ((((((-1846190044 ? 72 : 4294967295)) ? ((-90 ? var_14 : -5225186033497446174)) : (((max(159, (arr_2 [i_4])))))))));
        var_19 = (((arr_8 [i_4]) ? (((arr_8 [i_4]) ? var_10 : var_2)) : ((min(var_7, (arr_0 [i_4] [i_4]))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_20 = (((((arr_15 [i_5] [i_5]) * (arr_16 [17]))) / (arr_14 [i_5])));
        var_21 = (((arr_16 [i_5]) ? var_3 : (arr_16 [i_5])));
        var_22 = ((((arr_16 [i_5]) ? 73 : (arr_14 [i_5]))));
    }
    #pragma endscop
}
