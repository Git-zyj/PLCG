/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_14 |= (-24394 * -11116);
                        var_15 &= -1;

                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [i_0] = (min(24378, (arr_1 [i_0] [8])));
                            arr_14 [i_0] [i_1] [i_0] = -30351;
                            arr_15 [i_0] [i_1] [i_0] [9] [i_0] [11] [i_0] = (min(((var_3 ? (arr_8 [i_1] [i_0] [i_0] [i_3] [i_2] [i_3]) : (arr_7 [i_4 + 4] [i_1] [i_1] [i_1]))), ((((-127 - 1) ? -1 : 9880)))));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_19 [i_0] [i_0] [i_5] &= (max((min((min(-2046506303, (arr_11 [i_0] [12] [2] [12] [i_5] [i_5]))), ((24373 ? (arr_17 [i_1] [i_1] [i_1] [i_1]) : var_6)))), ((((min(var_9, var_12)) < 9880)))));
                            var_16 = (min(((((-32767 - 1) || (-24392 / 32759)))), (~2420088266)));
                            arr_20 [i_1] [i_3] [i_2] [i_1] [i_1] [i_1] [i_1] = (((var_8 || 1) * (min((min((arr_0 [i_2]), 0)), var_7))));
                        }
                    }
                    var_17 = (min(2058102063, 1023));
                    var_18 &= ((((12 ? (8 - 4294967288) : (arr_11 [i_0] [8] [i_0] [i_0] [i_2] [4]))) <= (((max((arr_5 [i_0]), var_11))))));
                    var_19 = (((arr_5 [i_0]) <= (arr_5 [i_0])));
                }
            }
        }
        var_20 = ((((arr_0 [i_0]) ? (arr_9 [i_0] [i_0] [12] [i_0]) : (arr_0 [i_0]))) < ((9880 ? -1 : 0)));
        var_21 = ((((max((arr_16 [i_0]), (arr_16 [i_0])))) ^ (min((~-1408313825), (arr_9 [i_0] [i_0] [i_0] [i_0])))));
        var_22 = 253;
    }
    var_23 = var_7;
    #pragma endscop
}
