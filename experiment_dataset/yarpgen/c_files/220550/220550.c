/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = 2246886425;
                    var_17 ^= (min(var_1, var_14));
                }
            }
        }
    }
    var_18 *= var_13;
    var_19 = var_6;
    var_20 = (max(((((max(2048080871, 2246886425)) | var_0))), (min(var_12, var_4))));
    #pragma endscop
}
