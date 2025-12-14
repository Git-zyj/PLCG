/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 *= arr_4 [i_0] [i_1] [i_0 - 1];
                arr_5 [i_0 + 1] [i_0 + 1] [i_0] = (((((330069582 ? (arr_3 [i_0] [i_1] [i_1]) : (((-96 ? 1 : 1)))))) ? (1984973893602457461 < var_9) : (7638773689462863793 == -2030507874)));
            }
        }
    }
    #pragma endscop
}
