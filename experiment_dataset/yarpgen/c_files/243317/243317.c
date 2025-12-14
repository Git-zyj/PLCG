/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 ^= (max((((arr_0 [i_0]) % (arr_1 [i_0]))), (max(63, (arr_1 [0])))));
        arr_3 [i_0] = (max((0 < 25161602), 6816868761683947027));
        arr_4 [i_0] = (max(((((var_8 >= var_3) <= ((var_5 >> (4269805716 - 4269805697)))))), ((~(max(-1741649373506592424, var_3))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [2] [i_1] = (min(var_10, ((1 ? 81 : 3))));
        arr_8 [i_1] = -392;
        var_15 = (((~64) * (((55068 ^ (arr_5 [i_1]))))));
    }
    var_16 = ((var_12 ? (16887 ^ 4477663748383649200) : var_11));
    var_17 = var_8;
    #pragma endscop
}
