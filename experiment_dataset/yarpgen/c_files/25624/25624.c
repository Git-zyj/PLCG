/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_10 -= ((((max(((2061751386 ? 1886691710 : var_7)), -var_6))) ? ((+((-2061751387 ? (arr_1 [i_0]) : 255)))) : ((var_0 ? var_4 : (arr_5 [i_2 + 4] [i_0 + 2] [i_2 - 1] [i_1])))));
                    var_11 ^= var_0;
                }
            }
        }
    }
    var_12 &= ((var_3 ? var_5 : var_8));
    #pragma endscop
}
