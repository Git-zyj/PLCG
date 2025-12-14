/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_19 = ((arr_2 [i_0]) ? (((arr_3 [i_0] [i_1] [3]) ? (arr_2 [i_0]) : (arr_0 [i_0]))) : (((min((arr_2 [i_0]), (min((-32767 - 1), (arr_5 [i_0]))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_20 = ((((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_6 [i_3 - 2] [i_4 - 1] [i_0])))) && (((arr_2 [i_0]) || (arr_6 [i_3 - 3] [i_4 - 1] [i_0])))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] = ((((((arr_10 [0] [i_3 + 1] [i_4 - 1]) != (arr_10 [i_3 - 3] [i_3 + 1] [i_4 - 1])))) | ((((-32767 - 1) <= (((17234287670199958466 ? -32762 : -1430738396377555172))))))));
                            var_21 -= var_4;
                            var_22 ^= (((((arr_9 [i_4] [i_4] [i_4] [i_4 - 1]) > ((var_10 ? (arr_6 [8] [0] [2]) : var_13)))) ? (arr_11 [0] [i_3] [0]) : ((-(~var_17)))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_23 = (arr_8 [i_0] [i_1]);
                            arr_18 [i_0] [i_0] [i_0] = (((arr_12 [i_0]) != (((arr_4 [i_0]) << (var_3 - 1339905946)))));
                        }
                        var_24 = ((((min((((1430738396377555172 ? var_7 : (arr_11 [i_0] [i_3] [i_0])))), (arr_10 [i_3 - 2] [i_3 - 3] [i_3 + 1])))) ? ((((((arr_5 [i_3]) ? (arr_0 [i_3]) : (arr_7 [i_0])))) - (1212456403509593167 + 44569115))) : (((arr_11 [i_0] [i_2] [i_0]) - (arr_10 [i_0] [i_0] [i_0])))));
                        var_25 = (max(var_25, -8452329318769848793));
                    }
                }
            }
        }
        var_26 = ((~(((arr_14 [i_0] [i_0] [i_0] [i_0]) ? ((1551366376 ? (arr_8 [i_0] [i_0]) : var_7)) : ((var_4 ? var_1 : var_13))))));
        arr_19 [2] &= ((((((1212456403509593150 ? 65535 : 65511)) & ((29 ? 1430738396377555181 : var_4))))));
    }
    var_27 = (((var_14 ? ((var_15 ? -14 : 17234287670199958466)) : 1137)));
    var_28 = (((-32767 - 1) <= 32759));
    #pragma endscop
}
