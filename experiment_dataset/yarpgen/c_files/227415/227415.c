/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (1 == -5858853117085687385);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = (!-5208159619997436944);
                    arr_8 [i_2] [i_2] = (((arr_0 [i_0] [i_2]) ? 1 : -1));
                }
            }
        }
    }
    var_20 ^= -var_8;
    #pragma endscop
}
