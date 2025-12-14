/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = 42826;
                arr_8 [i_1] [11] [7] = var_11;
                arr_9 [16] [i_1] [i_1] = ((~((max(0, (arr_1 [i_1 + 1]))))));

                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    arr_12 [16] &= (max(-5, 5));
                    var_16 = (min((((min((arr_5 [i_1]), 6440)))), ((var_2 ? (((arr_11 [i_1]) ? var_11 : 30268)) : 30250))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    var_17 = 1;
                    var_18 ^= (((arr_10 [i_1 + 1] [i_1 - 1]) >= (arr_14 [14] [i_1 - 1] [i_1])));
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_19 = (min(var_19, (((-(arr_10 [i_1 - 1] [i_1 - 1]))))));
                    arr_19 [i_1] = (((((((47971 != (arr_11 [i_1])))) ^ 252)) / (max((((arr_14 [i_1] [i_1] [i_1]) + 5)), ((-15 - (arr_6 [i_0] [i_1])))))));
                    arr_20 [i_0] [i_1] [i_4] = ((((((((var_11 ? 46108 : (arr_10 [7] [i_1])))) ? (arr_17 [i_0] [i_1 + 1]) : 17561))) ? ((min((arr_16 [i_1 + 1] [i_1] [i_1 - 1]), 35261))) : (arr_14 [i_1] [i_1] [i_1 + 1])));
                    var_20 = -13096;
                    var_21 = ((-(max((arr_17 [i_0] [i_0]), ((-32177 ? 140 : 46125))))));
                }
            }
        }
    }
    var_22 = var_13;
    var_23 = (max((max(var_6, var_3)), var_3));
    #pragma endscop
}
