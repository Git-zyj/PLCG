/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (((((!-3686242987660587808) ? (arr_4 [i_0]) : (max(0, 13)))) >= ((max(6385324078854716650, 11)))));
                var_21 ^= ((var_11 + (arr_1 [i_1] [i_0])));
            }
        }
    }
    var_22 ^= var_1;
    #pragma endscop
}
