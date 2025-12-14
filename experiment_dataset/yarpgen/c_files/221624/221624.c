/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 &= ((5 ? -7751 : 12));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (min(var_13, ((min((((var_5 ? var_9 : var_1))), (((arr_2 [i_0]) ? var_8 : var_10)))))));
        var_14 = (max(var_14, var_1));
        var_15 = (max(var_15, ((((((~(arr_1 [i_0]))) ? (max(17550, 6923493117158740830)) : var_1))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_16 &= (((!7131418937459577282) ? 41199 : 41199));
        arr_5 [i_1] [i_1] = (!2147483647);
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_17 ^= ((~((854412907 ? 0 : 255))));

        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            var_18 = (((12 % 14213495189926231054) ? -27748 : 18365547518749193277));
            arr_10 [i_3] = (24337 ^ 5);
        }
        var_19 -= (max(((max(65535, -38927370))), 19367));
        var_20 = (max(var_20, (((!(8192 <= var_5))))));
        arr_11 [i_2] |= (~1);
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_21 ^= (max(((~((4294967295 ? var_6 : var_0)))), (var_6 > var_4)));
        arr_14 [i_4] = var_10;
        var_22 = (min(var_22, var_2));
        var_23 = (min(var_23, (((((max(2147481600, -2147483647))) ? 67645734912 : 41199)))));
    }
    #pragma endscop
}
