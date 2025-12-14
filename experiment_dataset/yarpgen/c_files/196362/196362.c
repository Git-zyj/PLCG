/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_11));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_20 = (max(var_20, ((min((max(43369, (arr_2 [i_0 + 1]))), (arr_2 [i_0 + 1]))))));
        arr_3 [i_0] [i_0] = ((((((min(var_17, var_10)) / (arr_2 [i_0 - 1])))) || 26621));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = (arr_5 [i_1]);
        arr_8 [i_1] [i_1] = (((((180 ? 14945365597170984469 : 100))) && (((119 ? 4294967291 : 1149502636)))));
    }
    #pragma endscop
}
