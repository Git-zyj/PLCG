/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(-471964435510588681, ((((((var_9 ? 412372528 : 17))) && (((var_2 ? 412372504 : 215)))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 = 3627764747;
        arr_2 [i_0] = var_18;
        var_22 = (((((~-2269837162395255906) ? 1227308508 : ((2084241455 ? 105 : var_19))))) ? (((min(4294967295, (arr_0 [i_0]))) - (arr_1 [i_0]))) : var_2);
        arr_3 [i_0] = ((-((((((arr_0 [i_0]) ? var_19 : (arr_0 [i_0])))) ? (min(4294967295, var_6)) : (arr_0 [i_0])))));
    }
    #pragma endscop
}
