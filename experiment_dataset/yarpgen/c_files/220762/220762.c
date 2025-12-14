/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = ((min((arr_0 [i_0] [i_1 - 2]), ((2147483630 ? var_9 : -2147483631)))));
                var_12 = ((((max(((-2147483621 & (arr_1 [i_0] [i_1]))), (!var_0)))) ? ((-2147483619 ? 519301226 : -1562238816)) : (~-1036120122)));
                var_13 = ((-((~(arr_1 [i_0] [i_0])))));
                arr_6 [i_0] = 1005395052;
            }
        }
    }
    var_14 = ((var_1 << (9223372036854775807 - 9223372036854775806)));
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                {
                    arr_16 [i_4] [i_2] = (((-(6511386344587987442 >= 1036120122))) / (min(519301240, ((var_4 ? var_3 : 204)))));
                    arr_17 [i_2] [i_2] [i_2] [i_2] = var_5;
                    var_15 = var_5;
                }
            }
        }
    }
    #pragma endscop
}
