/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (max(var_8, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = var_3;
                arr_5 [i_0] [i_1] [i_0] = 4095;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_18 = (min((arr_7 [i_3]), var_9));
                var_19 = var_1;
            }
        }
    }
    var_20 ^= (max(-1, 5));
    #pragma endscop
}
