/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = 1499849167;
                var_17 = (max(var_17, (arr_3 [i_0])));
                var_18 &= ((!(((1499849167 / (((var_9 ? var_2 : (arr_4 [i_1])))))))));
                arr_5 [i_1] [i_0] = var_11;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            {
                arr_12 [8] [i_3 - 1] [i_2] = var_6;
                arr_13 [i_3] [1] [i_2] = ((~((-1613522419 ? (!var_14) : 192))));
                arr_14 [4] [i_3] = var_9;
            }
        }
    }
    var_19 &= ((min(2795118128, var_15)) % var_10);
    var_20 = (min(14200471354633578990, (min(1613522430, 13157665502146101468))));
    #pragma endscop
}
