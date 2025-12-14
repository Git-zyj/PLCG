/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = -var_8;
        arr_3 [i_0] = ((((~(arr_1 [i_0]))) * (arr_2 [i_0] [i_0])));
        var_13 = 1466147533;
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1 - 2] = (((2828819763 * 5796075718504311421) && ((max((~78), (arr_4 [4]))))));
        var_14 = var_6;
        var_15 = 2828819757;
        var_16 += (((((((arr_6 [i_1 + 1] [i_1 + 4]) + 9223372036854775807)) >> (arr_5 [i_1 + 1])))) ? (((arr_4 [i_1 - 2]) ? (~65535) : (arr_6 [i_1] [i_1 + 2]))) : (var_6 * -13));
    }
    var_17 = (min(var_17, ((max((!24), ((var_1 && (!7))))))));
    var_18 = ((var_0 ? (85 % var_9) : (max(var_9, (!-104)))));
    #pragma endscop
}
