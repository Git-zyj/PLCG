/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_0, ((var_15 ? 57764 : var_8))));
    var_19 = (((~var_16) ? (0 && -4594) : (((255 && ((max(var_17, var_4))))))));
    var_20 = var_10;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0 + 1] = (max(((((-23447 && (arr_1 [i_0] [i_0]))) && (~99))), (((((var_3 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) && ((!(arr_1 [5] [i_0])))))));
        var_21 = (max(var_21, ((((((arr_0 [i_0 + 2]) && (~32767))) && 26610)))));
    }
    #pragma endscop
}
