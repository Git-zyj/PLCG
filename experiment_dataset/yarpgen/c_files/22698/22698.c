/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_7;
    var_13 = var_11;
    var_14 &= 4062296096;
    var_15 -= var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = -27981;
                var_16 = 54;
                var_17 = 10;
                arr_8 [i_0] [i_0] = -4499032661718069168;
                arr_9 [i_1] [20] [i_1] |= 1106192841;
            }
        }
    }
    #pragma endscop
}
