/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_2] [i_1] [i_0] = 4260305805;
                    var_14 |= (((((5 * 2147483637) != var_4)) ? var_3 : -5));
                }
            }
        }
    }
    #pragma endscop
}
