/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (max((((0 * var_1) / (max(77, (arr_0 [i_0] [i_0]))))), (((~(arr_1 [i_0]))))));
        var_13 += (~((170 ? 12493158141728849424 : 0)));
        var_14 &= var_11;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = (((6489822037900711135 - 31888) & ((((arr_3 [i_2 - 3]) ? -23754 : (((!(arr_1 [i_1])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_0] [i_2] [i_3] [i_0] = (min(6489822037900711135, -6));
                                var_16 = (((((-31888 ? (((var_1 ? (arr_4 [12] [i_0] [0]) : (arr_13 [i_3])))) : 1047337172))) ? (max((var_11 >= 1116267962), (arr_14 [i_4 + 2] [i_4 + 2] [i_3 + 1] [i_2 - 2] [i_4 + 2] [i_1] [i_3]))) : ((min(((min(31893, -31869))), ((163 ? (arr_12 [i_4]) : 101)))))));
                                var_17 = (min((arr_14 [10] [i_4 - 2] [i_2 - 2] [17] [10] [i_2] [i_1]), (((((max((arr_13 [i_2]), 0))) ? (arr_8 [i_2 - 2] [i_3 - 1] [i_3 - 1] [i_4 - 4]) : ((var_6 ? 31869 : 1)))))));
                            }
                        }
                    }
                    var_18 = (min((((((max(var_10, -13545))) && 13551))), (max((arr_6 [0] [i_1] [i_2 - 2]), -3463032004960883614))));
                }
            }
        }
    }
    var_19 = ((max(var_9, ((min(-3463032004960883617, var_4))))));
    var_20 = -32767;
    #pragma endscop
}
