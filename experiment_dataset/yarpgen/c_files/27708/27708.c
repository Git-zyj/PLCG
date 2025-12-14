/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 = -3638851073796755404;
    var_16 = var_8;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_17 = max(((~(~3638851073796755404))), 1454757281);
    }
    var_18 = (max(var_18, 2));
    #pragma endscop
}
