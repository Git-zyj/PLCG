/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = ((~((-636005595 ? 0 : 3448))));
        var_17 -= (arr_1 [1]);
        var_18 = (((-950526150 ^ var_11) ? (((16 ? -23 : 0))) : 0));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_19 = 8;
        arr_4 [i_1] = (12774 / 4294967295);
        var_20 &= (((!0) ? -2381117380276844253 : (16 + 1)));
        var_21 = (-0 | (arr_2 [i_1 + 2] [i_1]));
    }
    var_22 = var_9;
    var_23 = ((((((max(4294967295, 1)) / (((65530 ? 1 : 1)))))) ? var_15 : 1));
    var_24 = ((var_13 ? var_2 : var_6));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            {
                var_25 = (min(var_25, (((((max(((var_12 ? (arr_8 [i_3] [i_3] [i_3 + 1]) : 10)), -65530))) || ((((-4663149226981986446 ? 65535 : (arr_6 [i_2] [i_3]))))))))));
                var_26 |= (((-2147483647 - 1) ? 12 : 2996807093));
            }
        }
    }
    #pragma endscop
}
