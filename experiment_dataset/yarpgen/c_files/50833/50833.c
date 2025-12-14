/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 ^= 2776186647;
                var_21 = (min(var_21, (9855338321928166546 & 40)));
                var_22 = (min(var_22, ((((((185 ? 65535 : 67))) ? (arr_1 [i_0]) : 63)))));
                var_23 = (max(var_23, 32742));
            }
        }
    }
    #pragma endscop
}
