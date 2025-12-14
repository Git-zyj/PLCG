/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = (max(var_7, (min(18, 5289183343444186652))));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_14 = (max(((((max((arr_0 [i_0]), var_7))) - ((min((arr_1 [i_0]), 1))))), (((1 - (arr_1 [i_0]))))));
        var_15 = (min(var_15, ((((((max(127, 1)))) < (1 + 14973951773364063734))))));
        var_16 = (max((((~(arr_1 [i_0])))), (max(1, 10370235832722774466))));
    }
    var_17 = var_4;
    #pragma endscop
}
