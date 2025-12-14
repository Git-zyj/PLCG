/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 -= (arr_2 [i_0] [i_0]);
        var_19 = (min(var_19, ((10049 + ((((max(var_1, 18446744073709551615))) ? 682353134 : (min((arr_1 [8]), -60))))))));
        var_20 = (min(var_20, ((((-(~4024)))))));
    }
    var_21 ^= (min((min(var_16, (min(var_14, 273119431343128423)))), ((((13117838381542030155 ? 67108863 : 10047))))));
    #pragma endscop
}
