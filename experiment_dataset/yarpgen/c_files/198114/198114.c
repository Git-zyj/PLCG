/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_18 = (max(var_18, ((!((((arr_1 [i_0 - 1] [i_0 - 2]) ? (arr_1 [i_0 - 1] [i_0 - 1]) : (arr_1 [i_0 + 1] [i_0 - 1]))))))));
        var_19 = (min(var_19, ((~(max(59, 7))))));
        arr_2 [i_0 - 2] = (((arr_1 [i_0] [i_0]) ? ((((((arr_0 [i_0 - 2] [i_0 + 1]) ? (arr_0 [i_0] [i_0]) : -6391346530980183263)) >= (arr_1 [i_0] [i_0])))) : 192));
    }
    var_20 = 255;
    var_21 ^= ((var_0 ? (0 << 1) : (((~var_17) ? var_12 : var_6))));
    var_22 = var_16;
    #pragma endscop
}
