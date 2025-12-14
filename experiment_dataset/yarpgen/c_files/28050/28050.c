/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (-((((var_0 ? 1 : 1)) * (arr_1 [i_0] [i_0]))));
                arr_7 [i_0] [i_0] [i_1] = ((-(arr_0 [i_1])));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_12 [i_0] [i_1] [i_2] = ((((((4294967293 ? 44758 : 63)))) - (arr_0 [12])));
                    arr_13 [i_0] [i_0] [i_0] [i_2] = ((!((max((arr_10 [i_0]), var_0)))));
                    var_18 += (arr_2 [i_1] [i_1]);
                }
            }
        }
    }
    var_19 = var_9;

    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        arr_16 [i_3] [i_3] |= (((arr_15 [i_3 + 2] [i_3 + 4]) ? (min((arr_15 [i_3 + 1] [i_3 + 3]), (arr_15 [i_3 + 3] [i_3 + 3]))) : (((arr_15 [i_3 + 1] [i_3 + 1]) ? (arr_15 [i_3 - 1] [i_3 + 4]) : (arr_15 [i_3 + 1] [i_3 + 1])))));
        var_20 = max((max(var_3, var_16)), (-117 % 1));
        var_21 -= (arr_14 [i_3 + 2] [i_3]);
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        var_22 = var_10;
        var_23 = (max(var_23, (((var_15 ^ ((((arr_8 [i_4 - 1] [i_4 - 1] [i_4]) || (arr_2 [i_4] [i_4])))))))));
        var_24 = (arr_3 [i_4]);
    }
    #pragma endscop
}
