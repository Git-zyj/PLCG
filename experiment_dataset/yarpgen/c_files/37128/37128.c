/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_3;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] = (arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1]);
                    var_19 *= (~(4 | 21061));
                }
            }
        }
        var_20 += 0;
    }
    #pragma endscop
}
