/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_8 & -2034089836);
    var_19 = (((var_2 ? (min(745102057398896576, -6475)) : -6474)));
    var_20 = ((var_11 ? (((61 ? 315497416863429024 : -711174466696669262))) : (max((((var_4 ? var_12 : var_11))), (min(329549901, 13443989009763982043))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 = (-960150872 ? ((((!(arr_1 [i_0]))))) : ((((((arr_1 [i_0]) ? -711174466696669262 : 1329215867))) * (arr_1 [i_0]))));
        var_22 = var_9;
    }
    #pragma endscop
}
