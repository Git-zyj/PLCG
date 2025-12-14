/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -504;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = (min(65032, 1021926271));
                    var_18 = var_13;
                    var_19 += ((+(((~0) ? var_9 : (max(var_0, var_11))))));
                    var_20 = (max((((!(arr_8 [1] [i_1 - 2] [i_2] [i_1 - 2])))), ((1021926271 ? (1477735129 > 251) : ((var_13 ? (arr_8 [i_0] [i_0] [6] [i_0]) : (arr_4 [i_1 - 2])))))));
                    arr_10 [i_2] = 65032;
                }
            }
        }
    }
    #pragma endscop
}
