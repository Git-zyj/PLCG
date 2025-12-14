/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = ((!((((max(0, var_14))) || (arr_2 [i_0])))));
        var_17 = ((var_3 ? (var_4 - var_11) : (((min(-72, (arr_2 [i_0])))))));
        var_18 = ((((-(~39296))) & ((var_8 & (((var_0 <= (arr_0 [i_0]))))))));
    }
    var_19 = (max(var_19, var_13));
    var_20 &= (var_10 >= var_8);
    #pragma endscop
}
