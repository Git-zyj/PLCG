/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (((((-0 ? var_9 : -var_2))) ? var_5 : ((((80 ? 1 : var_4)) - ((var_9 ? 1 : 73))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] = (+(((arr_0 [i_1 - 2] [i_1 - 2]) ? 2950326499 : var_1)));
                var_11 = ((2948954338 ? (((arr_3 [i_0] [i_0]) << (var_1 - 2129787139))) : (max((arr_2 [i_0] [i_1 + 1] [i_0]), var_5))));
                arr_7 [i_0] [i_1] [i_1] = ((!(((var_6 ? (arr_5 [i_1 - 2] [i_1 + 1]) : (((arr_3 [i_0] [i_1 - 2]) ? (arr_5 [i_1 + 1] [i_0]) : var_5)))))));
            }
        }
    }
    var_12 = -81;
    var_13 = ((!-2047556980) < var_5);
    #pragma endscop
}
