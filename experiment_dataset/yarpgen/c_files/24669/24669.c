/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (202 ? 0 : (-2147483647 - 1));
        arr_3 [i_0] = (~var_10);
        arr_4 [i_0] = (var_0 / 122);
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_12 &= ((((216 ? var_9 : var_4))));
        var_13 = ((((((((0 ? var_10 : var_1))) ? (40 || 40576) : var_6))) ? ((((max(-28, 4294967273))) ? var_2 : ((0 ? var_6 : var_4)))) : 69));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_9 [i_2] [14] |= 350950614681305358;
        var_14 = (max(var_14, (((((min(var_4, (min(65535, 18446744073709551615))))) ? ((0 ? (var_6 / 216) : 1792410230)) : (((min(0, var_6)))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_15 = (((var_2 ^ var_3) >= 29));

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_18 [i_4] [i_4] = ((215 ? var_11 : ((0 ? var_3 : 18446744073709551614))));
            var_16 |= var_5;
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_17 = (var_1 << 0);
            var_18 |= (!1513779472956144485);
        }
    }
    var_19 &= ((((((((max(var_2, var_3)))) | var_0))) ? (((((var_7 ? 46 : 13)) << ((max(var_9, -12)))))) : 8));
    var_20 = (4278432340450316019 == 9223372036854775800);
    #pragma endscop
}
