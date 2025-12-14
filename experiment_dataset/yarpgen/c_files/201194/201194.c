/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    var_21 = (((((var_0 ? 4561959312571821065 : (max(2829010326171859759, 217))))) ? var_19 : ((min(((-1310633844931530478 ? 0 : var_3)), (var_2 == 241))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_22 = (!(((var_7 ? var_6 : ((((arr_0 [i_0] [i_0]) || var_14)))))));
        arr_2 [i_0] [i_0] = (min((arr_0 [i_0] [i_0]), ((((((-3094 ? -26237 : 255))) ? ((236 ? var_10 : (arr_1 [i_0] [i_0]))) : -10457)))));
        var_23 = (min(var_23, (((((min(-2354975435819561695, (~44)))) ? ((((((-(arr_0 [i_0] [i_0])))) ? (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) : ((1 ? 11009 : 2354975435819561670))))) : (min(var_19, (arr_1 [i_0] [20]))))))));
    }
    var_24 = var_14;
    var_25 = var_17;
    #pragma endscop
}
