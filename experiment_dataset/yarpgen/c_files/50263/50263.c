/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 *= ((((arr_4 [i_0] [i_0] [i_0 - 2]) ? (arr_4 [i_0] [i_0] [i_0 + 1]) : var_8)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_14 ^= ((((((((8545840727835135114 ? 123 : var_9))) ? ((107 ? 11724094321846159729 : 11724094321846159745)) : (arr_2 [i_0 - 2] [i_3 - 1])))) ? (arr_10 [i_1] [i_0 - 2] [i_3 + 1]) : (max(49363, 6722649751863391886))));
                                var_15 = (min((((arr_6 [i_0 + 1] [i_3 - 1] [i_3] [i_3]) ? (arr_6 [i_0 + 1] [i_3 + 1] [i_3 + 1] [i_4]) : (arr_6 [i_0 + 1] [i_3 - 1] [i_3 - 1] [i_4]))), (((!(arr_7 [i_3 - 1] [i_2] [i_2]))))));
                            }
                        }
                    }
                    arr_14 [i_2] = 107;
                }
            }
        }
    }
    var_16 = 6722649751863391887;
    #pragma endscop
}
