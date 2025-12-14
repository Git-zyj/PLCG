/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 -= ((!((max(39394, var_3)))));
                    var_19 = (max(var_19, ((((arr_4 [i_0] [i_0] [i_2 - 2]) << (((((arr_4 [i_1] [i_2] [i_2 - 1]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [21] [i_1 - 1] [i_0]))) - 2514419474)))))));
                    var_20 = (min((((!(arr_6 [i_2 + 1] [i_1 - 3] [i_1] [i_0])))), (((arr_6 [i_0] [i_0] [i_1] [i_2 - 1]) ? var_14 : 231571816))));
                }
            }
        }
        arr_8 [i_0] [i_0] = ((-(((arr_1 [i_0] [i_0]) ? (arr_7 [i_0] [3] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0])))));
    }
    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        var_21 += ((-((max((arr_1 [i_3 - 1] [i_3 - 1]), (arr_1 [i_3 - 1] [i_3 - 1]))))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_14 [i_4] = ((var_5 ? var_11 : (arr_6 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1])));
            var_22 = ((39379 ? var_16 : (arr_9 [i_3 - 2])));
            var_23 |= ((arr_11 [16]) ? (((arr_11 [4]) ? var_0 : 4063395467)) : (((var_3 ? 26142 : 10))));
            var_24 = -17060;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            arr_17 [i_3] [i_3] = -var_0;
            var_25 = (~39394);
        }
    }
    var_26 = var_12;
    #pragma endscop
}
