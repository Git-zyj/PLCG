/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = ((-((min((arr_0 [i_1 - 1]), (arr_2 [i_1] [i_1 + 1]))))));
                var_12 = var_3;
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_6 [i_2] [i_2] = -13;
        var_13 *= (((var_9 | ((((arr_4 [1] [i_2]) << (((arr_4 [14] [14]) - 219))))))));
        arr_7 [i_2] [i_2] = ((~((min((13162409994233025086 || 4994141596305738357), (arr_4 [i_2] [i_2]))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_14 = (~(1522840185 / var_0));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_4] [i_5] = (((arr_14 [i_5] [i_4] [i_3]) ? var_2 : (arr_15 [i_3] [i_4] [i_4] [i_5])));
                    arr_19 [i_5] [16] = 49152;
                    arr_20 [3] [i_4] [i_3] = (arr_14 [i_3] [i_4] [i_5]);
                    arr_21 [1] [i_4] = (((arr_13 [i_5]) != var_1));
                    var_15 = (((arr_12 [i_3] [i_3] [1]) + var_1));
                }
            }
        }
        var_16 = (arr_13 [i_3]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_25 [i_6] = (-var_1 || 9);
        arr_26 [i_6] = (--1775096421);
        var_17 = (min(var_17, 111));
    }
    var_18 += (min((2772127121 % -19280), (min((var_1 ^ -374881627), 4994141596305738357))));
    #pragma endscop
}
