/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1023;
    var_16 = (max(7591968652656065362, ((((!9223372036854775807) ? 0 : -var_9)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [1] = (arr_1 [i_0] [i_0]);
        var_17 -= ((~((-(max(var_7, -6838001310760688515))))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((-(max(1, ((1 ? 1 : var_12))))));
        var_18 = ((+((((!1) <= 1)))));
        var_19 = (min((((-17592186044416 ? 1 : 0))), (max(1, (-9223372036854775807 - 1)))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_20 = (((max(((max(1, 0))), (arr_1 [i_2] [i_2]))) * ((((max(4273, -5725)))))));
        var_21 = (max(((~((1 ? -10393 : 1)))), (((((min((-9223372036854775807 - 1), 35958428274786304))) && (((arr_9 [i_2]) != (arr_9 [i_2]))))))));
    }
    #pragma endscop
}
