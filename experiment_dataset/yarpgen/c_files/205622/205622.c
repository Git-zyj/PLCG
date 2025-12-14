/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = 897326659;
    var_15 = (max(var_15, (((((((((var_11 ? var_10 : var_11))) ? -var_5 : var_11))) ? (max((4134953116475760451 != 32767), ((var_2 ? var_4 : var_1)))) : ((var_5 & (((-32767 - 1) ^ 32766)))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 &= (max((arr_0 [i_0] [0]), (max(32767, 32755))));
        arr_4 [i_0] = (((3993536788 << (8191 - 8174))) | (((((var_9 ? var_8 : var_4)) - (arr_3 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (!32762);
        arr_8 [i_1] [i_1] = ((+(((arr_0 [i_1] [i_1]) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_1])))));
    }
    #pragma endscop
}
