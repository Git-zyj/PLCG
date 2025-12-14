/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -1462;
    var_20 = (min((min((var_16 < var_12), (max(var_14, 35536)))), (~var_3)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_21 += ((var_18 ^ ((min(((((arr_2 [6] [i_1]) == var_3))), (max(11016, 3760)))))));
                var_22 = var_7;
            }
        }
    }
    #pragma endscop
}
