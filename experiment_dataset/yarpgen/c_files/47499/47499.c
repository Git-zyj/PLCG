/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((2082085454 ? 2212881845 : 6252164105665127226))) || ((((2082085454 == 2212881841) ? (58554 == 1569421752) : (5057749502710949511 <= 41359))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_1] [23] = (((((((((10 ? 24 : 15602))) || (((104 ? 127 : 37))))))) <= (4473065339846404242 + 57)));
                arr_7 [i_1] = (((((104 && 11124) ? (8369444751171605452 - 0) : (1 >> 1))) % 8414073947580567071));
            }
        }
    }
    var_15 = 2793;
    #pragma endscop
}
