/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [3] |= 2663337364;
        arr_3 [i_0] [i_0] = ((var_5 ? -87 : (min(698838490445325445, (((760132070346615391 ? 14 : (arr_1 [i_0]))))))));
        var_12 = (max(var_12, -55));
        var_13 = (min(var_13, ((min(((max((min(var_2, 9223372036854775807)), ((max(402884446, (arr_0 [7]))))))), ((min(8482881154775152421, var_8))))))));
    }
    var_14 = var_4;

    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    {
                        var_15 = (min(var_15, (((1 ? 9963862918934399195 : (min((arr_5 [i_4 - 2] [i_3 + 1]), ((15861 | (arr_10 [i_1]))))))))));
                        var_16 = (max(var_16, (((((((max((arr_6 [i_2]), (arr_5 [1] [0])))) ? (arr_0 [15]) : 9963862918934399195)) << (((arr_6 [i_3]) ? (arr_9 [0] [i_3] [12]) : (!8482881154775152421))))))));
                    }
                }
            }
        }
        var_17 = ((var_1 ? (((((min((arr_4 [i_1]), (arr_9 [i_1] [i_1] [i_1])))) ? (((2147483647 << (((((arr_10 [i_1]) + 6702526056207135269)) - 5))))) : -47))) : (min(var_6, (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))));
        arr_13 [i_1] [i_1] = (min((((arr_5 [i_1] [i_1]) ? 8482881154775152420 : (arr_5 [i_1] [i_1]))), (((var_9 ? var_5 : var_9)))));
        arr_14 [i_1] = (min(((-361512276 ? (arr_9 [i_1] [i_1] [i_1]) : (arr_9 [i_1] [i_1] [i_1]))), (arr_9 [i_1] [i_1] [10])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_18 |= -2630606448135221193;
                                var_19 = (((arr_19 [i_1] [6] [i_6] [i_7 - 1]) ? (min((arr_22 [i_7 - 1] [i_6] [i_6] [i_6] [i_8 + 1]), var_7)) : (min(((8482881154775152421 ? 7278709790850330940 : (arr_15 [i_1] [12] [i_1]))), 47))));
                                arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_5] &= ((arr_19 [i_7 - 1] [i_8 - 1] [i_5] [i_7 + 1]) ? (((-4054676913795534010 % (arr_7 [i_8 + 1])))) : (arr_7 [i_8 - 2]));
                            }
                        }
                    }
                    var_20 = -361512279;
                }
            }
        }
    }
    var_21 = var_0;
    #pragma endscop
}
