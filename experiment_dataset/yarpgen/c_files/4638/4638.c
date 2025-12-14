/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((((min(8661533971001003911, 56)))), (max((~4099446010), var_7))));
    var_14 -= (min((((((var_6 ? var_1 : var_9))) ? (max(var_1, var_0)) : (max(var_3, var_8)))), var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 *= (((~(arr_4 [i_1] [i_1 - 3]))) | (((~(((arr_1 [i_1]) ^ (arr_0 [i_2])))))));
                    var_16 *= ((-(max(var_1, (((arr_6 [i_0] [i_1] [i_2]) ? var_5 : var_10))))));
                    var_17 = (max(((max((arr_4 [i_0] [i_1 - 3]), (arr_4 [i_0] [i_1 + 1])))), (max((((var_12 ? -919634210475610622 : var_7))), ((35112 ? var_2 : (arr_6 [i_0] [i_1 - 3] [i_2])))))));
                    arr_9 [i_0] [i_1] [i_0] = var_3;
                }
            }
        }
    }
    var_18 = -var_12;
    #pragma endscop
}
