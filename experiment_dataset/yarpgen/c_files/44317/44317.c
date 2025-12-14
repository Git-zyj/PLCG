/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -127;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_14 ^= (min(126, -115));
                var_15 = (max(var_15, 125));
                arr_4 [i_1] = 127;
            }
        }
    }
    #pragma endscop
}
