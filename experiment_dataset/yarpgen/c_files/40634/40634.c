/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [11] [i_0 - 1] |= 56786;
                arr_5 [i_0] [11] = ((-(arr_3 [i_0 + 2] [i_0 - 1] [i_0 - 1])));
                var_13 = arr_2 [i_0] [i_1] [i_0 + 1];
                var_14 *= ((((min(var_7, 29033))) ? (!44852) : var_11));
            }
        }
    }
    var_15 &= ((~((min(var_12, var_3)))));
    var_16 = var_4;
    #pragma endscop
}
