/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_15 = min(((var_3 ? (arr_0 [i_0] [i_0 + 1]) : (max((-9223372036854775807 - 1), (arr_1 [i_0]))))), (((max(var_10, var_5)))));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_16 = 124;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_17 = var_1;
                            var_18 = (((~(arr_10 [i_4 + 1] [i_0 - 1]))));
                        }
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = ((((((arr_10 [2] [4]) ? (max((arr_8 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0]), var_5)) : (((var_11 ? (arr_1 [i_0]) : (arr_6 [i_0] [19] [i_0]))))))) ? 0 : (arr_11 [i_0 + 1] [i_0 - 1])));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    {
                        var_19 ^= ((((((arr_18 [i_7 + 3] [2] [i_7] [i_7 - 2]) - (arr_18 [i_7 + 2] [i_7 + 1] [8] [i_7 + 1])))) ? (((arr_15 [i_5] [i_6]) << (((arr_11 [i_5] [i_8]) - 1181389465)))) : (min((var_9 + var_8), ((((arr_20 [i_8] [i_8] [i_8] [i_7] [i_8] [i_8]) || (arr_11 [i_5] [i_5]))))))));
                        var_20 = (min((((arr_1 [i_6]) ? (arr_6 [i_5] [i_5] [i_5]) : var_6)), var_7));
                        var_21 = (((var_6 * var_14) ? ((((arr_22 [0] [i_7 + 3] [17] [i_7]) / (arr_22 [i_5] [i_7 + 4] [i_7] [3])))) : (min(4294967295, var_1))));
                        var_22 = (((var_10 & var_12) ? (arr_17 [i_7 + 1] [i_6] [i_7 - 2]) : ((var_5 ? (((arr_7 [i_7] [i_6] [i_7] [i_6]) ? var_11 : var_10)) : var_9))));
                    }
                }
            }
        }
        var_23 = ((((((arr_8 [i_5] [i_5] [22] [3] [i_5] [i_5]) ? (arr_8 [i_5] [i_5] [i_5] [i_5] [2] [19]) : var_5))) ? ((max((arr_10 [i_5] [i_5]), -9223372036854775792))) : (((((2300900480 ? 0 : 0))) ? var_0 : 1))));
    }
    var_24 += var_9;
    var_25 = (max((((6186921421108423381 ? 1 : (-2147483647 - 1)))), (((var_6 ? var_12 : var_3)))));
    #pragma endscop
}
