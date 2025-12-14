/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (max((var_6 * var_0), (((!((min(var_1, var_0))))))));
    var_11 *= (((min(((min(16749, var_1))), var_3)) / var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (min((arr_4 [i_1] [i_0] [i_0]), (min((arr_5 [i_1 - 1] [i_0]), (max(var_5, var_6))))));
                var_13 += 1;
            }
        }
    }
    var_14 = (min((min((min(var_3, var_6)), -var_7)), (var_0 ^ var_0)));
    #pragma endscop
}
