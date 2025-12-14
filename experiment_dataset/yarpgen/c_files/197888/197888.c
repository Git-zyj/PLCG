/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_15 |= (max((arr_1 [i_0]), ((-(arr_1 [i_0])))));
        var_16 += 119;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] [i_1] &= ((var_4 ? ((15632609476084508866 ? (arr_5 [i_1]) : (arr_4 [i_1]))) : (min((arr_4 [i_1]), (arr_4 [i_1])))));
        var_17 = ((((min(((var_2 % (arr_5 [i_1]))), (arr_3 [i_1] [i_1])))) ? 15632609476084508864 : (arr_3 [i_1] [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    {
                        var_18 = ((!(arr_8 [i_2 - 2])));
                        var_19 *= (((-1708467330 / 878619736) ? (arr_9 [i_1] [i_2 - 2]) : (((min((arr_9 [i_1] [i_4 - 1]), (arr_9 [i_1] [i_2 + 1])))))));
                        var_20 ^= var_4;
                        arr_15 [i_1] [i_2] = ((var_10 != (arr_7 [i_1] [i_2] [i_3])));
                        arr_16 [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] = (min((arr_11 [i_1] [i_1] [i_1]), ((+(min((arr_2 [i_1]), (arr_8 [i_4])))))));
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_20 [i_5] = (((min(((max(var_11, (arr_17 [i_5] [i_5])))), (((arr_17 [i_5] [i_5]) - var_10)))) == var_1));
        var_21 *= (arr_18 [i_5]);
        arr_21 [i_5] &= ((0 ? (((((max((arr_19 [i_5] [i_5]), var_6)) != (((-(arr_17 [i_5] [i_5])))))))) : ((var_13 ? (((113 - (arr_19 [i_5] [i_5])))) : (arr_18 [i_5])))));
        var_22 = ((max(-878619736, var_7)));
    }
    var_23 = (var_6 > var_9);
    var_24 = var_0;
    var_25 = var_5;
    #pragma endscop
}
