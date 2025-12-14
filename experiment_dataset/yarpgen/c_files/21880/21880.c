/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 ^= ((((arr_3 [i_0] [i_0]) ? (arr_0 [i_0]) : var_6)) % ((var_8 ? var_1 : (arr_3 [i_0] [i_0]))));
        var_12 = 108;
    }
    var_13 = ((-231 ? (((var_9 % 18446744073709551593) - (!var_4))) : (((var_9 % (var_8 <= var_8))))));
    var_14 = ((~(max(var_10, 32850))));
    var_15 = ((var_5 ? (~91) : var_5));

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_16 = (-127 - 1);
        arr_7 [i_1] |= (!231);
        var_17 = (max(var_17, (((((~-17478) ? (arr_2 [i_1]) : (((((arr_2 [i_1]) == (arr_2 [i_1])))))))))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_10 [i_2] = (arr_3 [i_2] [7]);
        var_18 = (max(var_18, ((((arr_0 [i_2]) ? (((arr_0 [i_2]) ? (arr_0 [i_2]) : (arr_0 [i_2]))) : ((((arr_0 [i_2]) > (arr_0 [i_2])))))))));
    }
    for (int i_3 = 4; i_3 < 8;i_3 += 1)
    {
        var_19 *= var_4;
        var_20 = ((((((arr_11 [i_3 - 3]) + (~var_10)))) ? ((1099494850560 << (((-124 + 177) - 43)))) : (arr_2 [i_3])));
    }
    #pragma endscop
}
