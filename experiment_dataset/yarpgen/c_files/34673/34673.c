/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0 + 3] [i_0] = (((((min(-1, (arr_0 [i_0 - 2] [i_0 + 2]))) + 9223372036854775807)) << (((arr_1 [i_0]) - 213))));
        var_14 += (!var_6);
        arr_3 [i_0 + 1] = ((max(2961405551, (arr_1 [i_0 - 3]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = (+-1333561762);
        var_15 |= ((((arr_5 [0] [i_1]) ? (arr_4 [i_1] [i_1]) : 28775)));
        var_16 = (arr_5 [i_1] [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_17 = ((var_2 >= (arr_5 [i_3] [i_1])));
                    var_18 = ((!(((arr_7 [i_2] [16] [i_2]) && 1333561744))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_19 = ((~36750) ? ((var_3 ? 3087777849118601158 : var_5)) : var_2);
                                var_20 = (((arr_5 [i_1] [i_1]) ? 28796 : (arr_7 [i_2 + 1] [i_2] [i_2 - 2])));
                            }
                        }
                    }
                    arr_16 [i_3] [i_2] [6] = (arr_14 [i_2 + 1] [21] [i_3]);
                }
            }
        }
    }
    var_21 = (max(var_5, var_9));
    var_22 = var_4;
    /* LoopNest 3 */
    for (int i_6 = 4; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    var_23 = (max(var_23, (((!(((arr_11 [i_6] [i_7] [i_7] [i_8]) != (((arr_17 [2]) + (arr_24 [i_6 + 2] [i_7] [i_8] [i_6 + 2]))))))))));
                    var_24 = ((((-(arr_7 [i_6 - 1] [i_7 - 2] [i_7 - 2]))) < (((((16384 << (33538048 - 33538034)))) ? (arr_4 [i_6] [i_7]) : 12))));
                }
            }
        }
    }
    #pragma endscop
}
