/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_11 = -32;
        var_12 = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        var_13 = (((min((((3907731918 < (arr_8 [i_1] [i_1]))), (arr_3 [i_0]))))));
                        var_14 ^= (arr_11 [i_0] [i_1] [i_3 + 2] [i_2 + 1] [i_0]);
                    }
                    for (int i_4 = 3; i_4 < 11;i_4 += 1)
                    {
                        arr_14 [i_0] [i_4] [i_4] [i_4] = (((((arr_2 [i_0] [i_0]) - (arr_1 [i_0 - 1]))) + (((arr_0 [i_0 + 3]) - (arr_0 [i_0 - 3])))));
                        var_15 &= (((((arr_4 [i_4 - 3]) / (((var_8 ? (arr_10 [i_0] [i_1] [i_2] [i_4]) : (arr_1 [i_4])))))) >> ((((min(-884163105, var_5))) - 2210652115))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_5] = ((-((-1670665480 ? -22 : 1))));
                        var_16 = ((arr_9 [i_0 + 2] [i_1] [i_2 - 1] [i_5]) % var_10);
                        var_17 = ((!(arr_16 [i_0] [i_1] [i_2] [i_5])));
                    }
                    var_18 = (max(var_18, ((((max((max((arr_5 [i_1] [i_1]), 884163105)), 3378321327)) * ((min((7584571025836213029 != 2187180152), -1))))))));
                    var_19 = (((((((arr_10 [i_0] [i_1] [i_1] [i_2]) == (arr_15 [i_0]))))) * ((-(17011636500364791253 + 17011636500364791253)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    var_20 = var_6;
                    var_21 *= (((((arr_16 [i_7 - 1] [i_7] [i_7 - 1] [i_7]) + (arr_16 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7]))) * (((arr_16 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1]) + (arr_16 [i_7 - 1] [i_7] [i_7 - 1] [i_7])))));
                }
            }
        }
    }
    var_22 &= var_8;
    #pragma endscop
}
