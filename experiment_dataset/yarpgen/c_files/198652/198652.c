/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (min(var_16, (((((max(-137, (var_2 <= var_6)))) ? (arr_0 [i_0]) : (min((((~(arr_0 [0])))), (arr_1 [i_0]))))))));
        var_17 &= var_5;
        var_18 = (max(var_18, (((((var_0 ? (((1 ? -22797 : 798998383))) : (arr_0 [i_0]))) >= (((((var_13 ? (arr_1 [i_0]) : (arr_1 [i_0])))))))))));
        var_19 = (min(var_19, (((31 ? var_4 : (((~var_10) | ((var_10 ? (arr_0 [i_0]) : var_0)))))))));
    }
    var_20 &= var_0;
    var_21 = (max(var_21, ((min((((var_10 > var_3) ? (max(0, -2409654584169304)) : var_5)), var_8)))));
    #pragma endscop
}
