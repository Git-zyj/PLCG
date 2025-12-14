/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = (min(133, 3153910512));
                arr_4 [i_0] [i_0] [i_1] = ((var_2 ? (((((arr_0 [i_0]) < var_1)) ? (arr_2 [i_1 - 1] [i_1 + 3]) : (arr_0 [9]))) : (arr_2 [i_0] [i_1 + 1])));
            }
        }
    }
    var_17 = var_3;
    var_18 = (max(var_18, (var_14 == 4294967295)));
    var_19 = var_14;
    #pragma endscop
}
