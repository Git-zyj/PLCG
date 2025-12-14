/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (var_15 ? var_18 : 3720242649);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1 + 3] [i_0] = -var_11;
                arr_5 [i_1] [i_0] [i_0] = 574724635;
                arr_6 [i_0] [i_1 - 2] = (arr_0 [i_1 - 2] [i_1 - 1]);

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_11 [i_0] [i_0] = 27;
                    var_20 = var_11;
                    arr_12 [7] [i_1 + 3] [i_2] [i_2] = (arr_7 [i_0] [7] [7] [i_1]);
                    var_21 ^= 12;
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    arr_15 [i_0] [i_1] [i_3] = ((((max((arr_9 [i_1 + 2] [i_1 - 2] [i_1 + 3]), (arr_9 [i_1 - 2] [i_1 + 1] [i_1 - 1])))) ? 3720242649 : (arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 4])));
                    var_22 = (arr_1 [i_0]);
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    var_23 = ((-2102 ? 8084910769458457903 : (((~(arr_16 [i_0] [i_4]))))));
                    arr_19 [i_1] = ((-(arr_2 [i_1 - 1] [i_0])));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_24 = (max(var_24, (~87)));
                            var_25 = ((93 ? ((min(((574724620 & (arr_13 [i_0] [i_1] [i_1]))), ((min(var_5, -87)))))) : (((arr_21 [i_0] [i_0] [i_5]) ? (((var_1 ? (arr_0 [i_5] [i_6]) : 3720242675))) : -2189808927967533225))));
                            arr_27 [i_6] [i_1] [i_5] [i_6] = var_2;
                            var_26 = var_9;
                        }
                    }
                }
            }
        }
    }
    var_27 = 2286345352;
    var_28 *= (max(4179242837, var_14));
    #pragma endscop
}
