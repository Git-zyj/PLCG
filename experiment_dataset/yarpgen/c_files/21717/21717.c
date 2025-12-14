/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((max((((1 ? 45133 : 62114))), (max(var_13, 7723863932245007949)))) < var_14))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = ((((((min((arr_3 [8] [8] [i_1]), 211))) ? ((min(1, 1))) : 1)) * (var_5 >> 1)));
                var_18 += (((((var_0 & var_2) & (max(var_2, 1)))) >> 16));
                arr_4 [i_0] [i_0] = 1;
            }
        }
    }
    #pragma endscop
}
