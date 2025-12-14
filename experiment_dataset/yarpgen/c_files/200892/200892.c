/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_11 = -6972417736297516467;
        arr_3 [i_0] [i_0] = ((((((((41127 ? 1 : 1))) ? var_0 : (var_2 | 6226)))) & (arr_0 [i_0 + 2])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_3] [i_3] = ((+((4738990177782299537 + (((var_6 ? (arr_5 [i_2] [i_1] [i_1]) : var_7)))))));
                        var_12 = (max(var_12, (arr_7 [i_0] [i_0])));
                    }
                }
            }
        }
        var_13 = (min(((4 ? var_10 : ((1 ? 4095 : var_5)))), 67100672));
    }
    for (int i_4 = 1; i_4 < 24;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_14 = (min(var_14, ((min(((-((var_5 ? var_8 : var_9)))), ((-9375012112259243878 ? var_5 : (((arr_12 [i_6]) / 6522398988563500974)))))))));
                    var_15 = (14 && -4631560904852108093);
                }
            }
        }
        arr_20 [i_4] = (max((((arr_18 [i_4] [i_4] [i_4] [i_4]) ? 1 : (arr_18 [i_4] [i_4] [i_4] [i_4]))), ((var_1 ? 6226 : (arr_18 [i_4] [i_4] [i_4] [i_4])))));
        arr_21 [22] &= (((~0) | (((arr_17 [18] [i_4]) ? (~var_5) : (((max(102, 24418))))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_16 = (((arr_0 [i_7]) ? (1 ^ 1) : 809623983184713906));
        arr_24 [i_7] = (arr_4 [i_7] [i_7] [i_7]);
    }

    /* vectorizable */
    for (int i_8 = 1; i_8 < 18;i_8 += 1)
    {
        arr_27 [i_8] = (((((~1) + 2147483647)) << 0));
        var_17 = (arr_15 [i_8]);
    }
    #pragma endscop
}
