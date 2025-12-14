/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_17 = var_0;
        var_18 = ((~(arr_0 [i_0])));
        var_19 -= var_11;
        var_20 = ((28661 ? -127 : 9347595212671069880));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 = -14;
                    var_22 &= ((-7862161876186386831 ? (arr_0 [i_2]) : 7720662289240642801));
                    var_23 = 268435456;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_24 |= ((var_9 || (arr_1 [i_3] [i_3])));
        var_25 ^= (!2);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        arr_12 [i_4] = (-9 ? (arr_3 [i_4] [i_4]) : (!-32591));
        var_26 = arr_8 [i_4];
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_27 = (arr_14 [i_5]);
        var_28 |= var_14;
        var_29 = (arr_4 [i_5] [16] [11]);
    }
    var_30 = ((var_16 ^ (max(var_12, (-9223372036854775807 - 1)))));
    var_31 |= var_4;
    #pragma endscop
}
