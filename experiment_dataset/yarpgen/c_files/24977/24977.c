/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = 6;
        arr_4 [i_0] = ((((max((arr_0 [i_0] [i_0]), ((536838144 ? (arr_0 [i_0] [i_0]) : var_11))))) ? 8388607 : -1161744078494682402));
        var_16 = (max(var_16, (((8388608 ? (max(var_0, (arr_2 [i_0]))) : (arr_0 [i_0] [i_0]))))));
    }
    var_17 = 8388616;
    var_18 = (((min((max(var_7, 1)), (~44))) | (((((min(8388607, 44))) ? (((1 ? -49091608 : var_11))) : 1414243087)))));
    var_19 = (max(var_19, var_5));
    #pragma endscop
}
