/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_18 += (arr_1 [i_0]);
            var_19 = (min(var_19, (arr_3 [i_1 + 1] [i_1] [i_1])));
            arr_6 [i_1] [i_1] [i_1] = ((0 ? ((120 ? 1030010920 : (arr_5 [i_1] [i_1]))) : 1025252806));
        }

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_20 -= var_13;
            arr_9 [i_0] [i_0] = var_14;
            var_21 = ((255 << (((-6596 + 6625) - 9))));
        }
    }
    var_22 = ((var_11 ? var_14 : (min(var_17, (1030010930 ^ 3264956354)))));
    var_23 ^= var_15;
    #pragma endscop
}
