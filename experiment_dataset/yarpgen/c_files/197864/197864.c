/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_12);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 += (max((((var_2 > (~112)))), var_16));
        var_19 = 56;
        var_20 ^= (~var_3);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 = ((~(((!(750024540 != 3544942767))))));
        arr_5 [i_1] = ((-26179 ? 2 : -32758));
        arr_6 [i_1] = (~var_11);
        var_22 = (!var_1);
    }
    var_23 *= ((-(~750024540)));
    var_24 = ((!((((var_4 - var_4) ^ var_4)))));
    #pragma endscop
}
